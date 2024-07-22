// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from prototype:msg/DistanceAngle.idl
// generated code does not contain a copyright notice
#include "prototype/msg/detail/distance_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
prototype__msg__DistanceAngle__init(prototype__msg__DistanceAngle * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  // angle
  // orientation
  return true;
}

void
prototype__msg__DistanceAngle__fini(prototype__msg__DistanceAngle * msg)
{
  if (!msg) {
    return;
  }
  // distance
  // angle
  // orientation
}

bool
prototype__msg__DistanceAngle__are_equal(const prototype__msg__DistanceAngle * lhs, const prototype__msg__DistanceAngle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  return true;
}

bool
prototype__msg__DistanceAngle__copy(
  const prototype__msg__DistanceAngle * input,
  prototype__msg__DistanceAngle * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  // angle
  output->angle = input->angle;
  // orientation
  output->orientation = input->orientation;
  return true;
}

prototype__msg__DistanceAngle *
prototype__msg__DistanceAngle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__msg__DistanceAngle * msg = (prototype__msg__DistanceAngle *)allocator.allocate(sizeof(prototype__msg__DistanceAngle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(prototype__msg__DistanceAngle));
  bool success = prototype__msg__DistanceAngle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
prototype__msg__DistanceAngle__destroy(prototype__msg__DistanceAngle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    prototype__msg__DistanceAngle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
prototype__msg__DistanceAngle__Sequence__init(prototype__msg__DistanceAngle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__msg__DistanceAngle * data = NULL;

  if (size) {
    data = (prototype__msg__DistanceAngle *)allocator.zero_allocate(size, sizeof(prototype__msg__DistanceAngle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = prototype__msg__DistanceAngle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        prototype__msg__DistanceAngle__fini(&data[i - 1]);
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
prototype__msg__DistanceAngle__Sequence__fini(prototype__msg__DistanceAngle__Sequence * array)
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
      prototype__msg__DistanceAngle__fini(&array->data[i]);
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

prototype__msg__DistanceAngle__Sequence *
prototype__msg__DistanceAngle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  prototype__msg__DistanceAngle__Sequence * array = (prototype__msg__DistanceAngle__Sequence *)allocator.allocate(sizeof(prototype__msg__DistanceAngle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = prototype__msg__DistanceAngle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
prototype__msg__DistanceAngle__Sequence__destroy(prototype__msg__DistanceAngle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    prototype__msg__DistanceAngle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
prototype__msg__DistanceAngle__Sequence__are_equal(const prototype__msg__DistanceAngle__Sequence * lhs, const prototype__msg__DistanceAngle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!prototype__msg__DistanceAngle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
prototype__msg__DistanceAngle__Sequence__copy(
  const prototype__msg__DistanceAngle__Sequence * input,
  prototype__msg__DistanceAngle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(prototype__msg__DistanceAngle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    prototype__msg__DistanceAngle * data =
      (prototype__msg__DistanceAngle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!prototype__msg__DistanceAngle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          prototype__msg__DistanceAngle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!prototype__msg__DistanceAngle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
