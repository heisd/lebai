// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lebai_interfaces:msg/UntilInfo.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__TRAITS_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lebai_interfaces/msg/detail/until_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'io_express'
#include "lebai_interfaces/msg/detail/io_conditional_express__traits.hpp"

namespace lebai_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UntilInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: io_express_logic
  {
    out << "io_express_logic: ";
    rosidl_generator_traits::value_to_yaml(msg.io_express_logic, out);
    out << ", ";
  }

  // member: io_express
  {
    if (msg.io_express.size() == 0) {
      out << "io_express: []";
    } else {
      out << "io_express: [";
      size_t pending_items = msg.io_express.size();
      for (auto item : msg.io_express) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UntilInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: io_express_logic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_express_logic: ";
    rosidl_generator_traits::value_to_yaml(msg.io_express_logic, out);
    out << "\n";
  }

  // member: io_express
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.io_express.size() == 0) {
      out << "io_express: []\n";
    } else {
      out << "io_express:\n";
      for (auto item : msg.io_express) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UntilInfo & msg, bool use_flow_style = false)
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
  const lebai_interfaces::msg::UntilInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::msg::UntilInfo & msg)
{
  return lebai_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::msg::UntilInfo>()
{
  return "lebai_interfaces::msg::UntilInfo";
}

template<>
inline const char * name<lebai_interfaces::msg::UntilInfo>()
{
  return "lebai_interfaces/msg/UntilInfo";
}

template<>
struct has_fixed_size<lebai_interfaces::msg::UntilInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lebai_interfaces::msg::UntilInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lebai_interfaces::msg::UntilInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__TRAITS_HPP_
