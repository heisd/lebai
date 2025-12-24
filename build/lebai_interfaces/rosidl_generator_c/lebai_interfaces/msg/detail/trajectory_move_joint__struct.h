// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/TrajectoryMoveJoint.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_JOINT__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_JOINT__STRUCT_H_

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
// Member 'joint_pose'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'cartesian_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/TrajectoryMoveJoint in the package lebai_interfaces.
typedef struct lebai_interfaces__msg__TrajectoryMoveJoint
{
  lebai_interfaces__msg__MoveCommon common;
  bool is_joint_pose;
  rosidl_runtime_c__double__Sequence joint_pose;
  geometry_msgs__msg__Pose cartesian_pose;
} lebai_interfaces__msg__TrajectoryMoveJoint;

// Struct for a sequence of lebai_interfaces__msg__TrajectoryMoveJoint.
typedef struct lebai_interfaces__msg__TrajectoryMoveJoint__Sequence
{
  lebai_interfaces__msg__TrajectoryMoveJoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__TrajectoryMoveJoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_JOINT__STRUCT_H_
