// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lebai_interfaces:msg/IOConditionalExpress.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__TRAITS_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lebai_interfaces/msg/detail/io_conditional_express__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lebai_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IOConditionalExpress & msg,
  std::ostream & out)
{
  out << "{";
  // member: group
  {
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << ", ";
  }

  // member: pin
  {
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: float_value
  {
    out << "float_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float_value, out);
    out << ", ";
  }

  // member: uint_value
  {
    out << "uint_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint_value, out);
    out << ", ";
  }

  // member: logic_operation
  {
    out << "logic_operation: ";
    rosidl_generator_traits::value_to_yaml(msg.logic_operation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IOConditionalExpress & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << "\n";
  }

  // member: pin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: float_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float_value, out);
    out << "\n";
  }

  // member: uint_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uint_value: ";
    rosidl_generator_traits::value_to_yaml(msg.uint_value, out);
    out << "\n";
  }

  // member: logic_operation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "logic_operation: ";
    rosidl_generator_traits::value_to_yaml(msg.logic_operation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IOConditionalExpress & msg, bool use_flow_style = false)
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
  const lebai_interfaces::msg::IOConditionalExpress & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::msg::IOConditionalExpress & msg)
{
  return lebai_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::msg::IOConditionalExpress>()
{
  return "lebai_interfaces::msg::IOConditionalExpress";
}

template<>
inline const char * name<lebai_interfaces::msg::IOConditionalExpress>()
{
  return "lebai_interfaces/msg/IOConditionalExpress";
}

template<>
struct has_fixed_size<lebai_interfaces::msg::IOConditionalExpress>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lebai_interfaces::msg::IOConditionalExpress>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lebai_interfaces::msg::IOConditionalExpress>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__TRAITS_HPP_
