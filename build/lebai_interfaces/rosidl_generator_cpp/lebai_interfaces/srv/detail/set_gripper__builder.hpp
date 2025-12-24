// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:srv/SetGripper.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__SET_GRIPPER__BUILDER_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__SET_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/srv/detail/set_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGripper_Request_val
{
public:
  Init_SetGripper_Request_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lebai_interfaces::srv::SetGripper_Request val(::lebai_interfaces::srv::SetGripper_Request::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::srv::SetGripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::srv::SetGripper_Request>()
{
  return lebai_interfaces::srv::builder::Init_SetGripper_Request_val();
}

}  // namespace lebai_interfaces


namespace lebai_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGripper_Response_ret
{
public:
  Init_SetGripper_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lebai_interfaces::srv::SetGripper_Response ret(::lebai_interfaces::srv::SetGripper_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::srv::SetGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::srv::SetGripper_Response>()
{
  return lebai_interfaces::srv::builder::Init_SetGripper_Response_ret();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__SRV__DETAIL__SET_GRIPPER__BUILDER_HPP_
