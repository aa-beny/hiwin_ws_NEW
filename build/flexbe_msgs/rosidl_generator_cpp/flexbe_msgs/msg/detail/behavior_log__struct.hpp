// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/BehaviorLog.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_LOG__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_LOG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__BehaviorLog __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__BehaviorLog __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviorLog_
{
  using Type = BehaviorLog_<ContainerAllocator>;

  explicit BehaviorLog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->status_code = 0;
    }
  }

  explicit BehaviorLog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->status_code = 0;
    }
  }

  // field types and members
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _status_code_type =
    uint8_t;
  _status_code_type status_code;

  // setters for named parameter idiom
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__status_code(
    const uint8_t & _arg)
  {
    this->status_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INFO =
    0u;
  static constexpr uint8_t WARN =
    1u;
  static constexpr uint8_t HINT =
    2u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    3u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
  static constexpr uint8_t DEBUG =
    10u;

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::BehaviorLog_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::BehaviorLog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BehaviorLog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BehaviorLog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BehaviorLog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BehaviorLog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BehaviorLog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BehaviorLog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BehaviorLog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BehaviorLog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__BehaviorLog
    std::shared_ptr<flexbe_msgs::msg::BehaviorLog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__BehaviorLog
    std::shared_ptr<flexbe_msgs::msg::BehaviorLog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviorLog_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    if (this->status_code != other.status_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviorLog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviorLog_

// alias to use template instance with default allocator
using BehaviorLog =
  flexbe_msgs::msg::BehaviorLog_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorLog_<ContainerAllocator>::INFO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorLog_<ContainerAllocator>::WARN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorLog_<ContainerAllocator>::HINT;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorLog_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BehaviorLog_<ContainerAllocator>::DEBUG;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BEHAVIOR_LOG__STRUCT_HPP_
