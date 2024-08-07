// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srvs:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#ifndef SRVS__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_
#define SRVS__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensorname'
#include "rosidl_runtime_c/string.h"
// Member 'sensortype'
#include "srvs/msg/detail/sensor_type__struct.h"

/// Struct defined in msg/SensorStatus in the package srvs.
typedef struct srvs__msg__SensorStatus
{
  uint32_t sensorid;
  uint32_t unitid;
  rosidl_runtime_c__String sensorname;
  bool alive;
  bool recording;
  bool streaming;
  srvs__msg__SensorType sensortype;
} srvs__msg__SensorStatus;

// Struct for a sequence of srvs__msg__SensorStatus.
typedef struct srvs__msg__SensorStatus__Sequence
{
  srvs__msg__SensorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srvs__msg__SensorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRVS__MSG__DETAIL__SENSOR_STATUS__STRUCT_H_
