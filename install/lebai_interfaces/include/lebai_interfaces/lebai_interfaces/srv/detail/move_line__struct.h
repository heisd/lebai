// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:srv/MoveLine.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__MOVE_LINE__STRUCT_H_
#define LEBAI_INTERFACES__SRV__DETAIL__MOVE_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_pose'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'cartesian_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'common'
#include "lebai_interfaces/msg/detail/move_common__struct.h"

/// Struct defined in srv/MoveLine in the package lebai_interfaces.
typedef struct lebai_interfaces__srv__MoveLine_Request
{
  bool is_joint_pose;
  rosidl_runtime_c__double__Sequence joint_pose;
  geometry_msgs__msg__Pose cartesian_pose;
  lebai_interfaces__msg__MoveCommon common;
} lebai_interfaces__srv__MoveLine_Request;

// Struct for a sequence of lebai_interfaces__srv__MoveLine_Request.
typedef struct lebai_interfaces__srv__MoveLine_Request__Sequence
{
  lebai_interfaces__srv__MoveLine_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__srv__MoveLine_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MoveLine in the package lebai_interfaces.
typedef struct lebai_interfaces__srv__MoveLine_Response
{
  bool ret;
} lebai_interfaces__srv__MoveLine_Response;

// Struct for a sequence of lebai_interfaces__srv__MoveLine_Response.
typedef struct lebai_interfaces__srv__MoveLine_Response__Sequence
{
  lebai_interfaces__srv__MoveLine_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__srv__MoveLine_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__SRV__DETAIL__MOVE_LINE__STRUCT_H_
