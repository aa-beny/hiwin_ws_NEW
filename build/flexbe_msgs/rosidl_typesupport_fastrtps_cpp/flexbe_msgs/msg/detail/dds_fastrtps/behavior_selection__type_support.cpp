// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from flexbe_msgs:msg/BehaviorSelection.idl
// generated code does not contain a copyright notice
#include "flexbe_msgs/msg/detail/behavior_selection__rosidl_typesupport_fastrtps_cpp.hpp"
#include "flexbe_msgs/msg/detail/behavior_selection__struct.hpp"

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
  const flexbe_msgs::msg::BehaviorModification &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flexbe_msgs::msg::BehaviorModification &);
size_t get_serialized_size(
  const flexbe_msgs::msg::BehaviorModification &,
  size_t current_alignment);
size_t
max_serialized_size_BehaviorModification(
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
  const flexbe_msgs::msg::BehaviorSelection & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: behavior_id
  cdr << ros_message.behavior_id;
  // Member: behavior_checksum
  cdr << ros_message.behavior_checksum;
  // Member: autonomy_level
  cdr << ros_message.autonomy_level;
  // Member: arg_keys
  {
    cdr << ros_message.arg_keys;
  }
  // Member: arg_values
  {
    cdr << ros_message.arg_values;
  }
  // Member: input_keys
  {
    cdr << ros_message.input_keys;
  }
  // Member: input_values
  {
    cdr << ros_message.input_values;
  }
  // Member: modifications
  {
    size_t size = ros_message.modifications.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      flexbe_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.modifications[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  flexbe_msgs::msg::BehaviorSelection & ros_message)
{
  // Member: behavior_id
  cdr >> ros_message.behavior_id;

  // Member: behavior_checksum
  cdr >> ros_message.behavior_checksum;

  // Member: autonomy_level
  cdr >> ros_message.autonomy_level;

  // Member: arg_keys
  {
    cdr >> ros_message.arg_keys;
  }

  // Member: arg_values
  {
    cdr >> ros_message.arg_values;
  }

  // Member: input_keys
  {
    cdr >> ros_message.input_keys;
  }

  // Member: input_values
  {
    cdr >> ros_message.input_values;
  }

  // Member: modifications
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.modifications.resize(size);
    for (size_t i = 0; i < size; i++) {
      flexbe_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.modifications[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
get_serialized_size(
  const flexbe_msgs::msg::BehaviorSelection & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: behavior_id
  {
    size_t item_size = sizeof(ros_message.behavior_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: behavior_checksum
  {
    size_t item_size = sizeof(ros_message.behavior_checksum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: autonomy_level
  {
    size_t item_size = sizeof(ros_message.autonomy_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arg_keys
  {
    size_t array_size = ros_message.arg_keys.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.arg_keys[index].size() + 1);
    }
  }
  // Member: arg_values
  {
    size_t array_size = ros_message.arg_values.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.arg_values[index].size() + 1);
    }
  }
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
  // Member: input_values
  {
    size_t array_size = ros_message.input_values.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.input_values[index].size() + 1);
    }
  }
  // Member: modifications
  {
    size_t array_size = ros_message.modifications.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flexbe_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.modifications[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexbe_msgs
max_serialized_size_BehaviorSelection(
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


  // Member: behavior_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: behavior_checksum
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: autonomy_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arg_keys
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

  // Member: arg_values
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

  // Member: input_values
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

  // Member: modifications
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
        flexbe_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BehaviorModification(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flexbe_msgs::msg::BehaviorSelection;
    is_plain =
      (
      offsetof(DataType, modifications) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BehaviorSelection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const flexbe_msgs::msg::BehaviorSelection *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BehaviorSelection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<flexbe_msgs::msg::BehaviorSelection *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BehaviorSelection__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const flexbe_msgs::msg::BehaviorSelection *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BehaviorSelection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BehaviorSelection(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BehaviorSelection__callbacks = {
  "flexbe_msgs::msg",
  "BehaviorSelection",
  _BehaviorSelection__cdr_serialize,
  _BehaviorSelection__cdr_deserialize,
  _BehaviorSelection__get_serialized_size,
  _BehaviorSelection__max_serialized_size
};

static rosidl_message_type_support_t _BehaviorSelection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BehaviorSelection__callbacks,
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
get_message_type_support_handle<flexbe_msgs::msg::BehaviorSelection>()
{
  return &flexbe_msgs::msg::typesupport_fastrtps_cpp::_BehaviorSelection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, flexbe_msgs, msg, BehaviorSelection)() {
  return &flexbe_msgs::msg::typesupport_fastrtps_cpp::_BehaviorSelection__handle;
}

#ifdef __cplusplus
}
#endif
