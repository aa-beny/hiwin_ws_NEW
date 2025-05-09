// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/BehaviorRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'structure'
#include "flexbe_msgs/msg/detail/container__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__BehaviorRequest __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__BehaviorRequest __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorRequest_
{
  using Type = BehaviorRequest_<ContainerAllocator>;

  explicit BehaviorRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_name = "";
      this->autonomy_level = 0;
    }
  }

  explicit BehaviorRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : behavior_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_name = "";
      this->autonomy_level = 0;
    }
  }

  // field types and members
  using _behavior_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_name_type behavior_name;
  using _autonomy_level_type =
    uint8_t;
  _autonomy_level_type autonomy_level;
  using _arg_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _arg_keys_type arg_keys;
  using _arg_values_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _arg_values_type arg_values;
  using _structure_type =
    std::vector<flexbe_msgs::msg::Container_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::msg::Container_<ContainerAllocator>>>;
  _structure_type structure;

  // setters for named parameter idiom
  Type & set__behavior_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_name = _arg;
    return *this;
  }
  Type & set__autonomy_level(
    const uint8_t & _arg)
  {
    this->autonomy_level = _arg;
    return *this;
  }
  Type & set__arg_keys(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->arg_keys = _arg;
    return *this;
  }
  Type & set__arg_values(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->arg_values = _arg;
    return *this;
  }
  Type & set__structure(
    const std::vector<flexbe_msgs::msg::Container_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::msg::Container_<ContainerAllocator>>> & _arg)
  {
    this->structure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__BehaviorRequest
    std::shared_ptr<flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__BehaviorRequest
    std::shared_ptr<flexbe_msgs::msg::BehaviorRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorRequest_ & other) const
  {
    if (this->behavior_name != other.behavior_name) {
      return false;
    }
    if (this->autonomy_level != other.autonomy_level) {
      return false;
    }
    if (this->arg_keys != other.arg_keys) {
      return false;
    }
    if (this->arg_values != other.arg_values) {
      return false;
    }
    if (this->structure != other.structure) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorRequest_

// alias to use template instance with default allocator
using BehaviorRequest =
  flexbe_msgs::msg::BehaviorRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_REQUEST__STRUCT_HPP_
