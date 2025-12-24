// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lebai_interfaces:msg/IOStatus.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/msg/detail/io_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lebai_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lebai_interfaces/msg/detail/io_status__struct.h"
#include "lebai_interfaces/msg/detail/io_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // extend_ain, extend_aout, extend_din, extend_dout, flange_din, flange_dout, robot_ain, robot_ain_type, robot_aout, robot_aout_type, robot_din, robot_dout
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // extend_ain, extend_aout, extend_din, extend_dout, flange_din, flange_dout, robot_ain, robot_ain_type, robot_aout, robot_aout_type, robot_din, robot_dout

// forward declare type support functions


using _IOStatus__ros_msg_type = lebai_interfaces__msg__IOStatus;

static bool _IOStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IOStatus__ros_msg_type * ros_message = static_cast<const _IOStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_din
  {
    size_t size = ros_message->robot_din.size;
    auto array_ptr = ros_message->robot_din.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: robot_dout
  {
    size_t size = ros_message->robot_dout.size;
    auto array_ptr = ros_message->robot_dout.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: robot_ain
  {
    size_t size = ros_message->robot_ain.size;
    auto array_ptr = ros_message->robot_ain.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: robot_aout
  {
    size_t size = ros_message->robot_aout.size;
    auto array_ptr = ros_message->robot_aout.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: robot_ain_type
  {
    size_t size = ros_message->robot_ain_type.size;
    auto array_ptr = ros_message->robot_ain_type.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: robot_aout_type
  {
    size_t size = ros_message->robot_aout_type.size;
    auto array_ptr = ros_message->robot_aout_type.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: flange_din
  {
    size_t size = ros_message->flange_din.size;
    auto array_ptr = ros_message->flange_din.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: flange_dout
  {
    size_t size = ros_message->flange_dout.size;
    auto array_ptr = ros_message->flange_dout.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: extend_din
  {
    size_t size = ros_message->extend_din.size;
    auto array_ptr = ros_message->extend_din.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: extend_dout
  {
    size_t size = ros_message->extend_dout.size;
    auto array_ptr = ros_message->extend_dout.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: extend_ain
  {
    size_t size = ros_message->extend_ain.size;
    auto array_ptr = ros_message->extend_ain.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: extend_aout
  {
    size_t size = ros_message->extend_aout.size;
    auto array_ptr = ros_message->extend_aout.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _IOStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IOStatus__ros_msg_type * ros_message = static_cast<_IOStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_din
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robot_din.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->robot_din);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->robot_din, size)) {
      fprintf(stderr, "failed to create array for field 'robot_din'");
      return false;
    }
    auto array_ptr = ros_message->robot_din.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: robot_dout
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robot_dout.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->robot_dout);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->robot_dout, size)) {
      fprintf(stderr, "failed to create array for field 'robot_dout'");
      return false;
    }
    auto array_ptr = ros_message->robot_dout.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: robot_ain
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robot_ain.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->robot_ain);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->robot_ain, size)) {
      fprintf(stderr, "failed to create array for field 'robot_ain'");
      return false;
    }
    auto array_ptr = ros_message->robot_ain.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: robot_aout
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robot_aout.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->robot_aout);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->robot_aout, size)) {
      fprintf(stderr, "failed to create array for field 'robot_aout'");
      return false;
    }
    auto array_ptr = ros_message->robot_aout.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: robot_ain_type
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robot_ain_type.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->robot_ain_type);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->robot_ain_type, size)) {
      fprintf(stderr, "failed to create array for field 'robot_ain_type'");
      return false;
    }
    auto array_ptr = ros_message->robot_ain_type.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: robot_aout_type
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robot_aout_type.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->robot_aout_type);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->robot_aout_type, size)) {
      fprintf(stderr, "failed to create array for field 'robot_aout_type'");
      return false;
    }
    auto array_ptr = ros_message->robot_aout_type.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: flange_din
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->flange_din.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->flange_din);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->flange_din, size)) {
      fprintf(stderr, "failed to create array for field 'flange_din'");
      return false;
    }
    auto array_ptr = ros_message->flange_din.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: flange_dout
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->flange_dout.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->flange_dout);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->flange_dout, size)) {
      fprintf(stderr, "failed to create array for field 'flange_dout'");
      return false;
    }
    auto array_ptr = ros_message->flange_dout.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: extend_din
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->extend_din.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->extend_din);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->extend_din, size)) {
      fprintf(stderr, "failed to create array for field 'extend_din'");
      return false;
    }
    auto array_ptr = ros_message->extend_din.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: extend_dout
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->extend_dout.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->extend_dout);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->extend_dout, size)) {
      fprintf(stderr, "failed to create array for field 'extend_dout'");
      return false;
    }
    auto array_ptr = ros_message->extend_dout.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: extend_ain
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->extend_ain.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->extend_ain);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->extend_ain, size)) {
      fprintf(stderr, "failed to create array for field 'extend_ain'");
      return false;
    }
    auto array_ptr = ros_message->extend_ain.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: extend_aout
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->extend_aout.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->extend_aout);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->extend_aout, size)) {
      fprintf(stderr, "failed to create array for field 'extend_aout'");
      return false;
    }
    auto array_ptr = ros_message->extend_aout.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lebai_interfaces
