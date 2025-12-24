// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:msg/IOConditionalExpress.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__BUILDER_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/msg/detail/io_conditional_express__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace msg
{

namespace builder
{

class Init_IOConditionalExpress_logic_operation
{
public:
  explicit Init_IOConditionalExpress_logic_operation(::lebai_interfaces::msg::IOConditionalExpress & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::msg::IOConditionalExpress logic_operation(::lebai_interfaces::msg::IOConditionalExpress::_logic_operation_type arg)
  {
    msg_.logic_operation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::msg::IOConditionalExpress msg_;
};

class Init_IOConditionalExpress_uint_value
{
public:
  explicit Init_IOConditionalExpress_uint_value(::lebai_interfaces::msg::IOConditionalExpress & msg)
  : msg_(msg)
  {}
  Init_IOConditionalExpress_logic_operation uint_value(::lebai_interfaces::msg::IOConditionalExpress::_uint_value_type arg)
  {
    msg_.uint_value = std::move(arg);
    return Init_IOConditionalExpress_logic_operation(msg_);
  }

private:
  ::lebai_interfaces::msg::IOConditionalExpress msg_;
};

class Init_IOConditionalExpress_float_value
{
public:
  explicit Init_IOConditionalExpress_float_value(::lebai_interfaces::msg::IOConditionalExpress & msg)
  : msg_(msg)
  {}
  Init_IOConditionalExpress_uint_value float_value(::lebai_interfaces::msg::IOConditionalExpress::_float_value_type arg)
  {
    msg_.float_value = std::move(arg);
    return Init_IOConditionalExpress_uint_value(msg_);
  }

private:
  ::lebai_interfaces::msg::IOConditionalExpress msg_;
};

class Init_IOConditionalExpress_type
{
public:
  explicit Init_IOConditionalExpress_type(::lebai_interfaces::msg::IOConditionalExpress & msg)
  : msg_(msg)
  {}
  Init_IOConditionalExpress_float_value type(::lebai_interfaces::msg::IOConditionalExpress::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_IOConditionalExpress_float_value(msg_);
  }

private:
  ::lebai_interfaces::msg::IOConditionalExpress msg_;
};

class Init_IOConditionalExpress_pin
{
public:
  explicit Init_IOConditionalExpress_pin(::lebai_interfaces::msg::IOConditionalExpress & msg)
  : msg_(msg)
  {}
  Init_IOConditionalExpress_type pin(::lebai_interfaces::msg::IOConditionalExpress::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_IOConditionalExpress_type(msg_);
  }

private:
  ::lebai_interfaces::msg::IOConditionalExpress msg_;
};

class Init_IOConditionalExpress_group
{
public:
  Init_IOConditionalExpress_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IOConditionalExpress_pin group(::lebai_interfaces::msg::IOConditionalExpress::_group_type arg)
  {
    msg_.group = std::move(arg);
    return Init_IOConditionalExpress_pin(msg_);
  }

private:
  ::lebai_interfaces::msg::IOConditionalExpress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::msg::IOConditionalExpress>()
{
  return lebai_interfaces::msg::builder::Init_IOConditionalExpress_group();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__BUILDER_HPP_
