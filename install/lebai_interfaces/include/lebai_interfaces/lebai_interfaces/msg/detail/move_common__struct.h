// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/MoveCommon.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MoveCommon in the package lebai_interfaces.
typedef struct lebai_interfaces__msg__MoveCommon
{
  /// velocity data.
  double vel;
  /// acceleration data.
  double acc;
  /// time of run data.
  double time;
  /// blend radius data.
  double radius;
} lebai_interfaces__msg__MoveCommon;

// Struct for a sequence of lebai_interfaces__msg__MoveCommon.
typedef struct lebai_interfaces__msg__MoveCommon__Sequence
{
  lebai_interfaces__msg__MoveCommon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__MoveCommon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__MOVE_COMMON__STRUCT_H_
