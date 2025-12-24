// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lebai_interfaces:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__ROBOT_MODE__TRAITS_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__ROBOT_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lebai_interfaces/msg/detail/robot_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lebai_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotMode & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lebai_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lebai_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lebai_interfaces::msg::RobotMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::msg::RobotMode & msg)
{
  return lebai_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::msg::RobotMode>()
{
  return "lebai_interfaces::msg::RobotMode";
}

template<>
inline const char * name<lebai_interfaces::msg::RobotMode>()
{
  return "lebai_interfaces/msg/RobotMode";
}

template<>
struct has_fixed_size<lebai_interfaces::msg::RobotMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lebai_interfaces::msg::RobotMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lebai_interfaces::msg::RobotMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEBAI_INTERFACES__MSG__DETAIL__ROBOT_MODE__TRAITS_HPP_
