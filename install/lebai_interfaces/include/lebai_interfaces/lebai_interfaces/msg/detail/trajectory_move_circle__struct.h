// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/TrajectoryMoveCircle.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'common'
#include "lebai_interfaces/msg/detail/move_common__struct.h"
// Member 'way_point_joint_pose'
// Member 'end_point_joint_pose'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'way_point_cartesian_pose'
// Member 'end_point_cartesian_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/TrajectoryMoveCircle in the package lebai_interfaces.
typedef struct lebai_interfaces__msg__TrajectoryMoveCircle
{
  lebai_interfaces__msg__MoveCommon common;
  bool way_point_is_joint_pose;
  rosidl_runtime_c__double__Sequence way_point_joint_pose;
  geometry_msgs__msg__Pose way_point_cartesian_pose;
  bool end_point_is_joint_pose;
  rosidl_runtime_c__double__Sequence end_point_joint_pose;
  geometry_msgs__msg__Pose end_point_cartesian_pose;
  double circle_angle;
} lebai_interfaces__msg__TrajectoryMoveCircle;

// Struct for a sequence of lebai_interfaces__msg__TrajectoryMoveCircle.
typedef struct lebai_interfaces__msg__TrajectoryMoveCircle__Sequence
{
  lebai_interfaces__msg__TrajectoryMoveCircle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__TrajectoryMoveCircle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__STRUCT_H_
