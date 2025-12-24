// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__GRIPPER_STATUS__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__GRIPPER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GripperStatus in the package lebai_interfaces.
typedef struct lebai_interfaces__msg__GripperStatus
{
  double position;
  double force;
} lebai_interfaces__msg__GripperStatus;

// Struct for a sequence of lebai_interfaces__msg__GripperStatus.
typedef struct lebai_interfaces__msg__GripperStatus__Sequence
{
  lebai_interfaces__msg__GripperStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__GripperStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__GRIPPER_STATUS__STRUCT_H_
