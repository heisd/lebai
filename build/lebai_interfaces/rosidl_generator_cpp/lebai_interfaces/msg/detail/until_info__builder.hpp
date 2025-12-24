// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:msg/UntilInfo.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__BUILDER_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/msg/detail/until_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace msg
{

namespace builder
{

class Init_UntilInfo_io_express
{
public:
  explicit Init_UntilInfo_io_express(::lebai_interfaces::msg::UntilInfo & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::msg::UntilInfo io_express(::lebai_interfaces::msg::UntilInfo::_io_express_type arg)
  {
    msg_.io_express = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::msg::UntilInfo msg_;
};

class Init_UntilInfo_io_express_logic
{
public:
  Init_UntilInfo_io_express_logic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UntilInfo_io_express io_express_logic(::lebai_interfaces::msg::UntilInfo::_io_express_logic_type arg)
  {
    msg_.io_express_logic = std::move(arg);
    return Init_UntilInfo_io_express(msg_);
  }

private:
  ::lebai_interfaces::msg::UntilInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::msg::UntilInfo>()
{
  return lebai_interfaces::msg::builder::Init_UntilInfo_io_express_logic();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__BUILDER_HPP_
