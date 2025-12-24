// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_error_code
{
public:
  explicit Init_RobotStatus_error_code(::lebai_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::msg::RobotStatus error_code(::lebai_interfaces::msg::RobotStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_in_error
{
public:
  explicit Init_RobotStatus_in_error(::lebai_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_error_code in_error(::lebai_interfaces::msg::RobotStatus::_in_error_type arg)
  {
    msg_.in_error = std::move(arg);
    return Init_RobotStatus_error_code(msg_);
  }

private:
  ::lebai_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_in_motion
{
public:
  explicit Init_RobotStatus_in_motion(::lebai_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_in_error in_motion(::lebai_interfaces::msg::RobotStatus::_in_motion_type arg)
  {
    msg_.in_motion = std::move(arg);
    return Init_RobotStatus_in_error(msg_);
  }

private:
  ::lebai_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_motion_possible
{
public:
  explicit Init_RobotStatus_motion_possible(::lebai_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_in_motion motion_possible(::lebai_interfaces::msg::RobotStatus::_motion_possible_type arg)
  {
    msg_.motion_possible = std::move(arg);
    return Init_RobotStatus_in_motion(msg_);
  }

private:
  ::lebai_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_drives_powered
{
public:
  explicit Init_RobotStatus_drives_powered(::lebai_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_motion_possible drives_powered(::lebai_interfaces::msg::RobotStatus::_drives_powered_type arg)
  {
    msg_.drives_powered = std::move(arg);
    return Init_RobotStatus_motion_possible(msg_);
  }

private:
  ::lebai_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_e_stopped
{
public:
  explicit Init_RobotStatus_e_stopped(::lebai_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_drives_powered e_stopped(::lebai_interfaces::msg::RobotStatus::_e_stopped_type arg)
  {
    msg_.e_stopped = std::move(arg);
    return Init_RobotStatus_drives_powered(msg_);
  }

private:
  ::lebai_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_mode
{
public:
  explicit Init_RobotStatus_mode(::lebai_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_e_stopped mode(::lebai_interfaces::msg::RobotStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RobotStatus_e_stopped(msg_);
  }

private:
  ::lebai_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_header
{
public:
  Init_RobotStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_mode header(::lebai_interfaces::msg::RobotStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotStatus_mode(msg_);
  }

private:
  ::lebai_interfaces::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::msg::RobotStatus>()
{
  return lebai_interfaces::msg::builder::Init_RobotStatus_header();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
