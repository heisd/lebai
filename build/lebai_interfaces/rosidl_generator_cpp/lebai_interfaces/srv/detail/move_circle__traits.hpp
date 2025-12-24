// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lebai_interfaces:srv/MoveCircle.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__MOVE_CIRCLE__TRAITS_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__MOVE_CIRCLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lebai_interfaces/srv/detail/move_circle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'way_point_cartesian_pose'
// Member 'end_point_cartesian_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'common'
#include "lebai_interfaces/msg/detail/move_common__traits.hpp"

namespace lebai_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveCircle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: way_point_is_joint_pose
  {
    out << "way_point_is_joint_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.way_point_is_joint_pose, out);
    out << ", ";
  }

  // member: way_point_joint_pose
  {
    if (msg.way_point_joint_pose.size() == 0) {
      out << "way_point_joint_pose: []";
    } else {
      out << "way_point_joint_pose: [";
      size_t pending_items = msg.way_point_joint_pose.size();
      for (auto item : msg.way_point_joint_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: way_point_cartesian_pose
  {
    out << "way_point_cartesian_pose: ";
    to_flow_style_yaml(msg.way_point_cartesian_pose, out);
    out << ", ";
  }

  // member: end_point_is_joint_pose
  {
    out << "end_point_is_joint_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.end_point_is_joint_pose, out);
    out << ", ";
  }

  // member: end_point_joint_pose
  {
    if (msg.end_point_joint_pose.size() == 0) {
      out << "end_point_joint_pose: []";
    } else {
      out << "end_point_joint_pose: [";
      size_t pending_items = msg.end_point_joint_pose.size();
      for (auto item : msg.end_point_joint_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: end_point_cartesian_pose
  {
    out << "end_point_cartesian_pose: ";
    to_flow_style_yaml(msg.end_point_cartesian_pose, out);
    out << ", ";
  }

  // member: circle_angle
  {
    out << "circle_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.circle_angle, out);
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
  const MoveCircle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: way_point_is_joint_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "way_point_is_joint_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.way_point_is_joint_pose, out);
    out << "\n";
  }

  // member: way_point_joint_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.way_point_joint_pose.size() == 0) {
      out << "way_point_joint_pose: []\n";
    } else {
      out << "way_point_joint_pose:\n";
      for (auto item : msg.way_point_joint_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: way_point_cartesian_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "way_point_cartesian_pose:\n";
    to_block_style_yaml(msg.way_point_cartesian_pose, out, indentation + 2);
  }

  // member: end_point_is_joint_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_point_is_joint_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.end_point_is_joint_pose, out);
    out << "\n";
  }

  // member: end_point_joint_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.end_point_joint_pose.size() == 0) {
      out << "end_point_joint_pose: []\n";
    } else {
      out << "end_point_joint_pose:\n";
      for (auto item : msg.end_point_joint_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: end_point_cartesian_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_point_cartesian_pose:\n";
    to_block_style_yaml(msg.end_point_cartesian_pose, out, indentation + 2);
  }

  // member: circle_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circle_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.circle_angle, out);
    out << "\n";
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

inline std::string to_yaml(const MoveCircle_Request & msg, bool use_flow_style = false)
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
  const lebai_interfaces::srv::MoveCircle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::srv::MoveCircle_Request & msg)
{
  return lebai_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::srv::MoveCircle_Request>()
{
  return "lebai_interfaces::srv::MoveCircle_Request";
}

template<>
inline const char * name<lebai_interfaces::srv::MoveCircle_Request>()
{
  return "lebai_interfaces/srv/MoveCircle_Request";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::MoveCircle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lebai_interfaces::srv::MoveCircle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lebai_interfaces::srv::MoveCircle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace lebai_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveCircle_Response & msg,
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
  const MoveCircle_Response & msg,
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

inline std::string to_yaml(const MoveCircle_Response & msg, bool use_flow_style = false)
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
  const lebai_interfaces::srv::MoveCircle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::srv::MoveCircle_Response & msg)
{
  return lebai_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::srv::MoveCircle_Response>()
{
  return "lebai_interfaces::srv::MoveCircle_Response";
}

template<>
inline const char * name<lebai_interfaces::srv::MoveCircle_Response>()
{
  return "lebai_interfaces/srv/MoveCircle_Response";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::MoveCircle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lebai_interfaces::srv::MoveCircle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lebai_interfaces::srv::MoveCircle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lebai_interfaces::srv::MoveCircle>()
{
  return "lebai_interfaces::srv::MoveCircle";
}

template<>
inline const char * name<lebai_interfaces::srv::MoveCircle>()
{
  return "lebai_interfaces/srv/MoveCircle";
}

template<>
struct has_fixed_size<lebai_interfaces::srv::MoveCircle>
  : std::integral_constant<
    bool,
    has_fixed_size<lebai_interfaces::srv::MoveCircle_Request>::value &&
    has_fixed_size<lebai_interfaces::srv::MoveCircle_Response>::value
  >
{
};

template<>
struct has_bounded_size<lebai_interfaces::srv::MoveCircle>
  : std::integral_constant<
    bool,
    has_bounded_size<lebai_interfaces::srv::MoveCircle_Request>::value &&
    has_bounded_size<lebai_interfaces::srv::MoveCircle_Response>::value
  >
{
};

template<>
struct is_service<lebai_interfaces::srv::MoveCircle>
  : std::true_type
{
};

template<>
struct is_service_request<lebai_interfaces::srv::MoveCircle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lebai_interfaces::srv::MoveCircle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LEBAI_INTERFACES__SRV__DETAIL__MOVE_CIRCLE__TRAITS_HPP_
