// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lebai_interfaces:srv/MoveJoint.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__MOVE_JOINT__TRAITS_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__MOVE_JOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lebai_interfaces/srv/detail/move_joint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cartesian_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'common'
#include "lebai_interfaces/msg/detail/move_common__traits.hpp"

namespace lebai_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveJoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_joint_pose
  {
    out << "is_joint_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.is_joint_pose, out);
    out << ", ";
  }

  // member: joint_pose
  {
    if (msg.joint_pose.size() == 0) {
      out << "joint_pose: []";
    } else {
      out << "joint_pose: [";
      size_t pending_items = msg.joint_pose.size();
      for (auto item : msg.joint_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cartesian_pose
  {
    out << "cartesian_pose: ";
    to_flow_style_yaml(msg.cartesian_pose, out);
    out << ", ";
  }

  // member: common
  {
    out << "common: ";
    to_flow_style_yaml(msg.common, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveJoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_joint_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_joint_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.is_joint_pose, out);
    out << "\n";
  }

  // member: joint_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_pose.size() == 0) {
      out << "joint_pose: []\n";
    } else {
      out << "joint_pose:\n";
      for (auto item : msg.joint_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cartesian_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_pose:\n";
    to_block_style_yaml(msg.cartesian_pose, out, indentation + 2);
  }

  // member: common
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "common:\n";
    to_block_style_yaml(msg.common, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveJoint_Request & msg, bool use_flow_style = false)
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
  const lebai_interfaces::srv::MoveJoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::srv::MoveJoint_Request & msg)
{
  return lebai_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::srv::MoveJoint_Request>()
{
  return "lebai_interfaces::srv::MoveJoint_Request";
}

template<>
inline const char * name<lebai_interfaces::srv::MoveJoint_Request>()
{
  return "lebai_interfaces/srv/MoveJoint_Request";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::MoveJoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lebai_interfaces::srv::MoveJoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lebai_interfaces::srv::MoveJoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lebai_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveJoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ret
  {
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveJoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ret
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveJoint_Response & msg, bool use_flow_style = false)
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
  const lebai_interfaces::srv::MoveJoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::srv::MoveJoint_Response & msg)
{
  return lebai_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::srv::MoveJoint_Response>()
{
  return "lebai_interfaces::srv::MoveJoint_Response";
}

template<>
inline const char * name<lebai_interfaces::srv::MoveJoint_Response>()
{
  return "lebai_interfaces/srv/MoveJoint_Response";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::MoveJoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lebai_interfaces::srv::MoveJoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lebai_interfaces::srv::MoveJoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lebai_interfaces::srv::MoveJoint>()
{
  return "lebai_interfaces::srv::MoveJoint";
}

template<>
inline const char * name<lebai_interfaces::srv::MoveJoint>()
{
  return "lebai_interfaces/srv/MoveJoint";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::MoveJoint>
  : std::integral_constant<
    bool,
    has_fixed_size<lebai_interfaces::srv::MoveJoint_Request>::value &&
    has_fixed_size<lebai_interfaces::srv::MoveJoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<lebai_interfaces::srv::MoveJoint>
  : std::integral_constant<
    bool,
    has_bounded_size<lebai_interfaces::srv::MoveJoint_Request>::value &&
    has_bounded_size<lebai_interfaces::srv::MoveJoint_Response>::value
  >
{
};

template<>
struct is_service<lebai_interfaces::srv::MoveJoint>
  : std::true_type
{
};

template<>
struct is_service_request<lebai_interfaces::srv::MoveJoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lebai_interfaces::srv::MoveJoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEBAI_INTERFACES__SRV__DETAIL__MOVE_JOINT__TRAITS_HPP_