size_t get_serialized_size_lebai_interfaces__msg__IOStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IOStatus__ros_msg_type * ros_message = static_cast<const _IOStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_din
  {
    size_t array_size = ros_message->robot_din.size;
    auto array_ptr = ros_message->robot_din.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_dout
  {
    size_t array_size = ros_message->robot_dout.size;
    auto array_ptr = ros_message->robot_dout.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_ain
  {
    size_t array_size = ros_message->robot_ain.size;
    auto array_ptr = ros_message->robot_ain.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_aout
  {
    size_t array_size = ros_message->robot_aout.size;
    auto array_ptr = ros_message->robot_aout.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_ain_type
  {
    size_t array_size = ros_message->robot_ain_type.size;
    auto array_ptr = ros_message->robot_ain_type.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_aout_type
  {
    size_t array_size = ros_message->robot_aout_type.size;
    auto array_ptr = ros_message->robot_aout_type.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flange_din
  {
    size_t array_size = ros_message->flange_din.size;
    auto array_ptr = ros_message->flange_din.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flange_dout
  {
    size_t array_size = ros_message->flange_dout.size;
    auto array_ptr = ros_message->flange_dout.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extend_din
  {
    size_t array_size = ros_message->extend_din.size;
    auto array_ptr = ros_message->extend_din.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extend_dout
  {
    size_t array_size = ros_message->extend_dout.size;
    auto array_ptr = ros_message->extend_dout.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extend_ain
  {
    size_t array_size = ros_message->extend_ain.size;
    auto array_ptr = ros_message->extend_ain.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extend_aout
  {
    size_t array_size = ros_message->extend_aout.size;
    auto array_ptr = ros_message->extend_aout.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IOStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lebai_interfaces__msg__IOStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lebai_interfaces
size_t max_serialized_size_lebai_interfaces__msg__IOStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: robot_din
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_dout
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_ain
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_aout
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_ain_type
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_aout_type
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flange_din
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flange_dout
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extend_din
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extend_dout
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extend_ain
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extend_aout
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lebai_interfaces__msg__IOStatus;
    is_plain =
      (
      offsetof(DataType, extend_aout) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _IOStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lebai_interfaces__msg__IOStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IOStatus = {
  "lebai_interfaces::msg",
  "IOStatus",
  _IOStatus__cdr_serialize,
  _IOStatus__cdr_deserialize,
  _IOStatus__get_serialized_size,
  _IOStatus__max_serialized_size
};

static rosidl_message_type_support_t _IOStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IOStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lebai_interfaces, msg, IOStatus)() {
  return &_IOStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
