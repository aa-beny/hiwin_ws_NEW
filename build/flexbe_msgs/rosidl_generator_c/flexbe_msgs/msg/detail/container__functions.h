// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from flexbe_msgs:msg/Container.idl
// generated code does not contain a copyright notice

#ifndef FLEXBE_MSGS__MSG__DETAIL__CONTAINER__FUNCTIONS_H_
#define FLEXBE_MSGS__MSG__DETAIL__CONTAINER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "flexbe_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "flexbe_msgs/msg/detail/container__struct.h"

/// Initialize msg/Container message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * flexbe_msgs__msg__Container
 * )) before or use
 * flexbe_msgs__msg__Container__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__Container__init(flexbe_msgs__msg__Container * msg);

/// Finalize msg/Container message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__Container__fini(flexbe_msgs__msg__Container * msg);

/// Create msg/Container message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * flexbe_msgs__msg__Container__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
flexbe_msgs__msg__Container *
flexbe_msgs__msg__Container__create();

/// Destroy msg/Container message.
/**
 * It calls
 * flexbe_msgs__msg__Container__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__Container__destroy(flexbe_msgs__msg__Container * msg);

/// Check for msg/Container message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__Container__are_equal(const flexbe_msgs__msg__Container * lhs, const flexbe_msgs__msg__Container * rhs);

/// Copy a msg/Container message.
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
flexbe_msgs__msg__Container__copy(
  const flexbe_msgs__msg__Container * input,
  flexbe_msgs__msg__Container * output);

/// Initialize array of msg/Container messages.
/**
 * It allocates the memory for the number of elements and calls
 * flexbe_msgs__msg__Container__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__Container__Sequence__init(flexbe_msgs__msg__Container__Sequence * array, size_t size);

/// Finalize array of msg/Container messages.
/**
 * It calls
 * flexbe_msgs__msg__Container__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__Container__Sequence__fini(flexbe_msgs__msg__Container__Sequence * array);

/// Create array of msg/Container messages.
/**
 * It allocates the memory for the array and calls
 * flexbe_msgs__msg__Container__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
flexbe_msgs__msg__Container__Sequence *
flexbe_msgs__msg__Container__Sequence__create(size_t size);

/// Destroy array of msg/Container messages.
/**
 * It calls
 * flexbe_msgs__msg__Container__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
void
flexbe_msgs__msg__Container__Sequence__destroy(flexbe_msgs__msg__Container__Sequence * array);

/// Check for msg/Container message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flexbe_msgs
bool
flexbe_msgs__msg__Container__Sequence__are_equal(const flexbe_msgs__msg__Container__Sequence * lhs, const flexbe_msgs__msg__Container__Sequence * rhs);

/// Copy an array of msg/Container messages.
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
flexbe_msgs__msg__Container__Sequence__copy(
  const flexbe_msgs__msg__Container__Sequence * input,
  flexbe_msgs__msg__Container__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FLEXBE_MSGS__MSG__DETAIL__CONTAINER__FUNCTIONS_H_
