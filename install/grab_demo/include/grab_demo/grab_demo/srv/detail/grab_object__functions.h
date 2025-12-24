// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from grab_demo:srv/GrabObject.idl
// generated code does not contain a copyright notice

#ifndef GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__FUNCTIONS_H_
#define GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "grab_demo/msg/rosidl_generator_c__visibility_control.h"

#include "grab_demo/srv/detail/grab_object__struct.h"

/// Initialize srv/GrabObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * grab_demo__srv__GrabObject_Request
 * )) before or use
 * grab_demo__srv__GrabObject_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Request__init(grab_demo__srv__GrabObject_Request * msg);

/// Finalize srv/GrabObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
void
grab_demo__srv__GrabObject_Request__fini(grab_demo__srv__GrabObject_Request * msg);

/// Create srv/GrabObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * grab_demo__srv__GrabObject_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
grab_demo__srv__GrabObject_Request *
grab_demo__srv__GrabObject_Request__create();

/// Destroy srv/GrabObject message.
/**
 * It calls
 * grab_demo__srv__GrabObject_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
void
grab_demo__srv__GrabObject_Request__destroy(grab_demo__srv__GrabObject_Request * msg);

/// Check for srv/GrabObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Request__are_equal(const grab_demo__srv__GrabObject_Request * lhs, const grab_demo__srv__GrabObject_Request * rhs);

/// Copy a srv/GrabObject message.
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
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Request__copy(
  const grab_demo__srv__GrabObject_Request * input,
  grab_demo__srv__GrabObject_Request * output);

/// Initialize array of srv/GrabObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * grab_demo__srv__GrabObject_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Request__Sequence__init(grab_demo__srv__GrabObject_Request__Sequence * array, size_t size);

/// Finalize array of srv/GrabObject messages.
/**
 * It calls
 * grab_demo__srv__GrabObject_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
void
grab_demo__srv__GrabObject_Request__Sequence__fini(grab_demo__srv__GrabObject_Request__Sequence * array);

/// Create array of srv/GrabObject messages.
/**
 * It allocates the memory for the array and calls
 * grab_demo__srv__GrabObject_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
grab_demo__srv__GrabObject_Request__Sequence *
grab_demo__srv__GrabObject_Request__Sequence__create(size_t size);

/// Destroy array of srv/GrabObject messages.
/**
 * It calls
 * grab_demo__srv__GrabObject_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
void
grab_demo__srv__GrabObject_Request__Sequence__destroy(grab_demo__srv__GrabObject_Request__Sequence * array);

/// Check for srv/GrabObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Request__Sequence__are_equal(const grab_demo__srv__GrabObject_Request__Sequence * lhs, const grab_demo__srv__GrabObject_Request__Sequence * rhs);

/// Copy an array of srv/GrabObject messages.
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
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Request__Sequence__copy(
  const grab_demo__srv__GrabObject_Request__Sequence * input,
  grab_demo__srv__GrabObject_Request__Sequence * output);

/// Initialize srv/GrabObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * grab_demo__srv__GrabObject_Response
 * )) before or use
 * grab_demo__srv__GrabObject_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Response__init(grab_demo__srv__GrabObject_Response * msg);

/// Finalize srv/GrabObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
void
grab_demo__srv__GrabObject_Response__fini(grab_demo__srv__GrabObject_Response * msg);

/// Create srv/GrabObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * grab_demo__srv__GrabObject_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
grab_demo__srv__GrabObject_Response *
grab_demo__srv__GrabObject_Response__create();

/// Destroy srv/GrabObject message.
/**
 * It calls
 * grab_demo__srv__GrabObject_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
void
grab_demo__srv__GrabObject_Response__destroy(grab_demo__srv__GrabObject_Response * msg);

/// Check for srv/GrabObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Response__are_equal(const grab_demo__srv__GrabObject_Response * lhs, const grab_demo__srv__GrabObject_Response * rhs);

/// Copy a srv/GrabObject message.
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
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Response__copy(
  const grab_demo__srv__GrabObject_Response * input,
  grab_demo__srv__GrabObject_Response * output);

/// Initialize array of srv/GrabObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * grab_demo__srv__GrabObject_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Response__Sequence__init(grab_demo__srv__GrabObject_Response__Sequence * array, size_t size);

/// Finalize array of srv/GrabObject messages.
/**
 * It calls
 * grab_demo__srv__GrabObject_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
void
grab_demo__srv__GrabObject_Response__Sequence__fini(grab_demo__srv__GrabObject_Response__Sequence * array);

/// Create array of srv/GrabObject messages.
/**
 * It allocates the memory for the array and calls
 * grab_demo__srv__GrabObject_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
grab_demo__srv__GrabObject_Response__Sequence *
grab_demo__srv__GrabObject_Response__Sequence__create(size_t size);

/// Destroy array of srv/GrabObject messages.
/**
 * It calls
 * grab_demo__srv__GrabObject_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
void
grab_demo__srv__GrabObject_Response__Sequence__destroy(grab_demo__srv__GrabObject_Response__Sequence * array);

/// Check for srv/GrabObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Response__Sequence__are_equal(const grab_demo__srv__GrabObject_Response__Sequence * lhs, const grab_demo__srv__GrabObject_Response__Sequence * rhs);

/// Copy an array of srv/GrabObject messages.
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
ROSIDL_GENERATOR_C_PUBLIC_grab_demo
bool
grab_demo__srv__GrabObject_Response__Sequence__copy(
  const grab_demo__srv__GrabObject_Response__Sequence * input,
  grab_demo__srv__GrabObject_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GRAB_DEMO__SRV__DETAIL__GRAB_OBJECT__FUNCTIONS_H_
