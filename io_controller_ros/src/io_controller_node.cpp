#include "io_controller/io_controller.h"

#include <rclcpp/rclcpp.hpp>
#include <std_srvs/SetBool.h>

#include <memory>

void cb(const std::shared_ptr<std_srvs::SetBool::Request> request,
         std::shared_ptr<std_srvs::SetBool::Response> response)
{
  RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Request received");
  /*
  IOController io_controller;
  io_controller.setPort(0, true);
  io_controller.setPort(0, false);
  io_controller.setPort(1, true);
  io_controller.setPort(1, false);
  io_controller.setPort(2, true);
  io_controller.setPort(2, false);
  io_controller.setPort(3, true);
  io_controller.setPort(3, false);
  */
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("io_controller_node");

  rclcpp::Service<std_srvs::SetBool>::SharedPtr service =
    node->create_service<std_srvs::SetBool>("io_controller_service", &cb);

  RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Spinin'");

  rclcpp::spin(node);
  rclcpp::shutdown();

  return 0;
}