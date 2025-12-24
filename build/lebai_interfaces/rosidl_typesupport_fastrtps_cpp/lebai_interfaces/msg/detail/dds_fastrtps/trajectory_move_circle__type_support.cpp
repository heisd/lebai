// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lebai_interfaces:msg/TrajectoryMoveCircle.idl
// generated code does not contain a copyright notice
#include "lebai_interfaces/msg/detail/trajectory_move_circle__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lebai_interfaces/msg/detail/trajectory_move_circle__struct.hpp"

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
bool cdr_serialize(
  const lebai_interfaces::msg::MoveCommon &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  lebai_interfaces::msg::MoveCommon &);
size_t get_serialized_size(
  const lebai_interfaces::msg::MoveCommon &,
  size_t current_alignment);
size_t
max_serialized_size_MoveCommon(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace lebai_interfaces

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

// functions for geometry_msgs::msg::Pose already declared above


namespace lebai_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lebai_interfaces
cdr_serialize(
  const lebai_interfaces::msg::TrajectoryMoveCircle & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: common
  lebai_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.common,
    cdr);
  // Member: way_point_is_joint_pose
  cdr << (ros_message.way_point_is_joint_pose ? true : false);
  // Member: way_point_joint_pose
  {
    cdr << ros_message.way_point_joint_pose;
  }
  // Member: way_point_cartesian_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.way_point_cartesian_pose,
    cdr);
  // Member: end_point_is_joint_pose
  cdr << (ros_message.end_point_is_joint_pose ? true : false);
  // Member: end_point_joint_pose
  {
    cdr << ros_message.end_point_joint_pose;
  }
  // Member: end_point_cartesian_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.end_point_cartesian_pose,
    cdr);
  // Member: circle_angle
  cdr << ros_message.circle_angle;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lebai_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lebai_interfaces::msg::TrajectoryMoveCircle & ros_message)
{
  // Member: common
  lebai_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.common);

  // Member: way_point_is_joint_pose
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.way_point_is_joint_pose = tmp ? true : false;
  }

  // Member: way_point_joint_pose
  {
    cdr >> ros_message.way_point_joint_pose;
  }

  // Member: way_point_cartesian_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.way_point_cartesian_pose);

  // Member: end_point_is_joint_pose
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.end_point_is_joint_pose = tmp ? true : false;
  }

  // Member: end_point_joint_pose
  {
    cdr >> ros_message.end_point_joint_pose;
  }

  // Member: end_point_cartesian_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.end_point_cartesian_pose);

  // Member: circle_angle
  cdr >> ros_message.circle_angle;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lebai_interfaces
get_serialized_size(
  const lebai_interfaces::msg::TrajectoryMoveCircle & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: common

  current_alignment +=
    lebai_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.common, current_alignment);
  // Member: way_point_is_joint_pose
  {
    size_t item_size = sizeof(ros_message.way_point_is_joint_pose);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: way_point_joint_pose
  {
    size_t array_size = ros_message.way_point_joint_pose.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.way_point_joint_pose[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: way_point_cartesian_pose

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.way_point_cartesian_pose, current_alignment);
  // Member: end_point_is_joint_pose
  {
    size_t item_size = sizeof(ros_message.end_point_is_joint_pose);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_point_joint_pose
  {
    size_t array_size = ros_message.end_point_joint_pose.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.end_point_joint_pose[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_point_cartesian_pose

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.end_point_cartesian_pose, current_alignment);
  // Member: circle_angle
  {
    size_t item_size = sizeof(ros_message.circle_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lebai_interfaces
max_serialized_size_TrajectoryMoveCircle(
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


  // Member: common
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        lebai_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_MoveCommon(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: way_point_is_joint_pose
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: way_point_joint_pose
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

  // Member: way_point_cartesian_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: end_point_is_joint_pose
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: end_point_joint_pose
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

  // Member: end_point_cartesian_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: circle_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lebai_interfaces::msg::TrajectoryMoveCircle;
    is_plain =
      (
      offsetof(DataType, circle_angle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TrajectoryMoveCircle__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lebai_interfaces::msg::TrajectoryMoveCircle *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrajectoryMoveCircle__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lebai_interfaces::msg::TrajectoryMoveCircle *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrajectoryMoveCircle__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lebai_interfaces::msg::TrajectoryMoveCircle *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrajectoryMoveCircle__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrajectoryMoveCircle(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrajectoryMoveCircle__callbacks = {
  "lebai_interfaces::msg",
  "TrajectoryMoveCircle",
  _TrajectoryMoveCircle__cdr_serialize,
  _TrajectoryMoveCircle__cdr_deserialize,
  _TrajectoryMoveCircle__get_serialized_size,
  _TrajectoryMoveCircle__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryMoveCircle__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrajectoryMoveCircle__callbacks,
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
get_message_type_support_handle<lebai_interfaces::msg::TrajectoryMoveCircle>()
{
  return &lebai_interfaces::msg::typesupport_fastrtps_cpp::_TrajectoryMoveCircle__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lebai_interfaces, msg, TrajectoryMoveCircle)() {
  return &lebai_interfaces::msg::typesupport_fastrtps_cpp::_TrajectoryMoveCircle__handle;
}

#ifdef __cplusplus
}
#endif
