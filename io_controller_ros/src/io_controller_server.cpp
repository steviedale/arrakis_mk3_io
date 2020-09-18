#include "io_controller_ros/io_controller_server.h"

#include <memory>


IOControllerServer::IOControllerServer()
: Node("io_controller_node")
{
  service_ = this->create_service<io_controller_msgs::srv::SetPort>(
    "io_controller_service", std::bind(&IOControllerServer::cb, this, std::placeholders::_1, std::placeholders::_2));
}

void IOControllerServer::cb(std::shared_ptr<io_controller_msgs::srv::SetPort::Request> request, std::shared_ptr<io_controller_msgs::srv::SetPort::Response> response)
{
  RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Request received");
  io_controller_.setPort(request->port_num, request->enable);
}


int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<IOControllerServer>();

  RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Spinin'");

  rclcpp::spin(node);
  rclcpp::shutdown();

  return 0;
}
