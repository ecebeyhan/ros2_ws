// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from srvs:msg/SensorType.idl
// generated code does not contain a copyright notice

#ifndef SRVS__MSG__DETAIL__SENSOR_TYPE__STRUCT_H_
#define SRVS__MSG__DETAIL__SENSOR_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNDEFINED'.
enum
{
  srvs__msg__SensorType__UNDEFINED = 0
};

/// Constant 'CAMERA'.
enum
{
  srvs__msg__SensorType__CAMERA = 1
};

/// Constant 'MIC'.
enum
{
  srvs__msg__SensorType__MIC = 2
};

/// Struct defined in msg/SensorType in the package srvs.
typedef struct srvs__msg__SensorType
{
  uint8_t sensor_type;
} srvs__msg__SensorType;

// Struct for a sequence of srvs__msg__SensorType.
typedef struct srvs__msg__SensorType__Sequence
{
  srvs__msg__SensorType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} srvs__msg__SensorType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SRVS__MSG__DETAIL__SENSOR_TYPE__STRUCT_H_
