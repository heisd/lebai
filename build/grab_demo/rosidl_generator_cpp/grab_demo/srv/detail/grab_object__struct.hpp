// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from grab_demo:srv/GrabObject.idl
// generated code does not contain a copyright notice

#ifndef GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__STRUCT_HPP_
#define GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__grab_demo__srv__GrabObject_Request __attribute__((deprecated))
#else
# define DEPRECATED__grab_demo__srv__GrabObject_Request __declspec(deprecated)
#endif

namespace grab_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GrabObject_Request_
{
  using Type = GrabObject_Request_<ContainerAllocator>;

  explicit GrabObject_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obj_link = "";
    }
  }

  explicit GrabObject_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_link(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obj_link = "";
    }
  }

  // field types and members
  using _obj_link_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _obj_link_type obj_link;

  // setters for named parameter idiom
  Type & set__obj_link(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->obj_link = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grab_demo::srv::GrabObject_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab_demo::srv::GrabObject_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab_demo::srv::GrabObject_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab_demo::srv::GrabObject_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab_demo::srv::GrabObject_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab_demo::srv::GrabObject_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab_demo::srv::GrabObject_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab_demo::srv::GrabObject_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab_demo::srv::GrabObject_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab_demo::srv::GrabObject_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab_demo__srv__GrabObject_Request
    std::shared_ptr<grab_demo::srv::GrabObject_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab_demo__srv__GrabObject_Request
    std::shared_ptr<grab_demo::srv::GrabObject_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabObject_Request_ & other) const
  {
    if (this->obj_link != other.obj_link) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabObject_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabObject_Request_

// alias to use template instance with default allocator
using GrabObject_Request =
  grab_demo::srv::GrabObject_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace grab_demo


#ifndef _WIN32
# define DEPRECATED__grab_demo__srv__GrabObject_Response __attribute__((deprecated))
#else
# define DEPRECATED__grab_demo__srv__GrabObject_Response __declspec(deprecated)
#endif

namespace grab_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GrabObject_Response_
{
  using Type = GrabObject_Response_<ContainerAllocator>;

  explicit GrabObject_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GrabObject_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    grab_demo::srv::GrabObject_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const grab_demo::srv::GrabObject_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grab_demo::srv::GrabObject_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grab_demo::srv::GrabObject_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grab_demo::srv::GrabObject_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grab_demo::srv::GrabObject_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grab_demo::srv::GrabObject_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grab_demo::srv::GrabObject_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grab_demo::srv::GrabObject_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grab_demo::srv::GrabObject_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grab_demo__srv__GrabObject_Response
    std::shared_ptr<grab_demo::srv::GrabObject_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grab_demo__srv__GrabObject_Response
    std::shared_ptr<grab_demo::srv::GrabObject_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrabObject_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrabObject_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrabObject_Response_

// alias to use template instance with default allocator
using GrabObject_Response =
  grab_demo::srv::GrabObject_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace grab_demo

namespace grab_demo
{

namespace srv
{

struct GrabObject
{
  using Request = grab_demo::srv::GrabObject_Request;
  using Response = grab_demo::srv::GrabObject_Response;
};

}  // namespace srv

}  // namespace grab_demo

#endif  // GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__STRUCT_HPP_
