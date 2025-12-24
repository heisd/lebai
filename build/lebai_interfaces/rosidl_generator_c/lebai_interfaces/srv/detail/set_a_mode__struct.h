// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:srv/SetAMode.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__SET_A_MODE__STRUCT_H_
#define LEBAI_INTERFACES__SRV__DETAIL__SET_A_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetAMode in the package lebai_interfaces.
typedef struct lebai_interfaces__srv__SetAMode_Request
{
  uint16_t pin;
  uint8_t mode;
} lebai_interfaces__srv__SetAMode_Request;

// Struct for a sequence of lebai_interfaces__srv__SetAMode_Request.
typedef struct lebai_interfaces__srv__SetAMode_Request__Sequence
{
  lebai_interfaces__srv__SetAMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__srv__SetAMode_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetAMode in the package lebai_interfaces.
typedef struct lebai_interfaces__srv__SetAMode_Response
{
  bool code;
} lebai_interfaces__srv__SetAMode_Response;

// Struct for a sequence of lebai_interfaces__srv__SetAMode_Response.
typedef struct lebai_interfaces__srv__SetAMode_Response__Sequence
{
  lebai_interfaces__srv__SetAMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__srv__SetAMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__SRV__DETAIL__SET_A_MODE__STRUCT_H_
