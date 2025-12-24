// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from grab_demo:srv/GrabObject.idl
// generated code does not contain a copyright notice

#ifndef GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__TRAITS_HPP_
#define GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "grab_demo/srv/detail/grab_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace grab_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const GrabObject_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: obj_link
  {
    out << "obj_link: ";
    rosidl_generator_traits::value_to_yaml(msg.obj_link, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabObject_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obj_link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_link: ";
    rosidl_generator_traits::value_to_yaml(msg.obj_link, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabObject_Request & msg, bool use_flow_style = false)
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

}  // namespace grab_demo

namespace rosidl_generator_traits
{

[[deprecated("use grab_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grab_demo::srv::GrabObject_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const grab_demo::srv::GrabObject_Request & msg)
{
  return grab_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<grab_demo::srv::GrabObject_Request>()
{
  return "grab_demo::srv::GrabObject_Request";
}

template<>
inline const char * name<grab_demo::srv::GrabObject_Request>()
{
  return "grab_demo/srv/GrabObject_Request";
}

template<>
struct has_fixed_size<grab_demo::srv::GrabObject_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grab_demo::srv::GrabObject_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grab_demo::srv::GrabObject_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace grab_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const GrabObject_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GrabObject_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GrabObject_Response & msg, bool use_flow_style = false)
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

}  // namespace grab_demo

namespace rosidl_generator_traits
{

[[deprecated("use grab_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const grab_demo::srv::GrabObject_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  grab_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use grab_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const grab_demo::srv::GrabObject_Response & msg)
{
  return grab_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<grab_demo::srv::GrabObject_Response>()
{
  return "grab_demo::srv::GrabObject_Response";
}

template<>
inline const char * name<grab_demo::srv::GrabObject_Response>()
{
  return "grab_demo/srv/GrabObject_Response";
}

template<>
struct has_fixed_size<grab_demo::srv::GrabObject_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<grab_demo::srv::GrabObject_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<grab_demo::srv::GrabObject_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grab_demo::srv::GrabObject>()
{
  return "grab_demo::srv::GrabObject";
}

template<>
inline const char * name<grab_demo::srv::GrabObject>()
{
  return "grab_demo/srv/GrabObject";
}

template<>
struct has_fixed_size<grab_demo::srv::GrabObject>
  : std::integral_constant<
    bool,
    has_fixed_size<grab_demo::srv::GrabObject_Request>::value &&
    has_fixed_size<grab_demo::srv::GrabObject_Response>::value
  >
{
};

template<>
struct has_bounded_size<grab_demo::srv::GrabObject>
  : std::integral_constant<
    bool,
    has_bounded_size<grab_demo::srv::GrabObject_Request>::value &&
    has_bounded_size<grab_demo::srv::GrabObject_Response>::value
  >
{
};

template<>
struct is_service<grab_demo::srv::GrabObject>
  : std::true_type
{
};

template<>
struct is_service_request<grab_demo::srv::GrabObject_Request>
  : std::true_type
{
};

template<>
struct is_service_response<grab_demo::srv::GrabObject_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__TRAITS_HPP_
