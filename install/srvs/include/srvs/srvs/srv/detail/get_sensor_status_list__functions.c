// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from srvs:srv/GetSensorStatusList.idl
// generated code does not contain a copyright notice
#include "srvs/srv/detail/get_sensor_status_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
srvs__srv__GetSensorStatusList_Request__init(srvs__srv__GetSensorStatusList_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
srvs__srv__GetSensorStatusList_Request__fini(srvs__srv__GetSensorStatusList_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
srvs__srv__GetSensorStatusList_Request__are_equal(const srvs__srv__GetSensorStatusList_Request * lhs, const srvs__srv__GetSensorStatusList_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
srvs__srv__GetSensorStatusList_Request__copy(
  const srvs__srv__GetSensorStatusList_Request * input,
  srvs__srv__GetSensorStatusList_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

srvs__srv__GetSensorStatusList_Request *
srvs__srv__GetSensorStatusList_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__srv__GetSensorStatusList_Request * msg = (srvs__srv__GetSensorStatusList_Request *)allocator.allocate(sizeof(srvs__srv__GetSensorStatusList_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srvs__srv__GetSensorStatusList_Request));
  bool success = srvs__srv__GetSensorStatusList_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
srvs__srv__GetSensorStatusList_Request__destroy(srvs__srv__GetSensorStatusList_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    srvs__srv__GetSensorStatusList_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
srvs__srv__GetSensorStatusList_Request__Sequence__init(srvs__srv__GetSensorStatusList_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__srv__GetSensorStatusList_Request * data = NULL;

  if (size) {
    data = (srvs__srv__GetSensorStatusList_Request *)allocator.zero_allocate(size, sizeof(srvs__srv__GetSensorStatusList_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srvs__srv__GetSensorStatusList_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srvs__srv__GetSensorStatusList_Request__fini(&data[i - 1]);
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
srvs__srv__GetSensorStatusList_Request__Sequence__fini(srvs__srv__GetSensorStatusList_Request__Sequence * array)
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
      srvs__srv__GetSensorStatusList_Request__fini(&array->data[i]);
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

srvs__srv__GetSensorStatusList_Request__Sequence *
srvs__srv__GetSensorStatusList_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__srv__GetSensorStatusList_Request__Sequence * array = (srvs__srv__GetSensorStatusList_Request__Sequence *)allocator.allocate(sizeof(srvs__srv__GetSensorStatusList_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = srvs__srv__GetSensorStatusList_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
srvs__srv__GetSensorStatusList_Request__Sequence__destroy(srvs__srv__GetSensorStatusList_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    srvs__srv__GetSensorStatusList_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
srvs__srv__GetSensorStatusList_Request__Sequence__are_equal(const srvs__srv__GetSensorStatusList_Request__Sequence * lhs, const srvs__srv__GetSensorStatusList_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!srvs__srv__GetSensorStatusList_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
srvs__srv__GetSensorStatusList_Request__Sequence__copy(
  const srvs__srv__GetSensorStatusList_Request__Sequence * input,
  srvs__srv__GetSensorStatusList_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(srvs__srv__GetSensorStatusList_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    srvs__srv__GetSensorStatusList_Request * data =
      (srvs__srv__GetSensorStatusList_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!srvs__srv__GetSensorStatusList_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          srvs__srv__GetSensorStatusList_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!srvs__srv__GetSensorStatusList_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status_list`
#include "srvs/msg/detail/sensor_status__functions.h"

bool
srvs__srv__GetSensorStatusList_Response__init(srvs__srv__GetSensorStatusList_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status_list
  if (!srvs__msg__SensorStatus__Sequence__init(&msg->status_list, 0)) {
    srvs__srv__GetSensorStatusList_Response__fini(msg);
    return false;
  }
  return true;
}

void
srvs__srv__GetSensorStatusList_Response__fini(srvs__srv__GetSensorStatusList_Response * msg)
{
  if (!msg) {
    return;
  }
  // status_list
  srvs__msg__SensorStatus__Sequence__fini(&msg->status_list);
}

bool
srvs__srv__GetSensorStatusList_Response__are_equal(const srvs__srv__GetSensorStatusList_Response * lhs, const srvs__srv__GetSensorStatusList_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status_list
  if (!srvs__msg__SensorStatus__Sequence__are_equal(
      &(lhs->status_list), &(rhs->status_list)))
  {
    return false;
  }
  return true;
}

bool
srvs__srv__GetSensorStatusList_Response__copy(
  const srvs__srv__GetSensorStatusList_Response * input,
  srvs__srv__GetSensorStatusList_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status_list
  if (!srvs__msg__SensorStatus__Sequence__copy(
      &(input->status_list), &(output->status_list)))
  {
    return false;
  }
  return true;
}

srvs__srv__GetSensorStatusList_Response *
srvs__srv__GetSensorStatusList_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__srv__GetSensorStatusList_Response * msg = (srvs__srv__GetSensorStatusList_Response *)allocator.allocate(sizeof(srvs__srv__GetSensorStatusList_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(srvs__srv__GetSensorStatusList_Response));
  bool success = srvs__srv__GetSensorStatusList_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
srvs__srv__GetSensorStatusList_Response__destroy(srvs__srv__GetSensorStatusList_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    srvs__srv__GetSensorStatusList_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
srvs__srv__GetSensorStatusList_Response__Sequence__init(srvs__srv__GetSensorStatusList_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__srv__GetSensorStatusList_Response * data = NULL;

  if (size) {
    data = (srvs__srv__GetSensorStatusList_Response *)allocator.zero_allocate(size, sizeof(srvs__srv__GetSensorStatusList_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = srvs__srv__GetSensorStatusList_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        srvs__srv__GetSensorStatusList_Response__fini(&data[i - 1]);
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
srvs__srv__GetSensorStatusList_Response__Sequence__fini(srvs__srv__GetSensorStatusList_Response__Sequence * array)
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
      srvs__srv__GetSensorStatusList_Response__fini(&array->data[i]);
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

srvs__srv__GetSensorStatusList_Response__Sequence *
srvs__srv__GetSensorStatusList_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  srvs__srv__GetSensorStatusList_Response__Sequence * array = (srvs__srv__GetSensorStatusList_Response__Sequence *)allocator.allocate(sizeof(srvs__srv__GetSensorStatusList_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = srvs__srv__GetSensorStatusList_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
srvs__srv__GetSensorStatusList_Response__Sequence__destroy(srvs__srv__GetSensorStatusList_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    srvs__srv__GetSensorStatusList_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
srvs__srv__GetSensorStatusList_Response__Sequence__are_equal(const srvs__srv__GetSensorStatusList_Response__Sequence * lhs, const srvs__srv__GetSensorStatusList_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!srvs__srv__GetSensorStatusList_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
srvs__srv__GetSensorStatusList_Response__Sequence__copy(
  const srvs__srv__GetSensorStatusList_Response__Sequence * input,
  srvs__srv__GetSensorStatusList_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(srvs__srv__GetSensorStatusList_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    srvs__srv__GetSensorStatusList_Response * data =
      (srvs__srv__GetSensorStatusList_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!srvs__srv__GetSensorStatusList_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          srvs__srv__GetSensorStatusList_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!srvs__srv__GetSensorStatusList_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
