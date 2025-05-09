// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from flexbe_msgs:msg/OutcomeRequest.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__FUNCTIONS_H_
#define FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "flexbe_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "flexbe_msgs/msg/detail/outcome_request__struct.h"

/// Initialize msg/OutcomeRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * flexbe_msgs__msg__OutcomeRequest
 * )) before or use
 * flexbe_msgs__msg__OutcomeRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__OutcomeRequest__init(flexbe_msgs__msg__OutcomeRequest * msg);

/// Finalize msg/OutcomeRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__OutcomeRequest__fini(flexbe_msgs__msg__OutcomeRequest * msg);

/// Create msg/OutcomeRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * flexbe_msgs__msg__OutcomeRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
flexbe_msgs__msg__OutcomeRequest *
flexbe_msgs__msg__OutcomeRequest__create();

/// Destroy msg/OutcomeRequest message.
/**
 * It calls
 * flexbe_msgs__msg__OutcomeRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__OutcomeRequest__destroy(flexbe_msgs__msg__OutcomeRequest * msg);

/// Check for msg/OutcomeRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__OutcomeRequest__are_equal(const flexbe_msgs__msg__OutcomeRequest * lhs, const flexbe_msgs__msg__OutcomeRequest * rhs);

/// Copy a msg/OutcomeRequest message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__OutcomeRequest__copy(
  const flexbe_msgs__msg__OutcomeRequest * input,
  flexbe_msgs__msg__OutcomeRequest * output);

/// Initialize array of msg/OutcomeRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * flexbe_msgs__msg__OutcomeRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__OutcomeRequest__Sequence__init(flexbe_msgs__msg__OutcomeRequest__Sequence * array, size_t size);

/// Finalize array of msg/OutcomeRequest messages.
/**
 * It calls
 * flexbe_msgs__msg__OutcomeRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__OutcomeRequest__Sequence__fini(flexbe_msgs__msg__OutcomeRequest__Sequence * array);

/// Create array of msg/OutcomeRequest messages.
/**
 * It allocates the memory for the array and calls
 * flexbe_msgs__msg__OutcomeRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
flexbe_msgs__msg__OutcomeRequest__Sequence *
flexbe_msgs__msg__OutcomeRequest__Sequence__create(size_t size);

/// Destroy array of msg/OutcomeRequest messages.
/**
 * It calls
 * flexbe_msgs__msg__OutcomeRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__OutcomeRequest__Sequence__destroy(flexbe_msgs__msg__OutcomeRequest__Sequence * array);

/// Check for msg/OutcomeRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__OutcomeRequest__Sequence__are_equal(const flexbe_msgs__msg__OutcomeRequest__Sequence * lhs, const flexbe_msgs__msg__OutcomeRequest__Sequence * rhs);

/// Copy an array of msg/OutcomeRequest messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__OutcomeRequest__Sequence__copy(
  const flexbe_msgs__msg__OutcomeRequest__Sequence * input,
  flexbe_msgs__msg__OutcomeRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__OUTCOME_REQUEST__FUNCTIONS_H_
