// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lebai_interfaces:msg/MoveCommon.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__TRAITS_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lebai_interfaces/msg/detail/move_common__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lebai_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MoveCommon & msg,
  std::ostream & out)
{
  out << "{";
  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << ", ";
  }

  // member: acc
  {
    out << "acc: ";
    rosidl_generator_traits::value_to_yaml(msg.acc, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveCommon & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }

  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc: ";
    rosidl_generator_traits::value_to_yaml(msg.acc, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveCommon & msg, bool use_flow_style = false)
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
  const lebai_interfaces::msg::MoveCommon & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::msg::MoveCommon & msg)
{
  return lebai_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::msg::MoveCommon>()
{
  return "lebai_interfaces::msg::MoveCommon";
}

template<>
inline const char * name<lebai_interfaces::msg::MoveCommon>()
{
  return "lebai_interfaces/msg/MoveCommon";
}

template<>
struct has_fixed_size<lebai_interfaces::msg::MoveCommon>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lebai_interfaces::msg::MoveCommon>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lebai_interfaces::msg::MoveCommon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__TRAITS_HPP_
