#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp" // 引入标准字符串消息类型

// 创建类继承自rcl::Node的类

class MySubscriber : public rclcpp::Node
{
private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub1_; //订阅者对象

    void topic_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "收到消息：%s", msg->data.c_str());
    }

public:
    MySubscriber()
        : Node("study_subscriber") //创建节点名称
    {
        sub1_ = this->create_subscription<std_msgs::msg::String>(
            "chatter",                                                            // 话题名
            10,                                                                   //频率
            std::bind(&MySubscriber::topic_callback, this, std::placeholders::_1) //回调函数
        );

        // RCLCPP_INFO(this->get_logger(), "订阅话题， 等待消息。。。");

        std::string my_param = this->declare_parameter<std::string>("my_param", "默认值");
        int number_param = this->declare_parameter<int>("number_param", 0);

        RCLCPP_INFO(this->get_logger(), "读取参数 my_param: %s", my_param.c_str());
        RCLCPP_INFO(this->get_logger(), "读取参数 number_param: %d", number_param);
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);                       // 初始化ROS2
    rclcpp::spin(std::make_shared<MySubscriber>()); //运行节点
    rclcpp::shutdown();                             // 关闭ROS2

    return 0;
}