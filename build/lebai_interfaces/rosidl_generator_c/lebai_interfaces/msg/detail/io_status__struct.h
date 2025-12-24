// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/IOStatus.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VOLTAGETYPE'.
enum
{
  lebai_interfaces__msg__IOStatus__VOLTAGETYPE = 0
};

/// Constant 'CURRENTTYPE'.
enum
{
  lebai_interfaces__msg__IOStatus__CURRENTTYPE = 1
};

// Include directives for member types
// Member 'robot_din'
// Member 'robot_dout'
// Member 'robot_ain'
// Member 'robot_aout'
// Member 'robot_ain_type'
// Member 'robot_aout_type'
// Member 'flange_din'
// Member 'flange_dout'
// Member 'extend_din'
// Member 'extend_dout'
// Member 'extend_ain'
// Member 'extend_aout'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/IOStatus in the package lebai_interfaces.
typedef struct lebai_interfaces__msg__IOStatus
{
  rosidl_runtime_c__boolean__Sequence robot_din;
  rosidl_runtime_c__boolean__Sequence robot_dout;
  rosidl_runtime_c__float__Sequence robot_ain;
  rosidl_runtime_c__float__Sequence robot_aout;
  rosidl_runtime_c__uint8__Sequence robot_ain_type;
  rosidl_runtime_c__uint8__Sequence robot_aout_type;
  rosidl_runtime_c__boolean__Sequence flange_din;
  rosidl_runtime_c__boolean__Sequence flange_dout;
  rosidl_runtime_c__boolean__Sequence extend_din;
  rosidl_runtime_c__boolean__Sequence extend_dout;
  rosidl_runtime_c__float__Sequence extend_ain;
  rosidl_runtime_c__float__Sequence extend_aout;
} lebai_interfaces__msg__IOStatus;

// Struct for a sequence of lebai_interfaces__msg__IOStatus.
typedef struct lebai_interfaces__msg__IOStatus__Sequence
{
  lebai_interfaces__msg__IOStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__IOStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__IO_STATUS__STRUCT_H_
