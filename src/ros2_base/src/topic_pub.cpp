#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>

using namespace std::chrono_literals;

class MyPublisher : public rclcpp::Node
{
private:
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub1_; //发布者对象
    rclcpp::TimerBase::SharedPtr timer1_;                      //定时器对象

    void timer_callback()
    {
        auto msg = std_msgs::msg::String();
        msg.data = "发布chatter 话题的消息！";

        RCLCPP_INFO(this->get_logger(), "发布：%s", msg.data.c_str());

        pub1_->publish(msg);
    }

public:
    MyPublisher()
        : Node("study_publisher")
    {
        // 发布者
        pub1_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);

        //定时回调
        timer1_ = this->create_wall_timer(
            500ms,
            std::bind(&MyPublisher::timer_callback, this));
    }

    ~MyPublisher()
    {}
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MyPublisher>());
    rclcpp::shutdown();

    return 0;
}
