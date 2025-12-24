// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lebai_interfaces:msg/TrajectoryMoveJoint.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_JOINT__STRUCT_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_JOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'common'
#include "lebai_interfaces/msg/detail/move_common__struct.hpp"
// Member 'cartesian_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__msg__TrajectoryMoveJoint __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__msg__TrajectoryMoveJoint __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryMoveJoint_
{
  using Type = TrajectoryMoveJoint_<ContainerAllocator>;

  explicit TrajectoryMoveJoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : common(_init),
    cartesian_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_joint_pose = false;
    }
  }

  explicit TrajectoryMoveJoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : common(_alloc, _init),
    cartesian_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_joint_pose = false;
    }
  }

  // field types and members
  using _common_type =
    lebai_interfaces::msg::MoveCommon_<ContainerAllocator>;
  _common_type common;
  using _is_joint_pose_type =
    bool;
  _is_joint_pose_type is_joint_pose;
  using _joint_pose_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_pose_type joint_pose;
  using _cartesian_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _cartesian_pose_type cartesian_pose;

  // setters for named parameter idiom
  Type & set__common(
    const lebai_interfaces::msg::MoveCommon_<ContainerAllocator> & _arg)
  {
    this->common = _arg;
    return *this;
  }
  Type & set__is_joint_pose(
    const bool & _arg)
  {
    this->is_joint_pose = _arg;
    return *this;
  }
  Type & set__joint_pose(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_pose = _arg;
    return *this;
  }
  Type & set__cartesian_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->cartesian_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__msg__TrajectoryMoveJoint
    std::shared_ptr<lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__msg__TrajectoryMoveJoint
    std::shared_ptr<lebai_interfaces::msg::TrajectoryMoveJoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryMoveJoint_ & other) const
  {
    if (this->common != other.common) {
      return false;
    }
    if (this->is_joint_pose != other.is_joint_pose) {
      return false;
    }
    if (this->joint_pose != other.joint_pose) {
      return false;
    }
    if (this->cartesian_pose != other.cartesian_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryMoveJoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryMoveJoint_

// alias to use template instance with default allocator
using TrajectoryMoveJoint =
  lebai_interfaces::msg::TrajectoryMoveJoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_JOINT__STRUCT_HPP_
