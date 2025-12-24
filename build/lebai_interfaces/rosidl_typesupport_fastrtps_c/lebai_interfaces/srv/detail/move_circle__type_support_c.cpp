// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lebai_interfaces:srv/MoveCircle.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/srv/detail/move_circle__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lebai_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lebai_interfaces/srv/detail/move_circle__struct.h"
#include "lebai_interfaces/srv/detail/move_circle__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // end_point_cartesian_pose, way_point_cartesian_pose
#include "lebai_interfaces/msg/detail/move_common__functions.h"  // common
#include "rosidl_runtime_c/primitives_sequence.h"  // end_point_joint_pose, way_point_joint_pose
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // end_point_joint_pose, way_point_joint_pose

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_lebai_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_lebai_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_lebai_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();
size_t get_serialized_size_lebai_interfaces__msg__MoveCommon(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lebai_interfaces__msg__MoveCommon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lebai_interfaces, msg, MoveCommon)();


using _MoveCircle_Request__ros_msg_type = lebai_interfaces__srv__MoveCircle_Request;

static bool _MoveCircle_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoveCircle_Request__ros_msg_type * ros_message = static_cast<const _MoveCircle_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: way_point_is_joint_pose
  {
    cdr << (ros_message->way_point_is_joint_pose ? true : false);
  }

  // Field name: way_point_joint_pose
  {
    size_t size = ros_message->way_point_joint_pose.size;
    auto array_ptr = ros_message->way_point_joint_pose.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: way_point_cartesian_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->way_point_cartesian_pose, cdr))
    {
      return false;
    }
  }

  // Field name: end_point_is_joint_pose
  {
    cdr << (ros_message->end_point_is_joint_pose ? true : false);
  }

  // Field name: end_point_joint_pose
  {
    size_t size = ros_message->end_point_joint_pose.size;
    auto array_ptr = ros_message->end_point_joint_pose.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: end_point_cartesian_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->end_point_cartesian_pose, cdr))
    {
      return false;
    }
  }

  // Field name: circle_angle
  {
    cdr << ros_message->circle_angle;
  }

  // Field name: common
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lebai_interfaces, msg, MoveCommon
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->common, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MoveCircle_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoveCircle_Request__ros_msg_type * ros_message = static_cast<_MoveCircle_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: way_point_is_joint_pose
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->way_point_is_joint_pose = tmp ? true : false;
  }

  // Field name: way_point_joint_pose
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->way_point_joint_pose.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->way_point_joint_pose);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->way_point_joint_pose, size)) {
      fprintf(stderr, "failed to create array for field 'way_point_joint_pose'");
      return false;
    }
    auto array_ptr = ros_message->way_point_joint_pose.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: way_point_cartesian_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->way_point_cartesian_pose))
    {
      return false;
    }
  }

  // Field name: end_point_is_joint_pose
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->end_point_is_joint_pose = tmp ? true : false;
  }

  // Field name: end_point_joint_pose
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->end_point_joint_pose.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->end_point_joint_pose);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->end_point_joint_pose, size)) {
      fprintf(stderr, "failed to create array for field 'end_point_joint_pose'");
      return false;
    }
    auto array_ptr = ros_message->end_point_joint_pose.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: end_point_cartesian_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->end_point_cartesian_pose))
    {
      return false;
    }
  }

  // Field name: circle_angle
  {
    cdr >> ros_message->circle_angle;
  }

  // Field name: common
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lebai_interfaces, msg, MoveCommon
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->common))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lebai_interfaces
size_t get_serialized_size_lebai_interfaces__srv__MoveCircle_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveCircle_Request__ros_msg_type * ros_message = static_cast<const _MoveCircle_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name way_point_is_joint_pose
  {
    size_t item_size = sizeof(ros_message->way_point_is_joint_pose);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name way_point_joint_pose
  {
    size_t array_size = ros_message->way_point_joint_pose.size;
    auto array_ptr = ros_message->way_point_joint_pose.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name way_point_cartesian_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->way_point_cartesian_pose), current_alignment);
  // field.name end_point_is_joint_pose
  {
    size_t item_size = sizeof(ros_message->end_point_is_joint_pose);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_point_joint_pose
  {
    size_t array_size = ros_message->end_point_joint_pose.size;
    auto array_ptr = ros_message->end_point_joint_pose.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_point_cartesian_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->end_point_cartesian_pose), current_alignment);
  // field.name circle_angle
  {
    size_t item_size = sizeof(ros_message->circle_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name common

  current_alignment += get_serialized_size_lebai_interfaces__msg__MoveCommon(
    &(ros_message->common), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MoveCircle_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lebai_interfaces__srv__MoveCircle_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lebai_interfaces
size_t max_serialized_size_lebai_interfaces__srv__MoveCircle_Request(
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

  // member: way_point_is_joint_pose
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: way_point_joint_pose
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: way_point_cartesian_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: end_point_is_joint_pose
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: end_point_joint_pose
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: end_point_cartesian_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: circle_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: common
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_lebai_interfaces__msg__MoveCommon(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lebai_interfaces__srv__MoveCircle_Request;
    is_plain =
      (
      offsetof(DataType, common) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MoveCircle_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lebai_interfaces__srv__MoveCircle_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MoveCircle_Request = {
  "lebai_interfaces::srv",
  "MoveCircle_Request",
  _MoveCircle_Request__cdr_serialize,
  _MoveCircle_Request__cdr_deserialize,
  _MoveCircle_Request__get_serialized_size,
  _MoveCircle_Request__max_serialized_size
};

static rosidl_message_type_support_t _MoveCircle_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoveCircle_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lebai_interfaces, srv, MoveCircle_Request)() {
  return &_MoveCircle_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "lebai_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "lebai_interfaces/srv/detail/move_circle__struct.h"
// already included above
// #include "lebai_interfaces/srv/detail/move_circle__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _MoveCircle_Response__ros_msg_type = lebai_interfaces__srv__MoveCircle_Response;

static bool _MoveCircle_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MoveCircle_Response__ros_msg_type * ros_message = static_cast<const _MoveCircle_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    cdr << (ros_message->ret ? true : false);
  }

  return true;
}

static bool _MoveCircle_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MoveCircle_Response__ros_msg_type * ros_message = static_cast<_MoveCircle_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ret
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ret = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lebai_interfaces
size_t get_serialized_size_lebai_interfaces__srv__MoveCircle_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MoveCircle_Response__ros_msg_type * ros_message = static_cast<const _MoveCircle_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ret
  {
    size_t item_size = sizeof(ros_message->ret);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MoveCircle_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lebai_interfaces__srv__MoveCircle_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lebai_interfaces
size_t max_serialized_size_lebai_interfaces__srv__MoveCircle_Response(
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

  // member: ret
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
    using DataType = lebai_interfaces__srv__MoveCircle_Response;
    is_plain =
      (
      offsetof(DataType, ret) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MoveCircle_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_lebai_interfaces__srv__MoveCircle_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MoveCircle_Response = {
  "lebai_interfaces::srv",
  "MoveCircle_Response",
  _MoveCircle_Response__cdr_serialize,
  _MoveCircle_Response__cdr_deserialize,
  _MoveCircle_Response__get_serialized_size,
  _MoveCircle_Response__max_serialized_size
};

static rosidl_message_type_support_t _MoveCircle_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MoveCircle_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lebai_interfaces, srv, MoveCircle_Response)() {
  return &_MoveCircle_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "lebai_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lebai_interfaces/srv/move_circle.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MoveCircle__callbacks = {
  "lebai_interfaces::srv",
  "MoveCircle",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lebai_interfaces, srv, MoveCircle_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lebai_interfaces, srv, MoveCircle_Response)(),
};

static rosidl_service_type_support_t MoveCircle__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MoveCircle__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lebai_interfaces, srv, MoveCircle)() {
  return &MoveCircle__handle;
}

#if defined(__cplusplus)
}
#endif
