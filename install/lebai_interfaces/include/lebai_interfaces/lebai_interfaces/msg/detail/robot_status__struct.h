// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define LEBAI_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'mode'
#include "lebai_interfaces/msg/detail/robot_mode__struct.h"
// Member 'e_stopped'
// Member 'drives_powered'
// Member 'motion_possible'
// Member 'in_motion'
// Member 'in_error'
#include "lebai_interfaces/msg/detail/tri_state__struct.h"

/// Struct defined in msg/RobotStatus in the package lebai_interfaces.
/**
  * The RobotStatus message contains low level status information 
  * that is specific to an industrial robot controller
 */
typedef struct lebai_interfaces__msg__RobotStatus
{
  /// The header frame ID is not used
  std_msgs__msg__Header header;
  /// The robot mode captures the operating mode of the robot.  When in
  /// manual, remote motion is not possible.
  lebai_interfaces__msg__RobotMode mode;
  /// Estop status: True if robot is e-stopped.  The drives are disabled
  /// and motion is not possible.  The e-stop condition must be acknowledged
  /// and cleared before any motion can begin.
  lebai_interfaces__msg__TriState e_stopped;
  /// Drive power status: True if drives are powered.  Motion commands will
  /// automatically enable the drives if required.  Drive power is not requred
  /// for possible motion
  lebai_interfaces__msg__TriState drives_powered;
  /// Motion enabled: True if robot motion is possible.
  lebai_interfaces__msg__TriState motion_possible;
  /// Motion status: True if robot is in motion, otherwise false
  lebai_interfaces__msg__TriState in_motion;
  /// Error status: True if there is an error condition on the robot. Motion may
  /// or may not be affected (see motion_possible)
  lebai_interfaces__msg__TriState in_error;
  /// Error code: Vendor specific error code (non zero indicates error)
  int32_t error_code;
} lebai_interfaces__msg__RobotStatus;

// Struct for a sequence of lebai_interfaces__msg__RobotStatus.
typedef struct lebai_interfaces__msg__RobotStatus__Sequence
{
  lebai_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
