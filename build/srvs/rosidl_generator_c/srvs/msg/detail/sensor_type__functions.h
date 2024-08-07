// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from srvs:msg/SensorType.idl
// generated code does not contain a copyright notice

#ifndef SRVS__MSG__DETAIL__SENSOR_TYPE__FUNCTIONS_H_
#define SRVS__MSG__DETAIL__SENSOR_TYPE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "srvs/msg/rosidl_generator_c__visibility_control.h"

#include "srvs/msg/detail/sensor_type__struct.h"

/// Initialize msg/SensorType message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srvs__msg__SensorType
 * )) before or use
 * srvs__msg__SensorType__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__msg__SensorType__init(srvs__msg__SensorType * msg);

/// Finalize msg/SensorType message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__msg__SensorType__fini(srvs__msg__SensorType * msg);

/// Create msg/SensorType message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srvs__msg__SensorType__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
srvs__msg__SensorType *
srvs__msg__SensorType__create();

/// Destroy msg/SensorType message.
/**
 * It calls
 * srvs__msg__SensorType__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__msg__SensorType__destroy(srvs__msg__SensorType * msg);

/// Check for msg/SensorType message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__msg__SensorType__are_equal(const srvs__msg__SensorType * lhs, const srvs__msg__SensorType * rhs);

/// Copy a msg/SensorType message.
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
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__msg__SensorType__copy(
  const srvs__msg__SensorType * input,
  srvs__msg__SensorType * output);

/// Initialize array of msg/SensorType messages.
/**
 * It allocates the memory for the number of elements and calls
 * srvs__msg__SensorType__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__msg__SensorType__Sequence__init(srvs__msg__SensorType__Sequence * array, size_t size);

/// Finalize array of msg/SensorType messages.
/**
 * It calls
 * srvs__msg__SensorType__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__msg__SensorType__Sequence__fini(srvs__msg__SensorType__Sequence * array);

/// Create array of msg/SensorType messages.
/**
 * It allocates the memory for the array and calls
 * srvs__msg__SensorType__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
srvs__msg__SensorType__Sequence *
srvs__msg__SensorType__Sequence__create(size_t size);

/// Destroy array of msg/SensorType messages.
/**
 * It calls
 * srvs__msg__SensorType__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__msg__SensorType__Sequence__destroy(srvs__msg__SensorType__Sequence * array);

/// Check for msg/SensorType message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__msg__SensorType__Sequence__are_equal(const srvs__msg__SensorType__Sequence * lhs, const srvs__msg__SensorType__Sequence * rhs);

/// Copy an array of msg/SensorType messages.
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
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__msg__SensorType__Sequence__copy(
  const srvs__msg__SensorType__Sequence * input,
  srvs__msg__SensorType__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SRVS__MSG__DETAIL__SENSOR_TYPE__FUNCTIONS_H_
