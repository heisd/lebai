// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:srv/SetDO.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__SET_DO__BUILDER_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__SET_DO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/srv/detail/set_do__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDO_Request_value
{
public:
  explicit Init_SetDO_Request_value(::lebai_interfaces::srv::SetDO_Request & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::srv::SetDO_Request value(::lebai_interfaces::srv::SetDO_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::srv::SetDO_Request msg_;
};

class Init_SetDO_Request_pin
{
public:
  Init_SetDO_Request_pin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDO_Request_value pin(::lebai_interfaces::srv::SetDO_Request::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_SetDO_Request_value(msg_);
  }

private:
  ::lebai_interfaces::srv::SetDO_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::srv::SetDO_Request>()
{
  return lebai_interfaces::srv::builder::Init_SetDO_Request_pin();
}

}  // namespace lebai_interfaces


namespace lebai_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetDO_Response_code
{
public:
  Init_SetDO_Response_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lebai_interfaces::srv::SetDO_Response code(::lebai_interfaces::srv::SetDO_Response::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::srv::SetDO_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::srv::SetDO_Response>()
{
  return lebai_interfaces::srv::builder::Init_SetDO_Response_code();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__SRV__DETAIL__SET_DO__BUILDER_HPP_
