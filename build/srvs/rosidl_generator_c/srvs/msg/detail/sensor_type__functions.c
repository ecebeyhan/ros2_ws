// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from srvs:msg/SensorType.idl
// generated code does not contain a copyright notice
#include "srvs/msg/detail/sensor_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
srvs__msg__SensorType__init(srvs__msg__SensorType * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_type
  return true;
}

void
srvs__msg__SensorType__fini(srvs__msg__SensorType * msg)
{
  if (!msg) {
    return;
  }
  // sensor_type
}

bool
srvs__msg__SensorType__are_equal(const srvs__msg__SensorType * lhs, const srvs__msg__SensorType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_type
  if (lhs->sensor_type != rhs->sensor_type) {
    return false;
  }
  return true;
}

bool
srvs__msg__SensorType__copy(
  const srvs__msg__SensorType * input,
  srvs__msg__SensorType * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_type
  output->sensor_type = input->sensor_type;
  return true;
}

srvs__msg__SensorType *
srvs__msg__SensorType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__msg__SensorType * msg = (srvs__msg__SensorType *)allocator.allocate(sizeof(srvs__msg__SensorType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srvs__msg__SensorType));
  bool success = srvs__msg__SensorType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
srvs__msg__SensorType__destroy(srvs__msg__SensorType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    srvs__msg__SensorType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
srvs__msg__SensorType__Sequence__init(srvs__msg__SensorType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__msg__SensorType * data = NULL;

  if (size) {
    data = (srvs__msg__SensorType *)allocator.zero_allocate(size, sizeof(srvs__msg__SensorType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srvs__msg__SensorType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srvs__msg__SensorType__fini(&data[i - 1]);
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
srvs__msg__SensorType__Sequence__fini(srvs__msg__SensorType__Sequence * array)
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
      srvs__msg__SensorType__fini(&array->data[i]);
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

srvs__msg__SensorType__Sequence *
srvs__msg__SensorType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__msg__SensorType__Sequence * array = (srvs__msg__SensorType__Sequence *)allocator.allocate(sizeof(srvs__msg__SensorType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = srvs__msg__SensorType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
srvs__msg__SensorType__Sequence__destroy(srvs__msg__SensorType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    srvs__msg__SensorType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
srvs__msg__SensorType__Sequence__are_equal(const srvs__msg__SensorType__Sequence * lhs, const srvs__msg__SensorType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!srvs__msg__SensorType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
srvs__msg__SensorType__Sequence__copy(
  const srvs__msg__SensorType__Sequence * input,
  srvs__msg__SensorType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(srvs__msg__SensorType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    srvs__msg__SensorType * data =
      (srvs__msg__SensorType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!srvs__msg__SensorType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          srvs__msg__SensorType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!srvs__msg__SensorType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
