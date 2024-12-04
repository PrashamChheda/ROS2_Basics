// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/AliveTurtlesList.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES_LIST__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/alive_turtles_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_AliveTurtlesList_names
{
public:
  explicit Init_AliveTurtlesList_names(::my_robot_interfaces::msg::AliveTurtlesList & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::AliveTurtlesList names(::my_robot_interfaces::msg::AliveTurtlesList::_names_type arg)
  {
    msg_.names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::AliveTurtlesList msg_;
};

class Init_AliveTurtlesList_theta
{
public:
  explicit Init_AliveTurtlesList_theta(::my_robot_interfaces::msg::AliveTurtlesList & msg)
  : msg_(msg)
  {}
  Init_AliveTurtlesList_names theta(::my_robot_interfaces::msg::AliveTurtlesList::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_AliveTurtlesList_names(msg_);
  }

private:
  ::my_robot_interfaces::msg::AliveTurtlesList msg_;
};

class Init_AliveTurtlesList_y
{
public:
  explicit Init_AliveTurtlesList_y(::my_robot_interfaces::msg::AliveTurtlesList & msg)
  : msg_(msg)
  {}
  Init_AliveTurtlesList_theta y(::my_robot_interfaces::msg::AliveTurtlesList::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_AliveTurtlesList_theta(msg_);
  }

private:
  ::my_robot_interfaces::msg::AliveTurtlesList msg_;
};

class Init_AliveTurtlesList_x
{
public:
  Init_AliveTurtlesList_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AliveTurtlesList_y x(::my_robot_interfaces::msg::AliveTurtlesList::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_AliveTurtlesList_y(msg_);
  }

private:
  ::my_robot_interfaces::msg::AliveTurtlesList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::AliveTurtlesList>()
{
  return my_robot_interfaces::msg::builder::Init_AliveTurtlesList_x();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__ALIVE_TURTLES_LIST__BUILDER_HPP_
