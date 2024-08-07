// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srvs:srv/GetSensorStatusList.idl
// generated code does not contain a copyright notice

#ifndef SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__STRUCT_H_
#define SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetSensorStatusList in the package srvs.
typedef struct srvs__srv__GetSensorStatusList_Request
{
  uint8_t structure_needs_at_least_one_member;
} srvs__srv__GetSensorStatusList_Request;

// Struct for a sequence of srvs__srv__GetSensorStatusList_Request.
typedef struct srvs__srv__GetSensorStatusList_Request__Sequence
{
  srvs__srv__GetSensorStatusList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srvs__srv__GetSensorStatusList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_list'
#include "srvs/msg/detail/sensor_status__struct.h"

/// Struct defined in srv/GetSensorStatusList in the package srvs.
typedef struct srvs__srv__GetSensorStatusList_Response
{
  /// Response
  srvs__msg__SensorStatus__Sequence status_list;
} srvs__srv__GetSensorStatusList_Response;

// Struct for a sequence of srvs__srv__GetSensorStatusList_Response.
typedef struct srvs__srv__GetSensorStatusList_Response__Sequence
{
  srvs__srv__GetSensorStatusList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srvs__srv__GetSensorStatusList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRVS__SRV__DETAIL__GET_SENSOR_STATUS_LIST__STRUCT_H_
