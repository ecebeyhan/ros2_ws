// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from srvs:msg/SensorStatus.idl
// generated code does not contain a copyright notice
#include "srvs/msg/detail/sensor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sensorname`
#include "rosidl_runtime_c/string_functions.h"
// Member `sensortype`
#include "srvs/msg/detail/sensor_type__functions.h"

bool
srvs__msg__SensorStatus__init(srvs__msg__SensorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // sensorid
  // unitid
  // sensorname
  if (!rosidl_runtime_c__String__init(&msg->sensorname)) {
    srvs__msg__SensorStatus__fini(msg);
    return false;
  }
  // alive
  // recording
  // streaming
  // sensortype
  if (!srvs__msg__SensorType__init(&msg->sensortype)) {
    srvs__msg__SensorStatus__fini(msg);
    return false;
  }
  return true;
}

void
srvs__msg__SensorStatus__fini(srvs__msg__SensorStatus * msg)
{
  if (!msg) {
    return;
  }
  // sensorid
  // unitid
  // sensorname
  rosidl_runtime_c__String__fini(&msg->sensorname);
  // alive
  // recording
  // streaming
  // sensortype
  srvs__msg__SensorType__fini(&msg->sensortype);
}

bool
srvs__msg__SensorStatus__are_equal(const srvs__msg__SensorStatus * lhs, const srvs__msg__SensorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensorid
  if (lhs->sensorid != rhs->sensorid) {
    return false;
  }
  // unitid
  if (lhs->unitid != rhs->unitid) {
    return false;
  }
  // sensorname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensorname), &(rhs->sensorname)))
  {
    return false;
  }
  // alive
  if (lhs->alive != rhs->alive) {
    return false;
  }
  // recording
  if (lhs->recording != rhs->recording) {
    return false;
  }
  // streaming
  if (lhs->streaming != rhs->streaming) {
    return false;
  }
  // sensortype
  if (!srvs__msg__SensorType__are_equal(
      &(lhs->sensortype), &(rhs->sensortype)))
  {
    return false;
  }
  return true;
}

bool
srvs__msg__SensorStatus__copy(
  const srvs__msg__SensorStatus * input,
  srvs__msg__SensorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // sensorid
  output->sensorid = input->sensorid;
  // unitid
  output->unitid = input->unitid;
  // sensorname
  if (!rosidl_runtime_c__String__copy(
      &(input->sensorname), &(output->sensorname)))
  {
    return false;
  }
  // alive
  output->alive = input->alive;
  // recording
  output->recording = input->recording;
  // streaming
  output->streaming = input->streaming;
  // sensortype
  if (!srvs__msg__SensorType__copy(
      &(input->sensortype), &(output->sensortype)))
  {
    return false;
  }
  return true;
}

srvs__msg__SensorStatus *
srvs__msg__SensorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__msg__SensorStatus * msg = (srvs__msg__SensorStatus *)allocator.allocate(sizeof(srvs__msg__SensorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srvs__msg__SensorStatus));
  bool success = srvs__msg__SensorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
srvs__msg__SensorStatus__destroy(srvs__msg__SensorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    srvs__msg__SensorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
srvs__msg__SensorStatus__Sequence__init(srvs__msg__SensorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__msg__SensorStatus * data = NULL;

  if (size) {
    data = (srvs__msg__SensorStatus *)allocator.zero_allocate(size, sizeof(srvs__msg__SensorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srvs__msg__SensorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srvs__msg__SensorStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
srvs__msg__SensorStatus__Sequence__fini(srvs__msg__SensorStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      srvs__msg__SensorStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

srvs__msg__SensorStatus__Sequence *
srvs__msg__SensorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__msg__SensorStatus__Sequence * array = (srvs__msg__SensorStatus__Sequence *)allocator.allocate(sizeof(srvs__msg__SensorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = srvs__msg__SensorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
srvs__msg__SensorStatus__Sequence__destroy(srvs__msg__SensorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    srvs__msg__SensorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
srvs__msg__SensorStatus__Sequence__are_equal(const srvs__msg__SensorStatus__Sequence * lhs, const srvs__msg__SensorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!srvs__msg__SensorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
srvs__msg__SensorStatus__Sequence__copy(
  const srvs__msg__SensorStatus__Sequence * input,
  srvs__msg__SensorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(srvs__msg__SensorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    srvs__msg__SensorStatus * data =
      (srvs__msg__SensorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!srvs__msg__SensorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          srvs__msg__SensorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!srvs__msg__SensorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
