// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/DebugLevel.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__DEBUG_LEVEL__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__DEBUG_LEVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEBUG'.
enum
{
  lebai_interfaces__msg__DebugLevel__DEBUG = 5
};

/// Constant 'INFO'.
enum
{
  lebai_interfaces__msg__DebugLevel__INFO = 4
};

/// Constant 'WARN'.
enum
{
  lebai_interfaces__msg__DebugLevel__WARN = 3
};

/// Constant 'ERROR'.
enum
{
  lebai_interfaces__msg__DebugLevel__ERROR = 2
};

/// Constant 'FATAL'.
enum
{
  lebai_interfaces__msg__DebugLevel__FATAL = 1
};

/// Constant 'NONE'.
enum
{
  lebai_interfaces__msg__DebugLevel__NONE = 0
};

/// Struct defined in msg/DebugLevel in the package lebai_interfaces.
/**
  * Debug level message enumeration.  This may replicate some functionality that
  * alreay exists in the ROS logger.
  * TODO: Get more information on the ROS Logger.
 */
typedef struct lebai_interfaces__msg__DebugLevel
{
  uint8_t val;
} lebai_interfaces__msg__DebugLevel;

// Struct for a sequence of lebai_interfaces__msg__DebugLevel.
typedef struct lebai_interfaces__msg__DebugLevel__Sequence
{
  lebai_interfaces__msg__DebugLevel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__DebugLevel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__DEBUG_LEVEL__STRUCT_H_
