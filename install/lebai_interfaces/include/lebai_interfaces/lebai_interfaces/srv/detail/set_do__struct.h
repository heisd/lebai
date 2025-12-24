// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lebai_interfaces:srv/SetDO.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__SET_DO__STRUCT_H_
#define LEBAI_INTERFACES__SRV__DETAIL__SET_DO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetDO in the package lebai_interfaces.
typedef struct lebai_interfaces__srv__SetDO_Request
{
  uint16_t pin;
  bool value;
} lebai_interfaces__srv__SetDO_Request;

// Struct for a sequence of lebai_interfaces__srv__SetDO_Request.
typedef struct lebai_interfaces__srv__SetDO_Request__Sequence
{
  lebai_interfaces__srv__SetDO_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__srv__SetDO_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetDO in the package lebai_interfaces.
typedef struct lebai_interfaces__srv__SetDO_Response
{
  bool code;
} lebai_interfaces__srv__SetDO_Response;

// Struct for a sequence of lebai_interfaces__srv__SetDO_Response.
typedef struct lebai_interfaces__srv__SetDO_Response__Sequence
{
  lebai_interfaces__srv__SetDO_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lebai_interfaces__srv__SetDO_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__SRV__DETAIL__SET_DO__STRUCT_H_
