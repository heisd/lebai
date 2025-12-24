// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lebai_interfaces:msg/TrajectoryMoveJoint.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_JOINT__BUILDER_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_JOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lebai_interfaces/msg/detail/trajectory_move_joint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lebai_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrajectoryMoveJoint_cartesian_pose
{
public:
  explicit Init_TrajectoryMoveJoint_cartesian_pose(::lebai_interfaces::msg::TrajectoryMoveJoint & msg)
  : msg_(msg)
  {}
  ::lebai_interfaces::msg::TrajectoryMoveJoint cartesian_pose(::lebai_interfaces::msg::TrajectoryMoveJoint::_cartesian_pose_type arg)
  {
    msg_.cartesian_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveJoint msg_;
};

class Init_TrajectoryMoveJoint_joint_pose
{
public:
  explicit Init_TrajectoryMoveJoint_joint_pose(::lebai_interfaces::msg::TrajectoryMoveJoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryMoveJoint_cartesian_pose joint_pose(::lebai_interfaces::msg::TrajectoryMoveJoint::_joint_pose_type arg)
  {
    msg_.joint_pose = std::move(arg);
    return Init_TrajectoryMoveJoint_cartesian_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveJoint msg_;
};

class Init_TrajectoryMoveJoint_is_joint_pose
{
public:
  explicit Init_TrajectoryMoveJoint_is_joint_pose(::lebai_interfaces::msg::TrajectoryMoveJoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryMoveJoint_joint_pose is_joint_pose(::lebai_interfaces::msg::TrajectoryMoveJoint::_is_joint_pose_type arg)
  {
    msg_.is_joint_pose = std::move(arg);
    return Init_TrajectoryMoveJoint_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveJoint msg_;
};

class Init_TrajectoryMoveJoint_common
{
public:
  Init_TrajectoryMoveJoint_common()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryMoveJoint_is_joint_pose common(::lebai_interfaces::msg::TrajectoryMoveJoint::_common_type arg)
  {
    msg_.common = std::move(arg);
    return Init_TrajectoryMoveJoint_is_joint_pose(msg_);
  }

private:
  ::lebai_interfaces::msg::TrajectoryMoveJoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lebai_interfaces::msg::TrajectoryMoveJoint>()
{
  return lebai_interfaces::msg::builder::Init_TrajectoryMoveJoint_common();
}

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_JOINT__BUILDER_HPP_
