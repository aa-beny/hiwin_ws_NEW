// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/SynthesisErrorCodes.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__SynthesisErrorCodes __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__SynthesisErrorCodes __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SynthesisErrorCodes_
{
  using Type = SynthesisErrorCodes_<ContainerAllocator>;

  explicit SynthesisErrorCodes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
    }
  }

  explicit SynthesisErrorCodes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
    }
  }

  // field types and members
  using _value_type =
    int32_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t SUCCESS =
    1;

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__SynthesisErrorCodes
    std::shared_ptr<flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__SynthesisErrorCodes
    std::shared_ptr<flexbe_msgs::msg::SynthesisErrorCodes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SynthesisErrorCodes_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const SynthesisErrorCodes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SynthesisErrorCodes_

// alias to use template instance with default allocator
using SynthesisErrorCodes =
  flexbe_msgs::msg::SynthesisErrorCodes_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t SynthesisErrorCodes_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__SYNTHESIS_ERROR_CODES__STRUCT_HPP_
