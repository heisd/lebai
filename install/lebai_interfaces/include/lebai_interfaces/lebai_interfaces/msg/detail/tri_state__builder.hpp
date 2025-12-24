// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:msg/TriState.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__TRI_STATE__BUILDER_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__TRI_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/msg/detail/tri_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace msg
{

namespace builder
{

class Init_TriState_val
{
public:
  Init_TriState_val()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lebai_interfaces::msg::TriState val(::lebai_interfaces::msg::TriState::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::msg::TriState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::msg::TriState>()
{
  return lebai_interfaces::msg::builder::Init_TriState_val();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__TRI_STATE__BUILDER_HPP_
