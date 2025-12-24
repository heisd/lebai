// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:srv/SetAO.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__SET_AO__STRUCT_H_
#define LEBAI_INTERFACES__SRV__DETAIL__SET_AO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetAO in the package lebai_interfaces.
typedef struct lebai_interfaces__srv__SetAO_Request
{
  uint16_t pin;
  double value;
} lebai_interfaces__srv__SetAO_Request;

// Struct for a sequence of lebai_interfaces__srv__SetAO_Request.
typedef struct lebai_interfaces__srv__SetAO_Request__Sequence
{
  lebai_interfaces__srv__SetAO_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__srv__SetAO_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetAO in the package lebai_interfaces.
typedef struct lebai_interfaces__srv__SetAO_Response
{
  bool code;
} lebai_interfaces__srv__SetAO_Response;

// Struct for a sequence of lebai_interfaces__srv__SetAO_Response.
typedef struct lebai_interfaces__srv__SetAO_Response__Sequence
{
  lebai_interfaces__srv__SetAO_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__srv__SetAO_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__SRV__DETAIL__SET_AO__STRUCT_H_
