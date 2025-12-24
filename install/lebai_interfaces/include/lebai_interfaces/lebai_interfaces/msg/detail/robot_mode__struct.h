// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__ROBOT_MODE__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__ROBOT_MODE__STRUCT_H_

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
  lebai_interfaces__msg__RobotMode__UNKNOWN = -1
};

/// Constant 'MANUAL'.
/**
  * Teach OR manual mode
 */
enum
{
  lebai_interfaces__msg__RobotMode__MANUAL = 1
};

/// Constant 'AUTO'.
/**
  * Automatic mode
 */
enum
{
  lebai_interfaces__msg__RobotMode__AUTO = 2
};

/// Struct defined in msg/RobotMode in the package lebai_interfaces.
/**
  * The Robot mode message encapsulates the mode/teach state of the robot
  * Typically this is controlled by the pendant key switch, but not always
 */
typedef struct lebai_interfaces__msg__RobotMode
{
  int8_t val;
} lebai_interfaces__msg__RobotMode;

// Struct for a sequence of lebai_interfaces__msg__RobotMode.
typedef struct lebai_interfaces__msg__RobotMode__Sequence
{
  lebai_interfaces__msg__RobotMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__RobotMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__ROBOT_MODE__STRUCT_H_
