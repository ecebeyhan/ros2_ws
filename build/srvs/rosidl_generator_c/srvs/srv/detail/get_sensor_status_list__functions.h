// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from srvs:srv/GetSensorStatusList.idl
// generated code does not contain a copyright notice

#ifndef SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__FUNCTIONS_H_
#define SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "srvs/msg/rosidl_generator_c__visibility_control.h"

#include "srvs/srv/detail/get_sensor_status_list__struct.h"

/// Initialize srv/GetSensorStatusList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srvs__srv__GetSensorStatusList_Request
 * )) before or use
 * srvs__srv__GetSensorStatusList_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__srv__GetSensorStatusList_Request__init(srvs__srv__GetSensorStatusList_Request * msg);

/// Finalize srv/GetSensorStatusList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__srv__GetSensorStatusList_Request__fini(srvs__srv__GetSensorStatusList_Request * msg);

/// Create srv/GetSensorStatusList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srvs__srv__GetSensorStatusList_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
srvs__srv__GetSensorStatusList_Request *
srvs__srv__GetSensorStatusList_Request__create();

/// Destroy srv/GetSensorStatusList message.
/**
 * It calls
 * srvs__srv__GetSensorStatusList_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__srv__GetSensorStatusList_Request__destroy(srvs__srv__GetSensorStatusList_Request * msg);

/// Check for srv/GetSensorStatusList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__srv__GetSensorStatusList_Request__are_equal(const srvs__srv__GetSensorStatusList_Request * lhs, const srvs__srv__GetSensorStatusList_Request * rhs);

/// Copy a srv/GetSensorStatusList message.
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
srvs__srv__GetSensorStatusList_Request__copy(
  const srvs__srv__GetSensorStatusList_Request * input,
  srvs__srv__GetSensorStatusList_Request * output);

/// Initialize array of srv/GetSensorStatusList messages.
/**
 * It allocates the memory for the number of elements and calls
 * srvs__srv__GetSensorStatusList_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__srv__GetSensorStatusList_Request__Sequence__init(srvs__srv__GetSensorStatusList_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetSensorStatusList messages.
/**
 * It calls
 * srvs__srv__GetSensorStatusList_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__srv__GetSensorStatusList_Request__Sequence__fini(srvs__srv__GetSensorStatusList_Request__Sequence * array);

/// Create array of srv/GetSensorStatusList messages.
/**
 * It allocates the memory for the array and calls
 * srvs__srv__GetSensorStatusList_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
srvs__srv__GetSensorStatusList_Request__Sequence *
srvs__srv__GetSensorStatusList_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetSensorStatusList messages.
/**
 * It calls
 * srvs__srv__GetSensorStatusList_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__srv__GetSensorStatusList_Request__Sequence__destroy(srvs__srv__GetSensorStatusList_Request__Sequence * array);

/// Check for srv/GetSensorStatusList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__srv__GetSensorStatusList_Request__Sequence__are_equal(const srvs__srv__GetSensorStatusList_Request__Sequence * lhs, const srvs__srv__GetSensorStatusList_Request__Sequence * rhs);

/// Copy an array of srv/GetSensorStatusList messages.
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
srvs__srv__GetSensorStatusList_Request__Sequence__copy(
  const srvs__srv__GetSensorStatusList_Request__Sequence * input,
  srvs__srv__GetSensorStatusList_Request__Sequence * output);

/// Initialize srv/GetSensorStatusList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * srvs__srv__GetSensorStatusList_Response
 * )) before or use
 * srvs__srv__GetSensorStatusList_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__srv__GetSensorStatusList_Response__init(srvs__srv__GetSensorStatusList_Response * msg);

/// Finalize srv/GetSensorStatusList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__srv__GetSensorStatusList_Response__fini(srvs__srv__GetSensorStatusList_Response * msg);

/// Create srv/GetSensorStatusList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * srvs__srv__GetSensorStatusList_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
srvs__srv__GetSensorStatusList_Response *
srvs__srv__GetSensorStatusList_Response__create();

/// Destroy srv/GetSensorStatusList message.
/**
 * It calls
 * srvs__srv__GetSensorStatusList_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__srv__GetSensorStatusList_Response__destroy(srvs__srv__GetSensorStatusList_Response * msg);

/// Check for srv/GetSensorStatusList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__srv__GetSensorStatusList_Response__are_equal(const srvs__srv__GetSensorStatusList_Response * lhs, const srvs__srv__GetSensorStatusList_Response * rhs);

/// Copy a srv/GetSensorStatusList message.
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
srvs__srv__GetSensorStatusList_Response__copy(
  const srvs__srv__GetSensorStatusList_Response * input,
  srvs__srv__GetSensorStatusList_Response * output);

/// Initialize array of srv/GetSensorStatusList messages.
/**
 * It allocates the memory for the number of elements and calls
 * srvs__srv__GetSensorStatusList_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__srv__GetSensorStatusList_Response__Sequence__init(srvs__srv__GetSensorStatusList_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetSensorStatusList messages.
/**
 * It calls
 * srvs__srv__GetSensorStatusList_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__srv__GetSensorStatusList_Response__Sequence__fini(srvs__srv__GetSensorStatusList_Response__Sequence * array);

/// Create array of srv/GetSensorStatusList messages.
/**
 * It allocates the memory for the array and calls
 * srvs__srv__GetSensorStatusList_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
srvs__srv__GetSensorStatusList_Response__Sequence *
srvs__srv__GetSensorStatusList_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetSensorStatusList messages.
/**
 * It calls
 * srvs__srv__GetSensorStatusList_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
void
srvs__srv__GetSensorStatusList_Response__Sequence__destroy(srvs__srv__GetSensorStatusList_Response__Sequence * array);

/// Check for srv/GetSensorStatusList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_srvs
bool
srvs__srv__GetSensorStatusList_Response__Sequence__are_equal(const srvs__srv__GetSensorStatusList_Response__Sequence * lhs, const srvs__srv__GetSensorStatusList_Response__Sequence * rhs);

/// Copy an array of srv/GetSensorStatusList messages.
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
srvs__srv__GetSensorStatusList_Response__Sequence__copy(
  const srvs__srv__GetSensorStatusList_Response__Sequence * input,
  srvs__srv__GetSensorStatusList_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__FUNCTIONS_H_
