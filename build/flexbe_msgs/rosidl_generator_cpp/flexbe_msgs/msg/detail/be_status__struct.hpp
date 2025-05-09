// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/BEStatus.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__BEStatus __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__BEStatus __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BEStatus_
{
  using Type = BEStatus_<ContainerAllocator>;

  explicit BEStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_id = 0l;
      this->code = 0;
    }
  }

  explicit BEStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->behavior_id = 0l;
      this->code = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _behavior_id_type =
    int32_t;
  _behavior_id_type behavior_id;
  using _code_type =
    uint8_t;
  _code_type code;
  using _args_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _args_type args;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__behavior_id(
    const int32_t & _arg)
  {
    this->behavior_id = _arg;
    return *this;
  }
  Type & set__code(
    const uint8_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__args(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->args = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STARTED =
    0u;
  static constexpr uint8_t FINISHED =
    1u;
  static constexpr uint8_t FAILED =
    2u;
  static constexpr uint8_t LOCKED =
    4u;
  static constexpr uint8_t WAITING =
    5u;
  static constexpr uint8_t SWITCHING =
    6u;
  static constexpr uint8_t WARNING =
    10u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    11u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
  static constexpr uint8_t READY =
    20u;
  static constexpr uint8_t RUNNING =
    30u;

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::BEStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::BEStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BEStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::BEStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BEStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BEStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::BEStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::BEStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BEStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::BEStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__BEStatus
    std::shared_ptr<flexbe_msgs::msg::BEStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__BEStatus
    std::shared_ptr<flexbe_msgs::msg::BEStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BEStatus_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->behavior_id != other.behavior_id) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->args != other.args) {
      return false;
    }
    return true;
  }
  bool operator!=(const BEStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BEStatus_

// alias to use template instance with default allocator
using BEStatus =
  flexbe_msgs::msg::BEStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BEStatus_<ContainerAllocator>::STARTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BEStatus_<ContainerAllocator>::FINISHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BEStatus_<ContainerAllocator>::FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BEStatus_<ContainerAllocator>::LOCKED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BEStatus_<ContainerAllocator>::WAITING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BEStatus_<ContainerAllocator>::SWITCHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BEStatus_<ContainerAllocator>::WARNING;
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
constexpr uint8_t BEStatus_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BEStatus_<ContainerAllocator>::READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BEStatus_<ContainerAllocator>::RUNNING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__BE_STATUS__STRUCT_HPP_
