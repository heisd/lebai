// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lebai_interfaces:msg/TrajectoryMoveCircle.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__STRUCT_HPP_
#define LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__STRUCT_HPP_

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
// Member 'way_point_cartesian_pose'
// Member 'end_point_cartesian_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__msg__TrajectoryMoveCircle __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__msg__TrajectoryMoveCircle __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryMoveCircle_
{
  using Type = TrajectoryMoveCircle_<ContainerAllocator>;

  explicit TrajectoryMoveCircle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : common(_init),
    way_point_cartesian_pose(_init),
    end_point_cartesian_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->way_point_is_joint_pose = false;
      this->end_point_is_joint_pose = false;
      this->circle_angle = 0.0;
    }
  }

  explicit TrajectoryMoveCircle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : common(_alloc, _init),
    way_point_cartesian_pose(_alloc, _init),
    end_point_cartesian_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->way_point_is_joint_pose = false;
      this->end_point_is_joint_pose = false;
      this->circle_angle = 0.0;
    }
  }

  // field types and members
  using _common_type =
    lebai_interfaces::msg::MoveCommon_<ContainerAllocator>;
  _common_type common;
  using _way_point_is_joint_pose_type =
    bool;
  _way_point_is_joint_pose_type way_point_is_joint_pose;
  using _way_point_joint_pose_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _way_point_joint_pose_type way_point_joint_pose;
  using _way_point_cartesian_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _way_point_cartesian_pose_type way_point_cartesian_pose;
  using _end_point_is_joint_pose_type =
    bool;
  _end_point_is_joint_pose_type end_point_is_joint_pose;
  using _end_point_joint_pose_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _end_point_joint_pose_type end_point_joint_pose;
  using _end_point_cartesian_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _end_point_cartesian_pose_type end_point_cartesian_pose;
  using _circle_angle_type =
    double;
  _circle_angle_type circle_angle;

  // setters for named parameter idiom
  Type & set__common(
    const lebai_interfaces::msg::MoveCommon_<ContainerAllocator> & _arg)
  {
    this->common = _arg;
    return *this;
  }
  Type & set__way_point_is_joint_pose(
    const bool & _arg)
  {
    this->way_point_is_joint_pose = _arg;
    return *this;
  }
  Type & set__way_point_joint_pose(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->way_point_joint_pose = _arg;
    return *this;
  }
  Type & set__way_point_cartesian_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->way_point_cartesian_pose = _arg;
    return *this;
  }
  Type & set__end_point_is_joint_pose(
    const bool & _arg)
  {
    this->end_point_is_joint_pose = _arg;
    return *this;
  }
  Type & set__end_point_joint_pose(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->end_point_joint_pose = _arg;
    return *this;
  }
  Type & set__end_point_cartesian_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->end_point_cartesian_pose = _arg;
    return *this;
  }
  Type & set__circle_angle(
    const double & _arg)
  {
    this->circle_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__msg__TrajectoryMoveCircle
    std::shared_ptr<lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__msg__TrajectoryMoveCircle
    std::shared_ptr<lebai_interfaces::msg::TrajectoryMoveCircle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryMoveCircle_ & other) const
  {
    if (this->common != other.common) {
      return false;
    }
    if (this->way_point_is_joint_pose != other.way_point_is_joint_pose) {
      return false;
    }
    if (this->way_point_joint_pose != other.way_point_joint_pose) {
      return false;
    }
    if (this->way_point_cartesian_pose != other.way_point_cartesian_pose) {
      return false;
    }
    if (this->end_point_is_joint_pose != other.end_point_is_joint_pose) {
      return false;
    }
    if (this->end_point_joint_pose != other.end_point_joint_pose) {
      return false;
    }
    if (this->end_point_cartesian_pose != other.end_point_cartesian_pose) {
      return false;
    }
    if (this->circle_angle != other.circle_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryMoveCircle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryMoveCircle_

// alias to use template instance with default allocator
using TrajectoryMoveCircle =
  lebai_interfaces::msg::TrajectoryMoveCircle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__MSG__DETAIL__TRAJECTORY_MOVE_CIRCLE__STRUCT_HPP_
