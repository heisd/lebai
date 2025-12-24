// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/UntilInfo.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LOGIC_AND'.
enum
{
  lebai_interfaces__msg__UntilInfo__LOGIC_AND = 0
};

/// Constant 'LOGIC_OR'.
enum
{
  lebai_interfaces__msg__UntilInfo__LOGIC_OR = 1
};

// Include directives for member types
// Member 'io_express'
#include "lebai_interfaces/msg/detail/io_conditional_express__struct.h"

/// Struct defined in msg/UntilInfo in the package lebai_interfaces.
typedef struct lebai_interfaces__msg__UntilInfo
{
  uint8_t io_express_logic;
  lebai_interfaces__msg__IOConditionalExpress__Sequence io_express;
} lebai_interfaces__msg__UntilInfo;

// Struct for a sequence of lebai_interfaces__msg__UntilInfo.
typedef struct lebai_interfaces__msg__UntilInfo__Sequence
{
  lebai_interfaces__msg__UntilInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__UntilInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__UNTIL_INFO__STRUCT_H_
