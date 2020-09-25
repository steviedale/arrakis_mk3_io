#include "f75111_io_controller/f75111_io_controller.h"
#include "f75111_io_controller_msgs/srv/set_pin.hpp"
#include <rclcpp/rclcpp.hpp>


class F75111IOControllerServer : public rclcpp::Node
{
public:
  F75111IOControllerServer();
  void cb(std::shared_ptr<f75111_io_controller_msgs::srv::SetPin::Request> request, std::shared_ptr<f75111_io_controller_msgs::srv::SetPin::Response> response);
private:
  rclcpp::Service<f75111_io_controller_msgs::srv::SetPin>::SharedPtr service_;
  F75111IOController f75111_io_controller_;
};
