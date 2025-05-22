#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "ros2_base/action/count_number.hpp"

using CountNumber = ros2_base::action::CountNumber;
using GoalHandleCountNumber = rclcpp_action::ServerGoalHandle<CountNumber>;

class CountNumberServer : public rclcpp::Node
{
public:
    CountNumberServer()
        : Node("count_number_server")
    {
        using namespace std::placeholders;
        // 创建Action Server, 并绑定回调函数, 三个回调函数是必须的
        action_server_ = rclcpp_action::create_server<CountNumber>(
            this,
            "count_number",
            std::bind(&CountNumberServer::handle_goal, this, _1, _2),
            std::bind(&CountNumberServer::handle_cancel, this, _1),
            std::bind(&CountNumberServer::handle_accepted, this, _1));
        RCLCPP_INFO(this->get_logger(), "Action Server已启动");
    }

private:
    rclcpp_action::Server<CountNumber>::SharedPtr action_server_;

    // 处理目标请求
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID &, std::shared_ptr<const CountNumber::Goal> goal)
    {
        RCLCPP_INFO(this->get_logger(), "收到目标：order=%d", goal->order);
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    // 处理取消请求
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleCountNumber> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "收到取消请求");
        (void)goal_handle; // 避免未使用警告
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    // 处理接受的目标
    void handle_accepted(const std::shared_ptr<GoalHandleCountNumber> goal_handle)
    {
        std::thread{std::bind(&CountNumberServer::execute, this, goal_handle)}.detach();
    }

    // 执行任务
    void execute(const std::shared_ptr<GoalHandleCountNumber> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "开始执行任务...");
        const auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<CountNumber::Feedback>();
        auto result = std::make_shared<CountNumber::Result>();

        for (int i = 1; i <= goal->order; ++i)
        {
            if (goal_handle->is_canceling())
            {
                RCLCPP_WARN(this->get_logger(), "任务被取消");
                goal_handle->canceled(result);
                return;
            }

            feedback->progress = i;
            goal_handle->publish_feedback(feedback);
            RCLCPP_INFO(this->get_logger(), "反馈：progress=%d", i);
            rclcpp::sleep_for(std::chrono::milliseconds(500));
        }

        result->result = goal->order * 2;
        goal_handle->succeed(result);
        RCLCPP_INFO(this->get_logger(), "任务完成，结果=%d", result->result);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CountNumberServer>());
    rclcpp::shutdown();
    return 0;
}