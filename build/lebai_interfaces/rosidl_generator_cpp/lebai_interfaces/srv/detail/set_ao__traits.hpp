// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lebai_interfaces:srv/SetAO.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__SET_AO__TRAITS_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__SET_AO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lebai_interfaces/srv/detail/set_ao__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lebai_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAO_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pin
  {
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetAO_Request & msg,
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

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetAO_Request & msg, bool use_flow_style = false)
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
  const lebai_interfaces::srv::SetAO_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::srv::SetAO_Request & msg)
{
  return lebai_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::srv::SetAO_Request>()
{
  return "lebai_interfaces::srv::SetAO_Request";
}

template<>
inline const char * name<lebai_interfaces::srv::SetAO_Request>()
{
  return "lebai_interfaces/srv/SetAO_Request";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::SetAO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lebai_interfaces::srv::SetAO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lebai_interfaces::srv::SetAO_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lebai_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAO_Response & msg,
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
  const SetAO_Response & msg,
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

inline std::string to_yaml(const SetAO_Response & msg, bool use_flow_style = false)
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
  const lebai_interfaces::srv::SetAO_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::srv::SetAO_Response & msg)
{
  return lebai_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::srv::SetAO_Response>()
{
  return "lebai_interfaces::srv::SetAO_Response";
}

template<>
inline const char * name<lebai_interfaces::srv::SetAO_Response>()
{
  return "lebai_interfaces/srv/SetAO_Response";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::SetAO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lebai_interfaces::srv::SetAO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lebai_interfaces::srv::SetAO_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lebai_interfaces::srv::SetAO>()
{
  return "lebai_interfaces::srv::SetAO";
}

template<>
inline const char * name<lebai_interfaces::srv::SetAO>()
{
  return "lebai_interfaces/srv/SetAO";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::SetAO>
  : std::integral_constant<
    bool,
    has_fixed_size<lebai_interfaces::srv::SetAO_Request>::value &&
    has_fixed_size<lebai_interfaces::srv::SetAO_Response>::value
  >
{
};

template<>
struct has_bounded_size<lebai_interfaces::srv::SetAO>
  : std::integral_constant<
    bool,
    has_bounded_size<lebai_interfaces::srv::SetAO_Request>::value &&
    has_bounded_size<lebai_interfaces::srv::SetAO_Response>::value
  >
{
};

template<>
struct is_service<lebai_interfaces::srv::SetAO>
  : std::true_type
{
};

template<>
struct is_service_request<lebai_interfaces::srv::SetAO_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lebai_interfaces::srv::SetAO_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEBAI_INTERFACES__SRV__DETAIL__SET_AO__TRAITS_HPP_
