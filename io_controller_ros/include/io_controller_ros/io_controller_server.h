#include "io_controller/io_controller.h"
#include "io_controller_msgs/srv/set_port.hpp"
#include <rclcpp/rclcpp.hpp>


class IOControllerServer
{
public:
  IOControllerServer(std::shared_ptr<rclcpp::Node> node);
  void cb(std::shared_ptr<io_controller_msgs::srv::SetPort::Request> request, std::shared_ptr<io_controller_msgs::srv::SetPort::Response> response);
private:
  //IOController io_controller_;
};
