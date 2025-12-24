// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lebai_interfaces:msg/IOStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lebai_interfaces/msg/detail/io_status__rosidl_typesupport_introspection_c.h"
#include "lebai_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lebai_interfaces/msg/detail/io_status__functions.h"
#include "lebai_interfaces/msg/detail/io_status__struct.h"


// Include directives for member types
// Member `robot_din`
// Member `robot_dout`
// Member `robot_ain`
// Member `robot_aout`
// Member `robot_ain_type`
// Member `robot_aout_type`
// Member `flange_din`
// Member `flange_dout`
// Member `extend_din`
// Member `extend_dout`
// Member `extend_ain`
// Member `extend_aout`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lebai_interfaces__msg__IOStatus__init(message_memory);
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_fini_function(void * message_memory)
{
  lebai_interfaces__msg__IOStatus__fini(message_memory);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_din(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_din(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_din(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_din(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_din(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_din(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_din(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_din(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_dout(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_dout(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_dout(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_dout(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_dout(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_dout(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_dout(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_dout(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_ain(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_ain(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_ain(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_ain(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_ain(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_ain(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_ain(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_ain(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_aout(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_aout(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_aout(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_aout(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_aout(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_aout(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_aout(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_aout(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_ain_type(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_ain_type(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_ain_type(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_ain_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_ain_type(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_ain_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_ain_type(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_ain_type(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_aout_type(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_aout_type(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_aout_type(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_aout_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_aout_type(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_aout_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_aout_type(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_aout_type(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__flange_din(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__flange_din(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__flange_din(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__flange_din(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__flange_din(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__flange_din(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__flange_din(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__flange_din(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__flange_dout(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__flange_dout(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__flange_dout(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__flange_dout(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__flange_dout(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__flange_dout(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__flange_dout(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__flange_dout(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__extend_din(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_din(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_din(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__extend_din(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_din(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__extend_din(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_din(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__extend_din(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__extend_dout(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_dout(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_dout(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__extend_dout(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_dout(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__extend_dout(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_dout(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__extend_dout(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__extend_ain(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_ain(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_ain(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__extend_ain(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_ain(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__extend_ain(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_ain(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__extend_ain(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__extend_aout(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_aout(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_aout(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__extend_aout(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_aout(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__extend_aout(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_aout(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__extend_aout(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_message_member_array[12] = {
  {
    "robot_din",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, robot_din),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_din,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_din,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_din,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_din,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_din,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_din  // resize(index) function pointer
  },
  {
    "robot_dout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, robot_dout),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_dout,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_dout,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_dout,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_dout,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_dout,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_dout  // resize(index) function pointer
  },
  {
    "robot_ain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, robot_ain),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_ain,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_ain,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_ain,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_ain,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_ain,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_ain  // resize(index) function pointer
  },
  {
    "robot_aout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, robot_aout),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_aout,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_aout,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_aout,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_aout,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_aout,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_aout  // resize(index) function pointer
  },
  {
    "robot_ain_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, robot_ain_type),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_ain_type,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_ain_type,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_ain_type,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_ain_type,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_ain_type,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_ain_type  // resize(index) function pointer
  },
  {
    "robot_aout_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, robot_aout_type),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__robot_aout_type,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__robot_aout_type,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__robot_aout_type,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__robot_aout_type,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__robot_aout_type,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__robot_aout_type  // resize(index) function pointer
  },
  {
    "flange_din",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, flange_din),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__flange_din,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__flange_din,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__flange_din,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__flange_din,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__flange_din,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__flange_din  // resize(index) function pointer
  },
  {
    "flange_dout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, flange_dout),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__flange_dout,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__flange_dout,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__flange_dout,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__flange_dout,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__flange_dout,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__flange_dout  // resize(index) function pointer
  },
  {
    "extend_din",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, extend_din),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__extend_din,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_din,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_din,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__extend_din,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__extend_din,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__extend_din  // resize(index) function pointer
  },
  {
    "extend_dout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, extend_dout),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__extend_dout,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_dout,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_dout,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__extend_dout,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__extend_dout,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__extend_dout  // resize(index) function pointer
  },
  {
    "extend_ain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, extend_ain),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__extend_ain,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_ain,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_ain,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__extend_ain,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__extend_ain,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__extend_ain  // resize(index) function pointer
  },
  {
    "extend_aout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__IOStatus, extend_aout),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__size_function__IOStatus__extend_aout,  // size() function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_const_function__IOStatus__extend_aout,  // get_const(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__get_function__IOStatus__extend_aout,  // get(index) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__fetch_function__IOStatus__extend_aout,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__assign_function__IOStatus__extend_aout,  // assign(index, value) function pointer
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__resize_function__IOStatus__extend_aout  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_message_members = {
  "lebai_interfaces__msg",  // message namespace
  "IOStatus",  // message name
  12,  // number of fields
  sizeof(lebai_interfaces__msg__IOStatus),
  lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_message_member_array,  // message members
  lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_message_type_support_handle = {
  0,
  &lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lebai_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, msg, IOStatus)() {
  if (!lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_message_type_support_handle.typesupport_identifier) {
    lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lebai_interfaces__msg__IOStatus__rosidl_typesupport_introspection_c__IOStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
