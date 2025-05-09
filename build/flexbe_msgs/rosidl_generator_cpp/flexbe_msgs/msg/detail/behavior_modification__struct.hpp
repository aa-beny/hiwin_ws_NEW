// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/BehaviorModification.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_MODIFICATION__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_MODIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__BehaviorModification __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__BehaviorModification __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorModification_
{
  using Type = BehaviorModification_<ContainerAllocator>;

  explicit BehaviorModification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index_begin = 0l;
      this->index_end = 0l;
      this->new_content = "";
    }
  }

  explicit BehaviorModification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : new_content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index_begin = 0l;
      this->index_end = 0l;
      this->new_content = "";
    }
  }

  // field types and members
  using _index_begin_type =
    int32_t;
  _index_begin_type index_begin;
  using _index_end_type =
    int32_t;
  _index_end_type index_end;
  using _new_content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _new_content_type new_content;

  // setters for named parameter idiom
  Type & set__index_begin(
    const int32_t & _arg)
  {
    this->index_begin = _arg;
    return *this;
  }
  Type & set__index_end(
    const int32_t & _arg)
  {
    this->index_end = _arg;
    return *this;
  }
  Type & set__new_content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->new_content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::BehaviorModification_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::BehaviorModification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BehaviorModification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BehaviorModification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__BehaviorModification
    std::shared_ptr<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__BehaviorModification
    std::shared_ptr<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorModification_ & other) const
  {
    if (this->index_begin != other.index_begin) {
      return false;
    }
    if (this->index_end != other.index_end) {
      return false;
    }
    if (this->new_content != other.new_content) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorModification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorModification_

// alias to use template instance with default allocator
using BehaviorModification =
  flexbe_msgs::msg::BehaviorModification_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_MODIFICATION__STRUCT_HPP_
