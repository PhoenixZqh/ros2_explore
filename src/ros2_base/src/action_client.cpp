#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "ros2_base/action/count_number.hpp"

using CountNumber = ros2_base::action::CountNumber;
using GoalHandleCountNumber = rclcpp_action::ClientGoalHandle<CountNumber>;

class CountNumberClient : public rclcpp::Node
{
public:
    CountNumberClient()
        : Node("count_number_client")
    {
        // 创建Action Client
        client_ = rclcpp_action::create_client<CountNumber>(this, "count_number");

        // 等待Action Server
        while (!client_->wait_for_action_server(std::chrono::seconds(2)))
        {
            RCLCPP_INFO(this->get_logger(), "等待Action Server...");
        }

        // 设置目标
        auto goal_msg = CountNumber::Goal();
        goal_msg.order = 5;

        // 配置发送目标选项
        auto send_goal_options = rclcpp_action::Client<CountNumber>::SendGoalOptions();
        send_goal_options.feedback_callback = std::bind(&CountNumberClient::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
        send_goal_options.result_callback = std::bind(&CountNumberClient::result_callback, this, std::placeholders::_1);

        // 异步发送目标
        client_->async_send_goal(goal_msg, send_goal_options);
        RCLCPP_INFO(this->get_logger(), "已发送目标：order=%d", goal_msg.order);
    }

private:
    rclcpp_action::Client<CountNumber>::SharedPtr client_;

    void feedback_callback(GoalHandleCountNumber::SharedPtr, const std::shared_ptr<const CountNumber::Feedback> feedback)
    {
        RCLCPP_INFO(this->get_logger(), "收到反馈：progress=%d", feedback->progress);
    }

    void result_callback(const GoalHandleCountNumber::WrappedResult &result)
    {
        RCLCPP_INFO(this->get_logger(), "任务完成，结果=%d", result.result->result);
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CountNumberClient>());
    rclcpp::shutdown();
    return 0;
}