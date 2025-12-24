// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lebai_interfaces:srv/MoveJoint.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__MOVE_JOINT__STRUCT_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__MOVE_JOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cartesian_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'common'
#include "lebai_interfaces/msg/detail/move_common__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__srv__MoveJoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__srv__MoveJoint_Request __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveJoint_Request_
{
  using Type = MoveJoint_Request_<ContainerAllocator>;

  explicit MoveJoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cartesian_pose(_init),
    common(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_joint_pose = false;
    }
  }

  explicit MoveJoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cartesian_pose(_alloc, _init),
    common(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_joint_pose = false;
    }
  }

  // field types and members
  using _is_joint_pose_type =
    bool;
  _is_joint_pose_type is_joint_pose;
  using _joint_pose_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_pose_type joint_pose;
  using _cartesian_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _cartesian_pose_type cartesian_pose;
  using _common_type =
    lebai_interfaces::msg::MoveCommon_<ContainerAllocator>;
  _common_type common;

  // setters for named parameter idiom
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
  Type & set__common(
    const lebai_interfaces::msg::MoveCommon_<ContainerAllocator> & _arg)
  {
    this->common = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__srv__MoveJoint_Request
    std::shared_ptr<lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__srv__MoveJoint_Request
    std::shared_ptr<lebai_interfaces::srv::MoveJoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveJoint_Request_ & other) const
  {
    if (this->is_joint_pose != other.is_joint_pose) {
      return false;
    }
    if (this->joint_pose != other.joint_pose) {
      return false;
    }
    if (this->cartesian_pose != other.cartesian_pose) {
      return false;
    }
    if (this->common != other.common) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveJoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveJoint_Request_

// alias to use template instance with default allocator
using MoveJoint_Request =
  lebai_interfaces::srv::MoveJoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lebai_interfaces


#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__srv__MoveJoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__srv__MoveJoint_Response __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveJoint_Response_
{
  using Type = MoveJoint_Response_<ContainerAllocator>;

  explicit MoveJoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = false;
    }
  }

  explicit MoveJoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = false;
    }
  }

  // field types and members
  using _ret_type =
    bool;
  _ret_type ret;

  // setters for named parameter idiom
  Type & set__ret(
    const bool & _arg)
  {
    this->ret = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__srv__MoveJoint_Response
    std::shared_ptr<lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__srv__MoveJoint_Response
    std::shared_ptr<lebai_interfaces::srv::MoveJoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveJoint_Response_ & other) const
  {
    if (this->ret != other.ret) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveJoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveJoint_Response_

// alias to use template instance with default allocator
using MoveJoint_Response =
  lebai_interfaces::srv::MoveJoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lebai_interfaces

namespace lebai_interfaces
{

namespace srv
{

struct MoveJoint
{
  using Request = lebai_interfaces::srv::MoveJoint_Request;
  using Response = lebai_interfaces::srv::MoveJoint_Response;
};

}  // namespace srv

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__SRV__DETAIL__MOVE_JOINT__STRUCT_HPP_
