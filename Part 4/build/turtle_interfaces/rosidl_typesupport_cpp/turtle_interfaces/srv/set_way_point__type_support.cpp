// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:srv/SetWayPoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtle_interfaces/srv/detail/set_way_point__functions.h"
#include "turtle_interfaces/srv/detail/set_way_point__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtle_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetWayPoint_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetWayPoint_Request_type_support_ids_t;

static const _SetWayPoint_Request_type_support_ids_t _SetWayPoint_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetWayPoint_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetWayPoint_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetWayPoint_Request_type_support_symbol_names_t _SetWayPoint_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_interfaces, srv, SetWayPoint_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_interfaces, srv, SetWayPoint_Request)),
  }
};

typedef struct _SetWayPoint_Request_type_support_data_t
{
  void * data[2];
} _SetWayPoint_Request_type_support_data_t;

static _SetWayPoint_Request_type_support_data_t _SetWayPoint_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetWayPoint_Request_message_typesupport_map = {
  2,
  "turtle_interfaces",
  &_SetWayPoint_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetWayPoint_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetWayPoint_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetWayPoint_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetWayPoint_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtle_interfaces__srv__SetWayPoint_Request__get_type_hash,
  &turtle_interfaces__srv__SetWayPoint_Request__get_type_description,
  &turtle_interfaces__srv__SetWayPoint_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_interfaces::srv::SetWayPoint_Request>()
{
  return &::turtle_interfaces::srv::rosidl_typesupport_cpp::SetWayPoint_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtle_interfaces, srv, SetWayPoint_Request)() {
  return get_message_type_support_handle<turtle_interfaces::srv::SetWayPoint_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtle_interfaces/srv/detail/set_way_point__functions.h"
// already included above
// #include "turtle_interfaces/srv/detail/set_way_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtle_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetWayPoint_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetWayPoint_Response_type_support_ids_t;

static const _SetWayPoint_Response_type_support_ids_t _SetWayPoint_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetWayPoint_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetWayPoint_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetWayPoint_Response_type_support_symbol_names_t _SetWayPoint_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_interfaces, srv, SetWayPoint_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_interfaces, srv, SetWayPoint_Response)),
  }
};

typedef struct _SetWayPoint_Response_type_support_data_t
{
  void * data[2];
} _SetWayPoint_Response_type_support_data_t;

static _SetWayPoint_Response_type_support_data_t _SetWayPoint_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetWayPoint_Response_message_typesupport_map = {
  2,
  "turtle_interfaces",
  &_SetWayPoint_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetWayPoint_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetWayPoint_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetWayPoint_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetWayPoint_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtle_interfaces__srv__SetWayPoint_Response__get_type_hash,
  &turtle_interfaces__srv__SetWayPoint_Response__get_type_description,
  &turtle_interfaces__srv__SetWayPoint_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_interfaces::srv::SetWayPoint_Response>()
{
  return &::turtle_interfaces::srv::rosidl_typesupport_cpp::SetWayPoint_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtle_interfaces, srv, SetWayPoint_Response)() {
  return get_message_type_support_handle<turtle_interfaces::srv::SetWayPoint_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtle_interfaces/srv/detail/set_way_point__functions.h"
// already included above
// #include "turtle_interfaces/srv/detail/set_way_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtle_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetWayPoint_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetWayPoint_Event_type_support_ids_t;

static const _SetWayPoint_Event_type_support_ids_t _SetWayPoint_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetWayPoint_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetWayPoint_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetWayPoint_Event_type_support_symbol_names_t _SetWayPoint_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_interfaces, srv, SetWayPoint_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_interfaces, srv, SetWayPoint_Event)),
  }
};

typedef struct _SetWayPoint_Event_type_support_data_t
{
  void * data[2];
} _SetWayPoint_Event_type_support_data_t;

static _SetWayPoint_Event_type_support_data_t _SetWayPoint_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetWayPoint_Event_message_typesupport_map = {
  2,
  "turtle_interfaces",
  &_SetWayPoint_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetWayPoint_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetWayPoint_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetWayPoint_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetWayPoint_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtle_interfaces__srv__SetWayPoint_Event__get_type_hash,
  &turtle_interfaces__srv__SetWayPoint_Event__get_type_description,
  &turtle_interfaces__srv__SetWayPoint_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_interfaces::srv::SetWayPoint_Event>()
{
  return &::turtle_interfaces::srv::rosidl_typesupport_cpp::SetWayPoint_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtle_interfaces, srv, SetWayPoint_Event)() {
  return get_message_type_support_handle<turtle_interfaces::srv::SetWayPoint_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "turtle_interfaces/srv/detail/set_way_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtle_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetWayPoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetWayPoint_type_support_ids_t;

static const _SetWayPoint_type_support_ids_t _SetWayPoint_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetWayPoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetWayPoint_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetWayPoint_type_support_symbol_names_t _SetWayPoint_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtle_interfaces, srv, SetWayPoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_interfaces, srv, SetWayPoint)),
  }
};

typedef struct _SetWayPoint_type_support_data_t
{
  void * data[2];
} _SetWayPoint_type_support_data_t;

static _SetWayPoint_type_support_data_t _SetWayPoint_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetWayPoint_service_typesupport_map = {
  2,
  "turtle_interfaces",
  &_SetWayPoint_service_typesupport_ids.typesupport_identifier[0],
  &_SetWayPoint_service_typesupport_symbol_names.symbol_name[0],
  &_SetWayPoint_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetWayPoint_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetWayPoint_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtle_interfaces::srv::SetWayPoint_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtle_interfaces::srv::SetWayPoint_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtle_interfaces::srv::SetWayPoint_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<turtle_interfaces::srv::SetWayPoint>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<turtle_interfaces::srv::SetWayPoint>,
  &turtle_interfaces__srv__SetWayPoint__get_type_hash,
  &turtle_interfaces__srv__SetWayPoint__get_type_description,
  &turtle_interfaces__srv__SetWayPoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtle_interfaces::srv::SetWayPoint>()
{
  return &::turtle_interfaces::srv::rosidl_typesupport_cpp::SetWayPoint_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, turtle_interfaces, srv, SetWayPoint)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<turtle_interfaces::srv::SetWayPoint>();
}

#ifdef __cplusplus
}
#endif
