// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:msg/StateInstantiation.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/state_instantiation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "flexbe_msgs/msg/detail/state_instantiation__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace flexbe_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const flexbe_msgs::msg::OutcomeCondition &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flexbe_msgs::msg::OutcomeCondition &);
size_t get_serialized_size(
  const flexbe_msgs::msg::OutcomeCondition &,
  size_t current_alignment);
size_t
max_serialized_size_OutcomeCondition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace flexbe_msgs


namespace flexbe_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
cdr_serialize(
  const flexbe_msgs::msg::StateInstantiation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: state_path
  cdr << ros_message.state_path;
  // Member: state_class
  cdr << ros_message.state_class;
  // Member: initial_state_name
  cdr << ros_message.initial_state_name;
  // Member: input_keys
  {
    cdr << ros_message.input_keys;
  }
  // Member: output_keys
  {
    cdr << ros_message.output_keys;
  }
  // Member: cond_outcome
  {
    cdr << ros_message.cond_outcome;
  }
  // Member: cond_transition
  {
    size_t size = ros_message.cond_transition.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      flexbe_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.cond_transition[i],
        cdr);
    }
  }
  // Member: behavior_class
  cdr << ros_message.behavior_class;
  // Member: parameter_names
  {
    cdr << ros_message.parameter_names;
  }
  // Member: parameter_values
  {
    cdr << ros_message.parameter_values;
  }
  // Member: position
  {
    cdr << ros_message.position;
  }
  // Member: outcomes
  {
    cdr << ros_message.outcomes;
  }
  // Member: transitions
  {
    cdr << ros_message.transitions;
  }
  // Member: autonomy
  {
    cdr << ros_message.autonomy;
  }
  // Member: userdata_keys
  {
    cdr << ros_message.userdata_keys;
  }
  // Member: userdata_remapping
  {
    cdr << ros_message.userdata_remapping;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  flexbe_msgs::msg::StateInstantiation & ros_message)
{
  // Member: state_path
  cdr >> ros_message.state_path;

  // Member: state_class
  cdr >> ros_message.state_class;

  // Member: initial_state_name
  cdr >> ros_message.initial_state_name;

  // Member: input_keys
  {
    cdr >> ros_message.input_keys;
  }

  // Member: output_keys
  {
    cdr >> ros_message.output_keys;
  }

  // Member: cond_outcome
  {
    cdr >> ros_message.cond_outcome;
  }

  // Member: cond_transition
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.cond_transition.resize(size);
    for (size_t i = 0; i < size; i++) {
      flexbe_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.cond_transition[i]);
    }
  }

  // Member: behavior_class
  cdr >> ros_message.behavior_class;

  // Member: parameter_names
  {
    cdr >> ros_message.parameter_names;
  }

  // Member: parameter_values
  {
    cdr >> ros_message.parameter_values;
  }

  // Member: position
  {
    cdr >> ros_message.position;
  }

  // Member: outcomes
  {
    cdr >> ros_message.outcomes;
  }

  // Member: transitions
  {
    cdr >> ros_message.transitions;
  }

  // Member: autonomy
  {
    cdr >> ros_message.autonomy;
  }

  // Member: userdata_keys
  {
    cdr >> ros_message.userdata_keys;
  }

  // Member: userdata_remapping
  {
    cdr >> ros_message.userdata_remapping;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
get_serialized_size(
  const flexbe_msgs::msg::StateInstantiation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: state_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.state_path.size() + 1);
  // Member: state_class
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.state_class.size() + 1);
  // Member: initial_state_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.initial_state_name.size() + 1);
  // Member: input_keys
  {
    size_t array_size = ros_message.input_keys.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.input_keys[index].size() + 1);
    }
  }
  // Member: output_keys
  {
    size_t array_size = ros_message.output_keys.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.output_keys[index].size() + 1);
    }
  }
  // Member: cond_outcome
  {
    size_t array_size = ros_message.cond_outcome.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.cond_outcome[index].size() + 1);
    }
  }
  // Member: cond_transition
  {
    size_t array_size = ros_message.cond_transition.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flexbe_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.cond_transition[index], current_alignment);
    }
  }
  // Member: behavior_class
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.behavior_class.size() + 1);
  // Member: parameter_names
  {
    size_t array_size = ros_message.parameter_names.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.parameter_names[index].size() + 1);
    }
  }
  // Member: parameter_values
  {
    size_t array_size = ros_message.parameter_values.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.parameter_values[index].size() + 1);
    }
  }
  // Member: position
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: outcomes
  {
    size_t array_size = ros_message.outcomes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.outcomes[index].size() + 1);
    }
  }
  // Member: transitions
  {
    size_t array_size = ros_message.transitions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.transitions[index].size() + 1);
    }
  }
  // Member: autonomy
  {
    size_t array_size = ros_message.autonomy.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.autonomy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: userdata_keys
  {
    size_t array_size = ros_message.userdata_keys.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.userdata_keys[index].size() + 1);
    }
  }
  // Member: userdata_remapping
  {
    size_t array_size = ros_message.userdata_remapping.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.userdata_remapping[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
max_serialized_size_StateInstantiation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: state_path
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: state_class
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: initial_state_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: input_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: output_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: cond_outcome
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: cond_transition
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        flexbe_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_OutcomeCondition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: behavior_class
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: parameter_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: parameter_values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: position
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: outcomes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: transitions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: autonomy
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: userdata_keys
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: userdata_remapping
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flexbe_msgs::msg::StateInstantiation;
    is_plain =
      (
      offsetof(DataType, userdata_remapping) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _StateInstantiation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const flexbe_msgs::msg::StateInstantiation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StateInstantiation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<flexbe_msgs::msg::StateInstantiation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StateInstantiation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const flexbe_msgs::msg::StateInstantiation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StateInstantiation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_StateInstantiation(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _StateInstantiation__callbacks = {
  "flexbe_msgs::msg",
  "StateInstantiation",
  _StateInstantiation__cdr_serialize,
  _StateInstantiation__cdr_deserialize,
  _StateInstantiation__get_serialized_size,
  _StateInstantiation__max_serialized_size
};

static rosidl_message_type_support_t _StateInstantiation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StateInstantiation__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace flexbe_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_flexbe_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<flexbe_msgs::msg::StateInstantiation>()
{
  return &flexbe_msgs::msg::typesupport_fastrtps_cpp::_StateInstantiation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, flexbe_msgs, msg, StateInstantiation)() {
  return &flexbe_msgs::msg::typesupport_fastrtps_cpp::_StateInstantiation__handle;
}

#ifdef __cplusplus
}
#endif
