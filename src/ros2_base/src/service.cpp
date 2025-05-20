#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/set_bool.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class MyService : public rclcpp::Node
{
private:
    rclcpp::Service<std_srvs::srv::SetBool>::SharedPtr service_;

    void handle_service(const std::shared_ptr<std_srvs::srv::SetBool::Request> request, const std::shared_ptr<std_srvs::srv::SetBool::Response> response)
    {
        if (request->data)
        {
            RCLCPP_INFO(this->get_logger(), "收到服务请求 true");
            response->success = true;
            response->message = "服务已开启";
        }

        else
        {
            RCLCPP_INFO(this->get_logger(), "收到服务请求 false");
            response->success = false;
            response->message = "服务已关闭";
        }
    }

public:
    MyService()
        : Node("MyService")
    {
        service_ = this->create_service<std_srvs::srv::SetBool>("set_flag", std::bind(&MyService::handle_service, this, _1, _2));

        RCLCPP_INFO(this->get_logger(), "服务已启动: /set_flag");
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MyService>());
    rclcpp::shutdown();

    return 0;
}
