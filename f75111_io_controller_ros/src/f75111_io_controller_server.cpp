#include "f75111_io_controller_ros/io_controller_server.h"

#include <memory>


F75111IOControllerServer::F75111IOControllerServer()
: Node("f75111_io_controller_server")
{
  service_ = this->create_service<f75111_io_controller_msgs::srv::SetPin>(
    "f75111_io_controller_service", std::bind(&F75111IOControllerServer::cb, this, std::placeholders::_1, std::placeholders::_2));
}

void F75111IOControllerServer::cb(std::shared_ptr<f75111_io_controller_msgs::srv::SetPin::Request> request, std::shared_ptr<f75111_io_controller_msgs::srv::SetPin::Response> response)
{
  f75111_io_controller_.setPin(request->pin_num, request->enable);
}


int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<F75111IOControllerServer>();

  RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Spinin'");

  rclcpp::spin(node);
  rclcpp::shutdown();

  return 0;
}
