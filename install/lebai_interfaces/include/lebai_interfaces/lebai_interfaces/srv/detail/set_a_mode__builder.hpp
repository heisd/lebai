// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:srv/SetAMode.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__SET_A_MODE__BUILDER_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__SET_A_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/srv/detail/set_a_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetAMode_Request_mode
{
public:
  explicit Init_SetAMode_Request_mode(::lebai_interfaces::srv::SetAMode_Request & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::srv::SetAMode_Request mode(::lebai_interfaces::srv::SetAMode_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::srv::SetAMode_Request msg_;
};

class Init_SetAMode_Request_pin
{
public:
  Init_SetAMode_Request_pin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetAMode_Request_mode pin(::lebai_interfaces::srv::SetAMode_Request::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_SetAMode_Request_mode(msg_);
  }

private:
  ::lebai_interfaces::srv::SetAMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::srv::SetAMode_Request>()
{
  return lebai_interfaces::srv::builder::Init_SetAMode_Request_pin();
}

}  // namespace lebai_interfaces


namespace lebai_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetAMode_Response_code
{
public:
  Init_SetAMode_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lebai_interfaces::srv::SetAMode_Response code(::lebai_interfaces::srv::SetAMode_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::srv::SetAMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::srv::SetAMode_Response>()
{
  return lebai_interfaces::srv::builder::Init_SetAMode_Response_code();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__SRV__DETAIL__SET_A_MODE__BUILDER_HPP_
