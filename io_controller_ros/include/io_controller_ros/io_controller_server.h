#include "io_controller/io_controller.h"
#include "io_controller_msgs/srv/set_port.hpp"
#include <rclcpp/rclcpp.hpp>


class IOControllerServer : public rclcpp::Node
{
public:
  IOControllerServer();
  void cb(std::shared_ptr<io_controller_msgs::srv::SetPort::Request> request, std::shared_ptr<io_controller_msgs::srv::SetPort::Response> response);
private:
  rclcpp::Service<io_controller_msgs::srv::SetPort>::SharedPtr service_;
  IOController io_controller_;
};
