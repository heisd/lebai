// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lebai_interfaces:srv/SetGripper.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__SET_GRIPPER__STRUCT_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__SET_GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__srv__SetGripper_Request __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__srv__SetGripper_Request __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGripper_Request_
{
  using Type = SetGripper_Request_<ContainerAllocator>;

  explicit SetGripper_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->val = 0.0;
    }
  }

  explicit SetGripper_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->val = 0.0;
    }
  }

  // field types and members
  using _val_type =
    double;
  _val_type val;

  // setters for named parameter idiom
  Type & set__val(
    const double & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__srv__SetGripper_Request
    std::shared_ptr<lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__srv__SetGripper_Request
    std::shared_ptr<lebai_interfaces::srv::SetGripper_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGripper_Request_ & other) const
  {
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGripper_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGripper_Request_

// alias to use template instance with default allocator
using SetGripper_Request =
  lebai_interfaces::srv::SetGripper_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lebai_interfaces


#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__srv__SetGripper_Response __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__srv__SetGripper_Response __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGripper_Response_
{
  using Type = SetGripper_Response_<ContainerAllocator>;

  explicit SetGripper_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ret = false;
    }
  }

  explicit SetGripper_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__srv__SetGripper_Response
    std::shared_ptr<lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__srv__SetGripper_Response
    std::shared_ptr<lebai_interfaces::srv::SetGripper_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGripper_Response_ & other) const
  {
    if (this->ret != other.ret) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGripper_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGripper_Response_

// alias to use template instance with default allocator
using SetGripper_Response =
  lebai_interfaces::srv::SetGripper_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lebai_interfaces

namespace lebai_interfaces
{

namespace srv
{

struct SetGripper
{
  using Request = lebai_interfaces::srv::SetGripper_Request;
  using Response = lebai_interfaces::srv::SetGripper_Response;
};

}  // namespace srv

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__SRV__DETAIL__SET_GRIPPER__STRUCT_HPP_
