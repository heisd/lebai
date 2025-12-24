// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lebai_interfaces:srv/SetAMode.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__SET_A_MODE__TRAITS_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__SET_A_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lebai_interfaces/srv/detail/set_a_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lebai_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pin
  {
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetAMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetAMode_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lebai_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lebai_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lebai_interfaces::srv::SetAMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::srv::SetAMode_Request & msg)
{
  return lebai_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::srv::SetAMode_Request>()
{
  return "lebai_interfaces::srv::SetAMode_Request";
}

template<>
inline const char * name<lebai_interfaces::srv::SetAMode_Request>()
{
  return "lebai_interfaces/srv/SetAMode_Request";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::SetAMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lebai_interfaces::srv::SetAMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lebai_interfaces::srv::SetAMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lebai_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: code
  {
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetAMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "code: ";
    rosidl_generator_traits::value_to_yaml(msg.code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetAMode_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lebai_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lebai_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lebai_interfaces::srv::SetAMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::srv::SetAMode_Response & msg)
{
  return lebai_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::srv::SetAMode_Response>()
{
  return "lebai_interfaces::srv::SetAMode_Response";
}

template<>
inline const char * name<lebai_interfaces::srv::SetAMode_Response>()
{
  return "lebai_interfaces/srv/SetAMode_Response";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::SetAMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lebai_interfaces::srv::SetAMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lebai_interfaces::srv::SetAMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lebai_interfaces::srv::SetAMode>()
{
  return "lebai_interfaces::srv::SetAMode";
}

template<>
inline const char * name<lebai_interfaces::srv::SetAMode>()
{
  return "lebai_interfaces/srv/SetAMode";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::SetAMode>
  : std::integral_constant<
    bool,
    has_fixed_size<lebai_interfaces::srv::SetAMode_Request>::value &&
    has_fixed_size<lebai_interfaces::srv::SetAMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<lebai_interfaces::srv::SetAMode>
  : std::integral_constant<
    bool,
    has_bounded_size<lebai_interfaces::srv::SetAMode_Request>::value &&
    has_bounded_size<lebai_interfaces::srv::SetAMode_Response>::value
  >
{
};

template<>
struct is_service<lebai_interfaces::srv::SetAMode>
  : std::true_type
{
};

template<>
struct is_service_request<lebai_interfaces::srv::SetAMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lebai_interfaces::srv::SetAMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEBAI_INTERFACES__SRV__DETAIL__SET_A_MODE__TRAITS_HPP_
