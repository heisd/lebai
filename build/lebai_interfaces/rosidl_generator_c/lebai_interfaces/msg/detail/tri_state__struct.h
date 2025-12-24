// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/TriState.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__TRI_STATE__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__TRI_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
/**
  * enumerated values
  * Unknown or unavailable
 */
enum
{
  lebai_interfaces__msg__TriState__UNKNOWN = -1
};

/// Constant 'TRUE'.
/**
  * High state
 */
enum
{
  lebai_interfaces__msg__TriState__TRUE = 1
};

/// Constant 'ON'.
enum
{
  lebai_interfaces__msg__TriState__ON = 1
};

/// Constant 'ENABLED'.
enum
{
  lebai_interfaces__msg__TriState__ENABLED = 1
};

/// Constant 'HIGH'.
enum
{
  lebai_interfaces__msg__TriState__HIGH = 1
};

/// Constant 'CLOSED'.
enum
{
  lebai_interfaces__msg__TriState__CLOSED = 1
};

/// Constant 'FALSE'.
/**
  * Low state
 */
enum
{
  lebai_interfaces__msg__TriState__FALSE = 0
};

/// Constant 'OFF'.
enum
{
  lebai_interfaces__msg__TriState__OFF = 0
};

/// Constant 'DISABLED'.
enum
{
  lebai_interfaces__msg__TriState__DISABLED = 0
};

/// Constant 'LOW'.
enum
{
  lebai_interfaces__msg__TriState__LOW = 0
};

/// Constant 'OPEN'.
enum
{
  lebai_interfaces__msg__TriState__OPEN = 0
};

/// Struct defined in msg/TriState in the package lebai_interfaces.
/**
  * The tri-state captures boolean values with the additional state of unknown
 */
typedef struct lebai_interfaces__msg__TriState
{
  int8_t val;
} lebai_interfaces__msg__TriState;

// Struct for a sequence of lebai_interfaces__msg__TriState.
typedef struct lebai_interfaces__msg__TriState__Sequence
{
  lebai_interfaces__msg__TriState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__TriState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__TRI_STATE__STRUCT_H_
