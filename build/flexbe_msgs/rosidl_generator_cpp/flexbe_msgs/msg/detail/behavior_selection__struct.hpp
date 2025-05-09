// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/BehaviorSelection.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'modifications'
#include "flexbe_msgs/msg/detail/behavior_modification__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__BehaviorSelection __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__BehaviorSelection __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorSelection_
{
  using Type = BehaviorSelection_<ContainerAllocator>;

  explicit BehaviorSelection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_id = 0l;
      this->behavior_checksum = 0l;
      this->autonomy_level = 0;
    }
  }

  explicit BehaviorSelection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_id = 0l;
      this->behavior_checksum = 0l;
      this->autonomy_level = 0;
    }
  }

  // field types and members
  using _behavior_id_type =
    int32_t;
  _behavior_id_type behavior_id;
  using _behavior_checksum_type =
    int32_t;
  _behavior_checksum_type behavior_checksum;
  using _autonomy_level_type =
    uint8_t;
  _autonomy_level_type autonomy_level;
  using _arg_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _arg_keys_type arg_keys;
  using _arg_values_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _arg_values_type arg_values;
  using _input_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _input_keys_type input_keys;
  using _input_values_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _input_values_type input_values;
  using _modifications_type =
    std::vector<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator>>>;
  _modifications_type modifications;

  // setters for named parameter idiom
  Type & set__behavior_id(
    const int32_t & _arg)
  {
    this->behavior_id = _arg;
    return *this;
  }
  Type & set__behavior_checksum(
    const int32_t & _arg)
  {
    this->behavior_checksum = _arg;
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
  Type & set__input_keys(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->input_keys = _arg;
    return *this;
  }
  Type & set__input_values(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->input_values = _arg;
    return *this;
  }
  Type & set__modifications(
    const std::vector<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::msg::BehaviorModification_<ContainerAllocator>>> & _arg)
  {
    this->modifications = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__BehaviorSelection
    std::shared_ptr<flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__BehaviorSelection
    std::shared_ptr<flexbe_msgs::msg::BehaviorSelection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorSelection_ & other) const
  {
    if (this->behavior_id != other.behavior_id) {
      return false;
    }
    if (this->behavior_checksum != other.behavior_checksum) {
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
    if (this->input_keys != other.input_keys) {
      return false;
    }
    if (this->input_values != other.input_values) {
      return false;
    }
    if (this->modifications != other.modifications) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorSelection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorSelection_

// alias to use template instance with default allocator
using BehaviorSelection =
  flexbe_msgs::msg::BehaviorSelection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_SELECTION__STRUCT_HPP_
