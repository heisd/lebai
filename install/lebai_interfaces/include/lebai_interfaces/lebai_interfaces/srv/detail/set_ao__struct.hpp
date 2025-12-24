// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lebai_interfaces:srv/SetAO.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__SRV__DETAIL__SET_AO__STRUCT_HPP_
#define LEBAI_INTERFACES__SRV__DETAIL__SET_AO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__srv__SetAO_Request __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__srv__SetAO_Request __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAO_Request_
{
  using Type = SetAO_Request_<ContainerAllocator>;

  explicit SetAO_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin = 0;
      this->value = 0.0;
    }
  }

  explicit SetAO_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin = 0;
      this->value = 0.0;
    }
  }

  // field types and members
  using _pin_type =
    uint16_t;
  _pin_type pin;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__pin(
    const uint16_t & _arg)
  {
    this->pin = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lebai_interfaces::srv::SetAO_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::srv::SetAO_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::srv::SetAO_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::srv::SetAO_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::SetAO_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::SetAO_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::SetAO_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::SetAO_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::srv::SetAO_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::srv::SetAO_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__srv__SetAO_Request
    std::shared_ptr<lebai_interfaces::srv::SetAO_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__srv__SetAO_Request
    std::shared_ptr<lebai_interfaces::srv::SetAO_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAO_Request_ & other) const
  {
    if (this->pin != other.pin) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAO_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAO_Request_

// alias to use template instance with default allocator
using SetAO_Request =
  lebai_interfaces::srv::SetAO_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lebai_interfaces


#ifndef _WIN32
# define DEPRECATED__lebai_interfaces__srv__SetAO_Response __attribute__((deprecated))
#else
# define DEPRECATED__lebai_interfaces__srv__SetAO_Response __declspec(deprecated)
#endif

namespace lebai_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAO_Response_
{
  using Type = SetAO_Response_<ContainerAllocator>;

  explicit SetAO_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = false;
    }
  }

  explicit SetAO_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->code = false;
    }
  }

  // field types and members
  using _code_type =
    bool;
  _code_type code;

  // setters for named parameter idiom
  Type & set__code(
    const bool & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lebai_interfaces::srv::SetAO_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lebai_interfaces::srv::SetAO_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lebai_interfaces::srv::SetAO_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lebai_interfaces::srv::SetAO_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::SetAO_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::SetAO_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lebai_interfaces::srv::SetAO_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lebai_interfaces::srv::SetAO_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lebai_interfaces::srv::SetAO_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lebai_interfaces::srv::SetAO_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lebai_interfaces__srv__SetAO_Response
    std::shared_ptr<lebai_interfaces::srv::SetAO_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lebai_interfaces__srv__SetAO_Response
    std::shared_ptr<lebai_interfaces::srv::SetAO_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAO_Response_ & other) const
  {
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAO_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAO_Response_

// alias to use template instance with default allocator
using SetAO_Response =
  lebai_interfaces::srv::SetAO_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lebai_interfaces

namespace lebai_interfaces
{

namespace srv
{

struct SetAO
{
  using Request = lebai_interfaces::srv::SetAO_Request;
  using Response = lebai_interfaces::srv::SetAO_Response;
};

}  // namespace srv

}  // namespace lebai_interfaces

#endif  // LEBAI_INTERFACES__SRV__DETAIL__SET_AO__STRUCT_HPP_
