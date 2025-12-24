// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lebai_interfaces:msg/TrajectoryMoveCircle.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__TRAITS_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lebai_interfaces/msg/detail/trajectory_move_circle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'common'
#include "lebai_interfaces/msg/detail/move_common__traits.hpp"
// Member 'way_point_cartesian_pose'
// Member 'end_point_cartesian_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace lebai_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryMoveCircle & msg,
  std::ostream & out)
{
  out << "{";
  // member: common
  {
    out << "common: ";
    to_flow_style_yaml(msg.common, out);
    out << ", ";
  }

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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryMoveCircle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: common
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "common:\n";
    to_block_style_yaml(msg.common, out, indentation + 2);
  }

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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryMoveCircle & msg, bool use_flow_style = false)
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
  const lebai_interfaces::msg::TrajectoryMoveCircle & msg,
  std::ostream & out, size_t indentation = 0)
{
  lebai_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lebai_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lebai_interfaces::msg::TrajectoryMoveCircle & msg)
{
  return lebai_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lebai_interfaces::msg::TrajectoryMoveCircle>()
{
  return "lebai_interfaces::msg::TrajectoryMoveCircle";
}

template<>
inline const char * name<lebai_interfaces::msg::TrajectoryMoveCircle>()
{
  return "lebai_interfaces/msg/TrajectoryMoveCircle";
}

template<>
struct has_fixed_size<lebai_interfaces::msg::TrajectoryMoveCircle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lebai_interfaces::msg::TrajectoryMoveCircle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lebai_interfaces::msg::TrajectoryMoveCircle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__TRAITS_HPP_
