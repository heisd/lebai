// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:msg/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__GRIPPER_STATUS__BUILDER_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__GRIPPER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/msg/detail/gripper_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace msg
{

namespace builder
{

class Init_GripperStatus_force
{
public:
  explicit Init_GripperStatus_force(::lebai_interfaces::msg::GripperStatus & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::msg::GripperStatus force(::lebai_interfaces::msg::GripperStatus::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::msg::GripperStatus msg_;
};

class Init_GripperStatus_position
{
public:
  Init_GripperStatus_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperStatus_force position(::lebai_interfaces::msg::GripperStatus::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GripperStatus_force(msg_);
  }

private:
  ::lebai_interfaces::msg::GripperStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::msg::GripperStatus>()
{
  return lebai_interfaces::msg::builder::Init_GripperStatus_position();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__GRIPPER_STATUS__BUILDER_HPP_
