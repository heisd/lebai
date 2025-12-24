// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lebai_interfaces:srv/MoveCircle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lebai_interfaces/srv/detail/move_circle__rosidl_typesupport_introspection_c.h"
#include "lebai_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lebai_interfaces/srv/detail/move_circle__functions.h"
#include "lebai_interfaces/srv/detail/move_circle__struct.h"


// Include directives for member types
// Member `way_point_joint_pose`
// Member `end_point_joint_pose`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `way_point_cartesian_pose`
// Member `end_point_cartesian_pose`
#include "geometry_msgs/msg/pose.h"
// Member `way_point_cartesian_pose`
// Member `end_point_cartesian_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `common`
#include "lebai_interfaces/msg/move_common.h"
// Member `common`
#include "lebai_interfaces/msg/detail/move_common__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lebai_interfaces__srv__MoveCircle_Request__init(message_memory);
}

void lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_fini_function(void * message_memory)
{
  lebai_interfaces__srv__MoveCircle_Request__fini(message_memory);
}

size_t lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__size_function__MoveCircle_Request__way_point_joint_pose(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_const_function__MoveCircle_Request__way_point_joint_pose(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_function__MoveCircle_Request__way_point_joint_pose(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__fetch_function__MoveCircle_Request__way_point_joint_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_const_function__MoveCircle_Request__way_point_joint_pose(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__assign_function__MoveCircle_Request__way_point_joint_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_function__MoveCircle_Request__way_point_joint_pose(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__resize_function__MoveCircle_Request__way_point_joint_pose(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__size_function__MoveCircle_Request__end_point_joint_pose(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_const_function__MoveCircle_Request__end_point_joint_pose(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_function__MoveCircle_Request__end_point_joint_pose(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__fetch_function__MoveCircle_Request__end_point_joint_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_const_function__MoveCircle_Request__end_point_joint_pose(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__assign_function__MoveCircle_Request__end_point_joint_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_function__MoveCircle_Request__end_point_joint_pose(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__resize_function__MoveCircle_Request__end_point_joint_pose(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_member_array[8] = {
  {
    "way_point_is_joint_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__srv__MoveCircle_Request, way_point_is_joint_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "way_point_joint_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__srv__MoveCircle_Request, way_point_joint_pose),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__size_function__MoveCircle_Request__way_point_joint_pose,  // size() function pointer
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_const_function__MoveCircle_Request__way_point_joint_pose,  // get_const(index) function pointer
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_function__MoveCircle_Request__way_point_joint_pose,  // get(index) function pointer
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__fetch_function__MoveCircle_Request__way_point_joint_pose,  // fetch(index, &value) function pointer
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__assign_function__MoveCircle_Request__way_point_joint_pose,  // assign(index, value) function pointer
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__resize_function__MoveCircle_Request__way_point_joint_pose  // resize(index) function pointer
  },
  {
    "way_point_cartesian_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__srv__MoveCircle_Request, way_point_cartesian_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_point_is_joint_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__srv__MoveCircle_Request, end_point_is_joint_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_point_joint_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__srv__MoveCircle_Request, end_point_joint_pose),  // bytes offset in struct
    NULL,  // default value
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__size_function__MoveCircle_Request__end_point_joint_pose,  // size() function pointer
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_const_function__MoveCircle_Request__end_point_joint_pose,  // get_const(index) function pointer
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__get_function__MoveCircle_Request__end_point_joint_pose,  // get(index) function pointer
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__fetch_function__MoveCircle_Request__end_point_joint_pose,  // fetch(index, &value) function pointer
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__assign_function__MoveCircle_Request__end_point_joint_pose,  // assign(index, value) function pointer
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__resize_function__MoveCircle_Request__end_point_joint_pose  // resize(index) function pointer
  },
  {
    "end_point_cartesian_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__srv__MoveCircle_Request, end_point_cartesian_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "circle_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__srv__MoveCircle_Request, circle_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "common",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__srv__MoveCircle_Request, common),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_members = {
  "lebai_interfaces__srv",  // message namespace
  "MoveCircle_Request",  // message name
  8,  // number of fields
  sizeof(lebai_interfaces__srv__MoveCircle_Request),
  lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_member_array,  // message members
  lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_type_support_handle = {
  0,
  &lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lebai_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, srv, MoveCircle_Request)() {
  lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, msg, MoveCommon)();
  if (!lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_type_support_handle.typesupport_identifier) {
    lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lebai_interfaces__srv__MoveCircle_Request__rosidl_typesupport_introspection_c__MoveCircle_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lebai_interfaces/srv/detail/move_circle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lebai_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lebai_interfaces/srv/detail/move_circle__functions.h"
// already included above
// #include "lebai_interfaces/srv/detail/move_circle__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lebai_interfaces__srv__MoveCircle_Response__init(message_memory);
}

void lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_fini_function(void * message_memory)
{
  lebai_interfaces__srv__MoveCircle_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_member_array[1] = {
  {
    "ret",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lebai_interfaces__srv__MoveCircle_Response, ret),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_members = {
  "lebai_interfaces__srv",  // message namespace
  "MoveCircle_Response",  // message name
  1,  // number of fields
  sizeof(lebai_interfaces__srv__MoveCircle_Response),
  lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_member_array,  // message members
  lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_type_support_handle = {
  0,
  &lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lebai_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, srv, MoveCircle_Response)() {
  if (!lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_type_support_handle.typesupport_identifier) {
    lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lebai_interfaces__srv__MoveCircle_Response__rosidl_typesupport_introspection_c__MoveCircle_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lebai_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lebai_interfaces/srv/detail/move_circle__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lebai_interfaces__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_members = {
  "lebai_interfaces__srv",  // service namespace
  "MoveCircle",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lebai_interfaces__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_Request_message_type_support_handle,
  NULL  // response message
  // lebai_interfaces__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_Response_message_type_support_handle
};

static rosidl_service_type_support_t lebai_interfaces__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_type_support_handle = {
  0,
  &lebai_interfaces__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, srv, MoveCircle_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, srv, MoveCircle_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lebai_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, srv, MoveCircle)() {
  if (!lebai_interfaces__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_type_support_handle.typesupport_identifier) {
    lebai_interfaces__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lebai_interfaces__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, srv, MoveCircle_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lebai_interfaces, srv, MoveCircle_Response)()->data;
  }

  return &lebai_interfaces__srv__detail__move_circle__rosidl_typesupport_introspection_c__MoveCircle_service_type_support_handle;
}
