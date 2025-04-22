// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_interfaces:srv/SetWayPoint.idl
// generated code does not contain a copyright notice
#include "turtle_interfaces/srv/detail/set_way_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
turtle_interfaces__srv__SetWayPoint_Request__init(turtle_interfaces__srv__SetWayPoint_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
turtle_interfaces__srv__SetWayPoint_Request__fini(turtle_interfaces__srv__SetWayPoint_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
turtle_interfaces__srv__SetWayPoint_Request__are_equal(const turtle_interfaces__srv__SetWayPoint_Request * lhs, const turtle_interfaces__srv__SetWayPoint_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__srv__SetWayPoint_Request__copy(
  const turtle_interfaces__srv__SetWayPoint_Request * input,
  turtle_interfaces__srv__SetWayPoint_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

turtle_interfaces__srv__SetWayPoint_Request *
turtle_interfaces__srv__SetWayPoint_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__SetWayPoint_Request * msg = (turtle_interfaces__srv__SetWayPoint_Request *)allocator.allocate(sizeof(turtle_interfaces__srv__SetWayPoint_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__srv__SetWayPoint_Request));
  bool success = turtle_interfaces__srv__SetWayPoint_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__srv__SetWayPoint_Request__destroy(turtle_interfaces__srv__SetWayPoint_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_interfaces__srv__SetWayPoint_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_interfaces__srv__SetWayPoint_Request__Sequence__init(turtle_interfaces__srv__SetWayPoint_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__SetWayPoint_Request * data = NULL;

  if (size) {
    data = (turtle_interfaces__srv__SetWayPoint_Request *)allocator.zero_allocate(size, sizeof(turtle_interfaces__srv__SetWayPoint_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__srv__SetWayPoint_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__srv__SetWayPoint_Request__fini(&data[i - 1]);
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
turtle_interfaces__srv__SetWayPoint_Request__Sequence__fini(turtle_interfaces__srv__SetWayPoint_Request__Sequence * array)
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
      turtle_interfaces__srv__SetWayPoint_Request__fini(&array->data[i]);
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

turtle_interfaces__srv__SetWayPoint_Request__Sequence *
turtle_interfaces__srv__SetWayPoint_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__SetWayPoint_Request__Sequence * array = (turtle_interfaces__srv__SetWayPoint_Request__Sequence *)allocator.allocate(sizeof(turtle_interfaces__srv__SetWayPoint_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__srv__SetWayPoint_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__srv__SetWayPoint_Request__Sequence__destroy(turtle_interfaces__srv__SetWayPoint_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_interfaces__srv__SetWayPoint_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_interfaces__srv__SetWayPoint_Request__Sequence__are_equal(const turtle_interfaces__srv__SetWayPoint_Request__Sequence * lhs, const turtle_interfaces__srv__SetWayPoint_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__srv__SetWayPoint_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__srv__SetWayPoint_Request__Sequence__copy(
  const turtle_interfaces__srv__SetWayPoint_Request__Sequence * input,
  turtle_interfaces__srv__SetWayPoint_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__srv__SetWayPoint_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_interfaces__srv__SetWayPoint_Request * data =
      (turtle_interfaces__srv__SetWayPoint_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__srv__SetWayPoint_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_interfaces__srv__SetWayPoint_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_interfaces__srv__SetWayPoint_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
turtle_interfaces__srv__SetWayPoint_Response__init(turtle_interfaces__srv__SetWayPoint_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
turtle_interfaces__srv__SetWayPoint_Response__fini(turtle_interfaces__srv__SetWayPoint_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
turtle_interfaces__srv__SetWayPoint_Response__are_equal(const turtle_interfaces__srv__SetWayPoint_Response * lhs, const turtle_interfaces__srv__SetWayPoint_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
turtle_interfaces__srv__SetWayPoint_Response__copy(
  const turtle_interfaces__srv__SetWayPoint_Response * input,
  turtle_interfaces__srv__SetWayPoint_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

turtle_interfaces__srv__SetWayPoint_Response *
turtle_interfaces__srv__SetWayPoint_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__SetWayPoint_Response * msg = (turtle_interfaces__srv__SetWayPoint_Response *)allocator.allocate(sizeof(turtle_interfaces__srv__SetWayPoint_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__srv__SetWayPoint_Response));
  bool success = turtle_interfaces__srv__SetWayPoint_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__srv__SetWayPoint_Response__destroy(turtle_interfaces__srv__SetWayPoint_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_interfaces__srv__SetWayPoint_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_interfaces__srv__SetWayPoint_Response__Sequence__init(turtle_interfaces__srv__SetWayPoint_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__SetWayPoint_Response * data = NULL;

  if (size) {
    data = (turtle_interfaces__srv__SetWayPoint_Response *)allocator.zero_allocate(size, sizeof(turtle_interfaces__srv__SetWayPoint_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__srv__SetWayPoint_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__srv__SetWayPoint_Response__fini(&data[i - 1]);
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
turtle_interfaces__srv__SetWayPoint_Response__Sequence__fini(turtle_interfaces__srv__SetWayPoint_Response__Sequence * array)
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
      turtle_interfaces__srv__SetWayPoint_Response__fini(&array->data[i]);
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

turtle_interfaces__srv__SetWayPoint_Response__Sequence *
turtle_interfaces__srv__SetWayPoint_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__SetWayPoint_Response__Sequence * array = (turtle_interfaces__srv__SetWayPoint_Response__Sequence *)allocator.allocate(sizeof(turtle_interfaces__srv__SetWayPoint_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__srv__SetWayPoint_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__srv__SetWayPoint_Response__Sequence__destroy(turtle_interfaces__srv__SetWayPoint_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_interfaces__srv__SetWayPoint_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_interfaces__srv__SetWayPoint_Response__Sequence__are_equal(const turtle_interfaces__srv__SetWayPoint_Response__Sequence * lhs, const turtle_interfaces__srv__SetWayPoint_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__srv__SetWayPoint_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__srv__SetWayPoint_Response__Sequence__copy(
  const turtle_interfaces__srv__SetWayPoint_Response__Sequence * input,
  turtle_interfaces__srv__SetWayPoint_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__srv__SetWayPoint_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_interfaces__srv__SetWayPoint_Response * data =
      (turtle_interfaces__srv__SetWayPoint_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__srv__SetWayPoint_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_interfaces__srv__SetWayPoint_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_interfaces__srv__SetWayPoint_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "turtle_interfaces/srv/detail/set_way_point__functions.h"

bool
turtle_interfaces__srv__SetWayPoint_Event__init(turtle_interfaces__srv__SetWayPoint_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    turtle_interfaces__srv__SetWayPoint_Event__fini(msg);
    return false;
  }
  // request
  if (!turtle_interfaces__srv__SetWayPoint_Request__Sequence__init(&msg->request, 0)) {
    turtle_interfaces__srv__SetWayPoint_Event__fini(msg);
    return false;
  }
  // response
  if (!turtle_interfaces__srv__SetWayPoint_Response__Sequence__init(&msg->response, 0)) {
    turtle_interfaces__srv__SetWayPoint_Event__fini(msg);
    return false;
  }
  return true;
}

void
turtle_interfaces__srv__SetWayPoint_Event__fini(turtle_interfaces__srv__SetWayPoint_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  turtle_interfaces__srv__SetWayPoint_Request__Sequence__fini(&msg->request);
  // response
  turtle_interfaces__srv__SetWayPoint_Response__Sequence__fini(&msg->response);
}

bool
turtle_interfaces__srv__SetWayPoint_Event__are_equal(const turtle_interfaces__srv__SetWayPoint_Event * lhs, const turtle_interfaces__srv__SetWayPoint_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!turtle_interfaces__srv__SetWayPoint_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!turtle_interfaces__srv__SetWayPoint_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
turtle_interfaces__srv__SetWayPoint_Event__copy(
  const turtle_interfaces__srv__SetWayPoint_Event * input,
  turtle_interfaces__srv__SetWayPoint_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!turtle_interfaces__srv__SetWayPoint_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!turtle_interfaces__srv__SetWayPoint_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

turtle_interfaces__srv__SetWayPoint_Event *
turtle_interfaces__srv__SetWayPoint_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__SetWayPoint_Event * msg = (turtle_interfaces__srv__SetWayPoint_Event *)allocator.allocate(sizeof(turtle_interfaces__srv__SetWayPoint_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_interfaces__srv__SetWayPoint_Event));
  bool success = turtle_interfaces__srv__SetWayPoint_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_interfaces__srv__SetWayPoint_Event__destroy(turtle_interfaces__srv__SetWayPoint_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_interfaces__srv__SetWayPoint_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_interfaces__srv__SetWayPoint_Event__Sequence__init(turtle_interfaces__srv__SetWayPoint_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__SetWayPoint_Event * data = NULL;

  if (size) {
    data = (turtle_interfaces__srv__SetWayPoint_Event *)allocator.zero_allocate(size, sizeof(turtle_interfaces__srv__SetWayPoint_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_interfaces__srv__SetWayPoint_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_interfaces__srv__SetWayPoint_Event__fini(&data[i - 1]);
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
turtle_interfaces__srv__SetWayPoint_Event__Sequence__fini(turtle_interfaces__srv__SetWayPoint_Event__Sequence * array)
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
      turtle_interfaces__srv__SetWayPoint_Event__fini(&array->data[i]);
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

turtle_interfaces__srv__SetWayPoint_Event__Sequence *
turtle_interfaces__srv__SetWayPoint_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_interfaces__srv__SetWayPoint_Event__Sequence * array = (turtle_interfaces__srv__SetWayPoint_Event__Sequence *)allocator.allocate(sizeof(turtle_interfaces__srv__SetWayPoint_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_interfaces__srv__SetWayPoint_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_interfaces__srv__SetWayPoint_Event__Sequence__destroy(turtle_interfaces__srv__SetWayPoint_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_interfaces__srv__SetWayPoint_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_interfaces__srv__SetWayPoint_Event__Sequence__are_equal(const turtle_interfaces__srv__SetWayPoint_Event__Sequence * lhs, const turtle_interfaces__srv__SetWayPoint_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_interfaces__srv__SetWayPoint_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_interfaces__srv__SetWayPoint_Event__Sequence__copy(
  const turtle_interfaces__srv__SetWayPoint_Event__Sequence * input,
  turtle_interfaces__srv__SetWayPoint_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_interfaces__srv__SetWayPoint_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_interfaces__srv__SetWayPoint_Event * data =
      (turtle_interfaces__srv__SetWayPoint_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_interfaces__srv__SetWayPoint_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_interfaces__srv__SetWayPoint_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_interfaces__srv__SetWayPoint_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
