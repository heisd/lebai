// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lebai_interfaces:msg/IOConditionalExpress.idl
// generated code does not contain a copyright notice

#ifndef LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__FUNCTIONS_H_
#define LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lebai_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "lebai_interfaces/msg/detail/io_conditional_express__struct.h"

/// Initialize msg/IOConditionalExpress message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lebai_interfaces__msg__IOConditionalExpress
 * )) before or use
 * lebai_interfaces__msg__IOConditionalExpress__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
bool
lebai_interfaces__msg__IOConditionalExpress__init(lebai_interfaces__msg__IOConditionalExpress * msg);

/// Finalize msg/IOConditionalExpress message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
void
lebai_interfaces__msg__IOConditionalExpress__fini(lebai_interfaces__msg__IOConditionalExpress * msg);

/// Create msg/IOConditionalExpress message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lebai_interfaces__msg__IOConditionalExpress__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
lebai_interfaces__msg__IOConditionalExpress *
lebai_interfaces__msg__IOConditionalExpress__create();

/// Destroy msg/IOConditionalExpress message.
/**
 * It calls
 * lebai_interfaces__msg__IOConditionalExpress__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
void
lebai_interfaces__msg__IOConditionalExpress__destroy(lebai_interfaces__msg__IOConditionalExpress * msg);

/// Check for msg/IOConditionalExpress message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
bool
lebai_interfaces__msg__IOConditionalExpress__are_equal(const lebai_interfaces__msg__IOConditionalExpress * lhs, const lebai_interfaces__msg__IOConditionalExpress * rhs);

/// Copy a msg/IOConditionalExpress message.
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
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
bool
lebai_interfaces__msg__IOConditionalExpress__copy(
  const lebai_interfaces__msg__IOConditionalExpress * input,
  lebai_interfaces__msg__IOConditionalExpress * output);

/// Initialize array of msg/IOConditionalExpress messages.
/**
 * It allocates the memory for the number of elements and calls
 * lebai_interfaces__msg__IOConditionalExpress__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
bool
lebai_interfaces__msg__IOConditionalExpress__Sequence__init(lebai_interfaces__msg__IOConditionalExpress__Sequence * array, size_t size);

/// Finalize array of msg/IOConditionalExpress messages.
/**
 * It calls
 * lebai_interfaces__msg__IOConditionalExpress__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
void
lebai_interfaces__msg__IOConditionalExpress__Sequence__fini(lebai_interfaces__msg__IOConditionalExpress__Sequence * array);

/// Create array of msg/IOConditionalExpress messages.
/**
 * It allocates the memory for the array and calls
 * lebai_interfaces__msg__IOConditionalExpress__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
lebai_interfaces__msg__IOConditionalExpress__Sequence *
lebai_interfaces__msg__IOConditionalExpress__Sequence__create(size_t size);

/// Destroy array of msg/IOConditionalExpress messages.
/**
 * It calls
 * lebai_interfaces__msg__IOConditionalExpress__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
void
lebai_interfaces__msg__IOConditionalExpress__Sequence__destroy(lebai_interfaces__msg__IOConditionalExpress__Sequence * array);

/// Check for msg/IOConditionalExpress message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
bool
lebai_interfaces__msg__IOConditionalExpress__Sequence__are_equal(const lebai_interfaces__msg__IOConditionalExpress__Sequence * lhs, const lebai_interfaces__msg__IOConditionalExpress__Sequence * rhs);

/// Copy an array of msg/IOConditionalExpress messages.
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
ROSIDL_GENERATOR_C_PUBLIC_lebai_interfaces
bool
lebai_interfaces__msg__IOConditionalExpress__Sequence__copy(
  const lebai_interfaces__msg__IOConditionalExpress__Sequence * input,
  lebai_interfaces__msg__IOConditionalExpress__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LEBAI_INTERFACES__MSG__DETAIL__IO_CONDITIONAL_EXPRESS__FUNCTIONS_H_
