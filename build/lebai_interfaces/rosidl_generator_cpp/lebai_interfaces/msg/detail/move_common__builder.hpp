// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:msg/MoveCommon.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__BUILDER_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/msg/detail/move_common__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace msg
{

namespace builder
{

class Init_MoveCommon_radius
{
public:
  explicit Init_MoveCommon_radius(::lebai_interfaces::msg::MoveCommon & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::msg::MoveCommon radius(::lebai_interfaces::msg::MoveCommon::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::msg::MoveCommon msg_;
};

class Init_MoveCommon_time
{
public:
  explicit Init_MoveCommon_time(::lebai_interfaces::msg::MoveCommon & msg)
  : msg_(msg)
  {}
  Init_MoveCommon_radius time(::lebai_interfaces::msg::MoveCommon::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_MoveCommon_radius(msg_);
  }

private:
  ::lebai_interfaces::msg::MoveCommon msg_;
};

class Init_MoveCommon_acc
{
public:
  explicit Init_MoveCommon_acc(::lebai_interfaces::msg::MoveCommon & msg)
  : msg_(msg)
  {}
  Init_MoveCommon_time acc(::lebai_interfaces::msg::MoveCommon::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_MoveCommon_time(msg_);
  }

private:
  ::lebai_interfaces::msg::MoveCommon msg_;
};

class Init_MoveCommon_vel
{
public:
  Init_MoveCommon_vel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveCommon_acc vel(::lebai_interfaces::msg::MoveCommon::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_MoveCommon_acc(msg_);
  }

private:
  ::lebai_interfaces::msg::MoveCommon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::msg::MoveCommon>()
{
  return lebai_interfaces::msg::builder::Init_MoveCommon_vel();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__BUILDER_HPP_
