// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:srv/SetWayPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_interfaces/srv/set_way_point.h"


#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_WAY_POINT__STRUCT_H_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_WAY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetWayPoint in the package turtle_interfaces.
typedef struct turtle_interfaces__srv__SetWayPoint_Request
{
  float x;
  float y;
} turtle_interfaces__srv__SetWayPoint_Request;

// Struct for a sequence of turtle_interfaces__srv__SetWayPoint_Request.
typedef struct turtle_interfaces__srv__SetWayPoint_Request__Sequence
{
  turtle_interfaces__srv__SetWayPoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__srv__SetWayPoint_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetWayPoint in the package turtle_interfaces.
typedef struct turtle_interfaces__srv__SetWayPoint_Response
{
  bool success;
} turtle_interfaces__srv__SetWayPoint_Response;

// Struct for a sequence of turtle_interfaces__srv__SetWayPoint_Response.
typedef struct turtle_interfaces__srv__SetWayPoint_Response__Sequence
{
  turtle_interfaces__srv__SetWayPoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__srv__SetWayPoint_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtle_interfaces__srv__SetWayPoint_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtle_interfaces__srv__SetWayPoint_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetWayPoint in the package turtle_interfaces.
typedef struct turtle_interfaces__srv__SetWayPoint_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtle_interfaces__srv__SetWayPoint_Request__Sequence request;
  turtle_interfaces__srv__SetWayPoint_Response__Sequence response;
} turtle_interfaces__srv__SetWayPoint_Event;

// Struct for a sequence of turtle_interfaces__srv__SetWayPoint_Event.
typedef struct turtle_interfaces__srv__SetWayPoint_Event__Sequence
{
  turtle_interfaces__srv__SetWayPoint_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__srv__SetWayPoint_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_WAY_POINT__STRUCT_H_
