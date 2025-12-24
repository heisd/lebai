// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lebai_interfaces:msg/TrajectoryMoveJoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lebai_interfaces/msg/detail/trajectory_move_joint__rosidl_typesupport_introspection_c.h"
#include "lebai_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lebai_interfaces/msg/detail/trajectory_move_joint__functions.h"
#include "lebai_interfaces/msg/detail/trajectory_move_joint__struct.h"


// Include directives for member types
// Member `common`
#include "lebai_interfaces/msg/move_common.h"
// Member `common`
#include "lebai_interfaces/msg/detail/move_common__rosidl_typesupport_introspection_c.h"
// Member `joint_pose`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `cartesian_pose`
#include "geometry_msgs/msg/pose.h"
// Member `cartesian_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lebai_interfaces__msg__TrajectoryMoveJoint__init(message_memory);
}

void lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_fini_function(void * message_memory)
{
  lebai_interfaces__msg__TrajectoryMoveJoint__fini(message_memory);
}

size_t lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__size_function__TrajectoryMoveJoint__joint_pose(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__get_const_function__TrajectoryMoveJoint__joint_pose(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__get_function__TrajectoryMoveJoint__joint_pose(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__fetch_function__TrajectoryMoveJoint__joint_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__get_const_function__TrajectoryMoveJoint__joint_pose(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__assign_function__TrajectoryMoveJoint__joint_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__get_function__TrajectoryMoveJoint__joint_pose(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__resize_function__TrajectoryMoveJoint__joint_pose(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_message_member_array[4] = {
  {
    "common",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__TrajectoryMoveJoint, common),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_joint_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__TrajectoryMoveJoint, is_joint_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__TrajectoryMoveJoint, joint_pose),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__size_function__TrajectoryMoveJoint__joint_pose,  // size() function pointer
    lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__get_const_function__TrajectoryMoveJoint__joint_pose,  // get_const(index) function pointer
    lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__get_function__TrajectoryMoveJoint__joint_pose,  // get(index) function pointer
    lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__fetch_function__TrajectoryMoveJoint__joint_pose,  // fetch(index, &value) function pointer
    lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__assign_function__TrajectoryMoveJoint__joint_pose,  // assign(index, value) function pointer
    lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__resize_function__TrajectoryMoveJoint__joint_pose  // resize(index) function pointer
  },
  {
    "cartesian_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__msg__TrajectoryMoveJoint, cartesian_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_message_members = {
  "lebai_interfaces__msg",  // message namespace
  "TrajectoryMoveJoint",  // message name
  4,  // number of fields
  sizeof(lebai_interfaces__msg__TrajectoryMoveJoint),
  lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_message_member_array,  // message members
  lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_init_function,  // function to initialize message memory (memory has to be allocated)
  lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_message_type_support_handle = {
  0,
  &lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lebai_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, msg, TrajectoryMoveJoint)() {
  lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, msg, MoveCommon)();
  lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_message_type_support_handle.typesupport_identifier) {
    lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lebai_interfaces__msg__TrajectoryMoveJoint__rosidl_typesupport_introspection_c__TrajectoryMoveJoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
