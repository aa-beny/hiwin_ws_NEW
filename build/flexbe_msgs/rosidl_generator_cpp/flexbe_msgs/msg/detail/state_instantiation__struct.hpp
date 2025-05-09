// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexbe_msgs:msg/StateInstantiation.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__STRUCT_HPP_
#define FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cond_transition'
#include "flexbe_msgs/msg/detail/outcome_condition__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexbe_msgs__msg__StateInstantiation __attribute__((deprecated))
#else
# define DEPRECATED__flexbe_msgs__msg__StateInstantiation __declspec(deprecated)
#endif

namespace flexbe_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateInstantiation_
{
  using Type = StateInstantiation_<ContainerAllocator>;

  explicit StateInstantiation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_path = "";
      this->state_class = "";
      this->initial_state_name = "";
      this->behavior_class = "";
      std::fill<typename std::array<float, 2>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
    }
  }

  explicit StateInstantiation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state_path(_alloc),
    state_class(_alloc),
    initial_state_name(_alloc),
    behavior_class(_alloc),
    position(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_path = "";
      this->state_class = "";
      this->initial_state_name = "";
      this->behavior_class = "";
      std::fill<typename std::array<float, 2>::iterator, float>(this->position.begin(), this->position.end(), 0.0f);
    }
  }

  // field types and members
  using _state_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_path_type state_path;
  using _state_class_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_class_type state_class;
  using _initial_state_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _initial_state_name_type initial_state_name;
  using _input_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _input_keys_type input_keys;
  using _output_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _output_keys_type output_keys;
  using _cond_outcome_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _cond_outcome_type cond_outcome;
  using _cond_transition_type =
    std::vector<flexbe_msgs::msg::OutcomeCondition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::msg::OutcomeCondition_<ContainerAllocator>>>;
  _cond_transition_type cond_transition;
  using _behavior_class_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_class_type behavior_class;
  using _parameter_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _parameter_names_type parameter_names;
  using _parameter_values_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _parameter_values_type parameter_values;
  using _position_type =
    std::array<float, 2>;
  _position_type position;
  using _outcomes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _outcomes_type outcomes;
  using _transitions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _transitions_type transitions;
  using _autonomy_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _autonomy_type autonomy;
  using _userdata_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _userdata_keys_type userdata_keys;
  using _userdata_remapping_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _userdata_remapping_type userdata_remapping;

  // setters for named parameter idiom
  Type & set__state_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_path = _arg;
    return *this;
  }
  Type & set__state_class(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state_class = _arg;
    return *this;
  }
  Type & set__initial_state_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->initial_state_name = _arg;
    return *this;
  }
  Type & set__input_keys(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->input_keys = _arg;
    return *this;
  }
  Type & set__output_keys(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->output_keys = _arg;
    return *this;
  }
  Type & set__cond_outcome(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->cond_outcome = _arg;
    return *this;
  }
  Type & set__cond_transition(
    const std::vector<flexbe_msgs::msg::OutcomeCondition_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<flexbe_msgs::msg::OutcomeCondition_<ContainerAllocator>>> & _arg)
  {
    this->cond_transition = _arg;
    return *this;
  }
  Type & set__behavior_class(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_class = _arg;
    return *this;
  }
  Type & set__parameter_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->parameter_names = _arg;
    return *this;
  }
  Type & set__parameter_values(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->parameter_values = _arg;
    return *this;
  }
  Type & set__position(
    const std::array<float, 2> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__outcomes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->outcomes = _arg;
    return *this;
  }
  Type & set__transitions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->transitions = _arg;
    return *this;
  }
  Type & set__autonomy(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->autonomy = _arg;
    return *this;
  }
  Type & set__userdata_keys(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->userdata_keys = _arg;
    return *this;
  }
  Type & set__userdata_remapping(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->userdata_remapping = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CLASS_STATEMACHINE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CLASS_CONCURRENCY;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CLASS_PRIORITY;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CLASS_BEHAVIOR;

  // pointer types
  using RawPtr =
    flexbe_msgs::msg::StateInstantiation_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexbe_msgs::msg::StateInstantiation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexbe_msgs::msg::StateInstantiation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexbe_msgs::msg::StateInstantiation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::StateInstantiation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::StateInstantiation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexbe_msgs::msg::StateInstantiation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexbe_msgs::msg::StateInstantiation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexbe_msgs::msg::StateInstantiation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexbe_msgs::msg::StateInstantiation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexbe_msgs__msg__StateInstantiation
    std::shared_ptr<flexbe_msgs::msg::StateInstantiation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexbe_msgs__msg__StateInstantiation
    std::shared_ptr<flexbe_msgs::msg::StateInstantiation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateInstantiation_ & other) const
  {
    if (this->state_path != other.state_path) {
      return false;
    }
    if (this->state_class != other.state_class) {
      return false;
    }
    if (this->initial_state_name != other.initial_state_name) {
      return false;
    }
    if (this->input_keys != other.input_keys) {
      return false;
    }
    if (this->output_keys != other.output_keys) {
      return false;
    }
    if (this->cond_outcome != other.cond_outcome) {
      return false;
    }
    if (this->cond_transition != other.cond_transition) {
      return false;
    }
    if (this->behavior_class != other.behavior_class) {
      return false;
    }
    if (this->parameter_names != other.parameter_names) {
      return false;
    }
    if (this->parameter_values != other.parameter_values) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->outcomes != other.outcomes) {
      return false;
    }
    if (this->transitions != other.transitions) {
      return false;
    }
    if (this->autonomy != other.autonomy) {
      return false;
    }
    if (this->userdata_keys != other.userdata_keys) {
      return false;
    }
    if (this->userdata_remapping != other.userdata_remapping) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateInstantiation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateInstantiation_

// alias to use template instance with default allocator
using StateInstantiation =
  flexbe_msgs::msg::StateInstantiation_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateInstantiation_<ContainerAllocator>::CLASS_STATEMACHINE = ":STATEMACHINE";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateInstantiation_<ContainerAllocator>::CLASS_CONCURRENCY = ":CONCURRENCY";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateInstantiation_<ContainerAllocator>::CLASS_PRIORITY = ":PRIORITY";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
StateInstantiation_<ContainerAllocator>::CLASS_BEHAVIOR = ":BEHAVIOR";

}  // namespace msg

}  // namespace flexbe_msgs

#endif  // FLEXBE_MSGS__MSG__DETAIL__STATE_INSTANTIATION__STRUCT_HPP_
