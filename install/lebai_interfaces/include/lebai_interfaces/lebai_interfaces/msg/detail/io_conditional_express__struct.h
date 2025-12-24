// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/IOConditionalExpress.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GROUP_ROBOT'.
enum
{
  lebai_interfaces__msg__IOConditionalExpress__GROUP_ROBOT = 0
};

/// Constant 'GROUP_FLANGE'.
enum
{
  lebai_interfaces__msg__IOConditionalExpress__GROUP_FLANGE = 1
};

/// Constant 'TYPE_ANALOG'.
enum
{
  lebai_interfaces__msg__IOConditionalExpress__TYPE_ANALOG = 0
};

/// Constant 'TYPE_DIGITAL'.
enum
{
  lebai_interfaces__msg__IOConditionalExpress__TYPE_DIGITAL = 1
};

/// Constant 'LOGIC_OP_GT'.
/**
  * great >
 */
enum
{
  lebai_interfaces__msg__IOConditionalExpress__LOGIC_OP_GT = 0
};

/// Constant 'LOGIC_OP_GE'.
/**
  * great and equal >=
 */
enum
{
  lebai_interfaces__msg__IOConditionalExpress__LOGIC_OP_GE = 1
};

/// Constant 'LOGIC_OP_EQ'.
/**
  * equal
 */
enum
{
  lebai_interfaces__msg__IOConditionalExpress__LOGIC_OP_EQ = 2
};

/// Constant 'LOGIC_OP_NE'.
/**
  * not equal
 */
enum
{
  lebai_interfaces__msg__IOConditionalExpress__LOGIC_OP_NE = 3
};

/// Constant 'LOGIC_OP_LT'.
/**
  * less than
 */
enum
{
  lebai_interfaces__msg__IOConditionalExpress__LOGIC_OP_LT = 4
};

/// Constant 'LOGIC_OP_LE'.
/**
  * less than and equal
 */
enum
{
  lebai_interfaces__msg__IOConditionalExpress__LOGIC_OP_LE = 5
};

/// Struct defined in msg/IOConditionalExpress in the package lebai_interfaces.
typedef struct lebai_interfaces__msg__IOConditionalExpress
{
  uint32_t group;
  uint32_t pin;
  uint32_t type;
  double float_value;
  uint8_t uint_value;
  uint8_t logic_operation;
} lebai_interfaces__msg__IOConditionalExpress;

// Struct for a sequence of lebai_interfaces__msg__IOConditionalExpress.
typedef struct lebai_interfaces__msg__IOConditionalExpress__Sequence
{
  lebai_interfaces__msg__IOConditionalExpress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__IOConditionalExpress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__STRUCT_H_
