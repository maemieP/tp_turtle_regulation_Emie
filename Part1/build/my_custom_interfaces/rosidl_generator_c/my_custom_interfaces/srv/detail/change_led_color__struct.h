// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_custom_interfaces:srv/ChangeLedColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/srv/change_led_color.h"


#ifndef MY_CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_LED_COLOR__STRUCT_H_
#define MY_CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_LED_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ChangeLedColor in the package my_custom_interfaces.
typedef struct my_custom_interfaces__srv__ChangeLedColor_Request
{
  double red;
  double green;
  double blue;
} my_custom_interfaces__srv__ChangeLedColor_Request;

// Struct for a sequence of my_custom_interfaces__srv__ChangeLedColor_Request.
typedef struct my_custom_interfaces__srv__ChangeLedColor_Request__Sequence
{
  my_custom_interfaces__srv__ChangeLedColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interfaces__srv__ChangeLedColor_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ChangeLedColor in the package my_custom_interfaces.
typedef struct my_custom_interfaces__srv__ChangeLedColor_Response
{
  bool success;
} my_custom_interfaces__srv__ChangeLedColor_Response;

// Struct for a sequence of my_custom_interfaces__srv__ChangeLedColor_Response.
typedef struct my_custom_interfaces__srv__ChangeLedColor_Response__Sequence
{
  my_custom_interfaces__srv__ChangeLedColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interfaces__srv__ChangeLedColor_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  my_custom_interfaces__srv__ChangeLedColor_Event__request__MAX_SIZE = 1
};
// response
enum
{
  my_custom_interfaces__srv__ChangeLedColor_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ChangeLedColor in the package my_custom_interfaces.
typedef struct my_custom_interfaces__srv__ChangeLedColor_Event
{
  service_msgs__msg__ServiceEventInfo info;
  my_custom_interfaces__srv__ChangeLedColor_Request__Sequence request;
  my_custom_interfaces__srv__ChangeLedColor_Response__Sequence response;
} my_custom_interfaces__srv__ChangeLedColor_Event;

// Struct for a sequence of my_custom_interfaces__srv__ChangeLedColor_Event.
typedef struct my_custom_interfaces__srv__ChangeLedColor_Event__Sequence
{
  my_custom_interfaces__srv__ChangeLedColor_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_custom_interfaces__srv__ChangeLedColor_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACES__SRV__DETAIL__CHANGE_LED_COLOR__STRUCT_H_
