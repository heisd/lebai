// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lebai_interfaces:msg/IOConditionalExpress.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/msg/detail/io_conditional_express__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lebai_interfaces/msg/detail/io_conditional_express__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace lebai_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lebai_interfaces
cdr_serialize(
  const lebai_interfaces::msg::IOConditionalExpress & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: group
  cdr << ros_message.group;
  // Member: pin
  cdr << ros_message.pin;
  // Member: type
  cdr << ros_message.type;
  // Member: float_value
  cdr << ros_message.float_value;
  // Member: uint_value
  cdr << ros_message.uint_value;
  // Member: logic_operation
  cdr << ros_message.logic_operation;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lebai_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lebai_interfaces::msg::IOConditionalExpress & ros_message)
{
  // Member: group
  cdr >> ros_message.group;

  // Member: pin
  cdr >> ros_message.pin;

  // Member: type
  cdr >> ros_message.type;

  // Member: float_value
  cdr >> ros_message.float_value;

  // Member: uint_value
  cdr >> ros_message.uint_value;

  // Member: logic_operation
  cdr >> ros_message.logic_operation;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lebai_interfaces
get_serialized_size(
  const lebai_interfaces::msg::IOConditionalExpress & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: group
  {
    size_t item_size = sizeof(ros_message.group);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pin
  {
    size_t item_size = sizeof(ros_message.pin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: float_value
  {
    size_t item_size = sizeof(ros_message.float_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uint_value
  {
    size_t item_size = sizeof(ros_message.uint_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: logic_operation
  {
    size_t item_size = sizeof(ros_message.logic_operation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lebai_interfaces
max_serialized_size_IOConditionalExpress(
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


  // Member: group
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: float_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uint_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: logic_operation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lebai_interfaces::msg::IOConditionalExpress;
    is_plain =
      (
      offsetof(DataType, logic_operation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IOConditionalExpress__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lebai_interfaces::msg::IOConditionalExpress *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IOConditionalExpress__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lebai_interfaces::msg::IOConditionalExpress *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IOConditionalExpress__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lebai_interfaces::msg::IOConditionalExpress *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IOConditionalExpress__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IOConditionalExpress(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IOConditionalExpress__callbacks = {
  "lebai_interfaces::msg",
  "IOConditionalExpress",
  _IOConditionalExpress__cdr_serialize,
  _IOConditionalExpress__cdr_deserialize,
  _IOConditionalExpress__get_serialized_size,
  _IOConditionalExpress__max_serialized_size
};

static rosidl_message_type_support_t _IOConditionalExpress__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IOConditionalExpress__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lebai_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lebai_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<lebai_interfaces::msg::IOConditionalExpress>()
{
  return &lebai_interfaces::msg::typesupport_fastrtps_cpp::_IOConditionalExpress__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lebai_interfaces, msg, IOConditionalExpress)() {
  return &lebai_interfaces::msg::typesupport_fastrtps_cpp::_IOConditionalExpress__handle;
}

#ifdef __cplusplus
}
#endif
