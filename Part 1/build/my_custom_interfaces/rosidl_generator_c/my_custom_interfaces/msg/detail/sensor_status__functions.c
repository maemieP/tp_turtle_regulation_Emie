// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_custom_interfaces:msg/SensorStatus.idl
// generated code does not contain a copyright notice
#include "my_custom_interfaces/msg/detail/sensor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
my_custom_interfaces__msg__SensorStatus__init(my_custom_interfaces__msg__SensorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    my_custom_interfaces__msg__SensorStatus__fini(msg);
    return false;
  }
  // value
  // enable
  return true;
}

void
my_custom_interfaces__msg__SensorStatus__fini(my_custom_interfaces__msg__SensorStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // value
  // enable
}

bool
my_custom_interfaces__msg__SensorStatus__are_equal(const my_custom_interfaces__msg__SensorStatus * lhs, const my_custom_interfaces__msg__SensorStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
my_custom_interfaces__msg__SensorStatus__copy(
  const my_custom_interfaces__msg__SensorStatus * input,
  my_custom_interfaces__msg__SensorStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // value
  output->value = input->value;
  // enable
  output->enable = input->enable;
  return true;
}

my_custom_interfaces__msg__SensorStatus *
my_custom_interfaces__msg__SensorStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interfaces__msg__SensorStatus * msg = (my_custom_interfaces__msg__SensorStatus *)allocator.allocate(sizeof(my_custom_interfaces__msg__SensorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_custom_interfaces__msg__SensorStatus));
  bool success = my_custom_interfaces__msg__SensorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_custom_interfaces__msg__SensorStatus__destroy(my_custom_interfaces__msg__SensorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_custom_interfaces__msg__SensorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_custom_interfaces__msg__SensorStatus__Sequence__init(my_custom_interfaces__msg__SensorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interfaces__msg__SensorStatus * data = NULL;

  if (size) {
    data = (my_custom_interfaces__msg__SensorStatus *)allocator.zero_allocate(size, sizeof(my_custom_interfaces__msg__SensorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_custom_interfaces__msg__SensorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_custom_interfaces__msg__SensorStatus__fini(&data[i - 1]);
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
my_custom_interfaces__msg__SensorStatus__Sequence__fini(my_custom_interfaces__msg__SensorStatus__Sequence * array)
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
      my_custom_interfaces__msg__SensorStatus__fini(&array->data[i]);
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

my_custom_interfaces__msg__SensorStatus__Sequence *
my_custom_interfaces__msg__SensorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_custom_interfaces__msg__SensorStatus__Sequence * array = (my_custom_interfaces__msg__SensorStatus__Sequence *)allocator.allocate(sizeof(my_custom_interfaces__msg__SensorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_custom_interfaces__msg__SensorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_custom_interfaces__msg__SensorStatus__Sequence__destroy(my_custom_interfaces__msg__SensorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_custom_interfaces__msg__SensorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_custom_interfaces__msg__SensorStatus__Sequence__are_equal(const my_custom_interfaces__msg__SensorStatus__Sequence * lhs, const my_custom_interfaces__msg__SensorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_custom_interfaces__msg__SensorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_custom_interfaces__msg__SensorStatus__Sequence__copy(
  const my_custom_interfaces__msg__SensorStatus__Sequence * input,
  my_custom_interfaces__msg__SensorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_custom_interfaces__msg__SensorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_custom_interfaces__msg__SensorStatus * data =
      (my_custom_interfaces__msg__SensorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_custom_interfaces__msg__SensorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_custom_interfaces__msg__SensorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_custom_interfaces__msg__SensorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
