// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/BehaviorSync.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__BehaviorSync __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__BehaviorSync __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorSync_
{
  using Type = BehaviorSync_<ContainerAllocator>;

  explicit BehaviorSync_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_id = 0l;
      this->current_state_checksum = 0l;
    }
  }

  explicit BehaviorSync_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_id = 0l;
      this->current_state_checksum = 0l;
    }
  }

  // field types and members
  using _behavior_id_type =
    int32_t;
  _behavior_id_type behavior_id;
  using _current_state_checksum_type =
    int32_t;
  _current_state_checksum_type current_state_checksum;

  // setters for named parameter idiom
  Type & set__behavior_id(
    const int32_t & _arg)
  {
    this->behavior_id = _arg;
    return *this;
  }
  Type & set__current_state_checksum(
    const int32_t & _arg)
  {
    this->current_state_checksum = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t INVALID =
    0;

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::BehaviorSync_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::BehaviorSync_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BehaviorSync_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BehaviorSync_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BehaviorSync_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BehaviorSync_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BehaviorSync_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BehaviorSync_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BehaviorSync_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BehaviorSync_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__BehaviorSync
    std::shared_ptr<flexbe_msgs::msg::BehaviorSync_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__BehaviorSync
    std::shared_ptr<flexbe_msgs::msg::BehaviorSync_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorSync_ & other) const
  {
    if (this->behavior_id != other.behavior_id) {
      return false;
    }
    if (this->current_state_checksum != other.current_state_checksum) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorSync_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorSync_

// alias to use template instance with default allocator
using BehaviorSync =
  flexbe_msgs::msg::BehaviorSync_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t BehaviorSync_<ContainerAllocator>::INVALID;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SYNC__STRUCT_HPP_
