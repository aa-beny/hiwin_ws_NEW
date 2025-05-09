// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/OutcomeRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__OutcomeRequest __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__OutcomeRequest __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OutcomeRequest_
{
  using Type = OutcomeRequest_<ContainerAllocator>;

  explicit OutcomeRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->outcome = 0;
      this->target = "";
    }
  }

  explicit OutcomeRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->outcome = 0;
      this->target = "";
    }
  }

  // field types and members
  using _outcome_type =
    uint8_t;
  _outcome_type outcome;
  using _target_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__outcome(
    const uint8_t & _arg)
  {
    this->outcome = _arg;
    return *this;
  }
  Type & set__target(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__OutcomeRequest
    std::shared_ptr<flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__OutcomeRequest
    std::shared_ptr<flexbe_msgs::msg::OutcomeRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OutcomeRequest_ & other) const
  {
    if (this->outcome != other.outcome) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const OutcomeRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OutcomeRequest_

// alias to use template instance with default allocator
using OutcomeRequest =
  flexbe_msgs::msg::OutcomeRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__STRUCT_HPP_
