#include "rclcpp/rclcpp.hpp"
#include "std_srvs/srv/set_bool.hpp"

using namespace std::chrono_literals;

class MinimalClient : public rclcpp::Node
{
public:
    MinimalClient()
        : Node("minimal_client")
    {
        client_ = this->create_client<std_srvs::srv::SetBool>("set_flag");

        // 等待服务可用
        while (!client_->wait_for_service(1s))
        {
            if (!rclcpp::ok())
            {
                RCLCPP_ERROR(this->get_logger(), "客户端中断");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "等待服务中...");
        }

        // 构造请求
        auto request = std::make_shared<std_srvs::srv::SetBool::Request>();
        request->data = true;

        // 异步发送请求
        auto result_future = client_->async_send_request(request, [this](rclcpp::Client<std_srvs::srv::SetBool>::SharedFuture result) {
            auto response = result.get();
            RCLCPP_INFO(this->get_logger(), "收到响应: success=%s, message='%s'", response->success ? "true" : "false", response->message.c_str());
        });
    }

private:
    rclcpp::Client<std_srvs::srv::SetBool>::SharedPtr client_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalClient>());
    rclcpp::shutdown();
    return 0;
}
