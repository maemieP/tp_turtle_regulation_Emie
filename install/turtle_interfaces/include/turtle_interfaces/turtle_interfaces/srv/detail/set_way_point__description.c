// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtle_interfaces:srv/SetWayPoint.idl
// generated code does not contain a copyright notice

#include "turtle_interfaces/srv/detail/set_way_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__SetWayPoint__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0x61, 0xbd, 0x42, 0x8e, 0x7e, 0xbd, 0xa5,
      0x1e, 0x3b, 0x18, 0xe5, 0x20, 0x20, 0x79, 0xfc,
      0xf8, 0x81, 0xf9, 0xa8, 0x1e, 0xbe, 0xbb, 0x4b,
      0xcd, 0x0c, 0x5e, 0x7e, 0xca, 0xdf, 0x62, 0xec,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__SetWayPoint_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa7, 0x81, 0x87, 0xbf, 0x22, 0x66, 0x08, 0xf6,
      0x59, 0x3e, 0xfa, 0x53, 0x92, 0x02, 0xfd, 0xba,
      0x2a, 0x01, 0x3c, 0x91, 0x18, 0x79, 0x8c, 0x2b,
      0x1a, 0x13, 0x75, 0xf1, 0x41, 0x6f, 0x7b, 0x3a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__SetWayPoint_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x58, 0x5c, 0xdc, 0xf0, 0xe1, 0x6f, 0xbf,
      0x3b, 0x64, 0xfe, 0x98, 0x7d, 0x9a, 0xd9, 0x53,
      0xfa, 0xc7, 0x49, 0x34, 0x26, 0xb1, 0xe2, 0xa5,
      0x31, 0x3a, 0x5a, 0xf3, 0x10, 0x77, 0x04, 0x78,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__SetWayPoint_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0xdd, 0x7a, 0xd2, 0x18, 0xc2, 0x7b, 0x66,
      0x99, 0x35, 0xd7, 0x6e, 0xe5, 0x4f, 0xb8, 0xb1,
      0xe8, 0x6d, 0x64, 0x3b, 0x1e, 0x19, 0x60, 0xfa,
      0xa3, 0xff, 0xee, 0x64, 0x0a, 0x56, 0x8b, 0x03,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char turtle_interfaces__srv__SetWayPoint__TYPE_NAME[] = "turtle_interfaces/srv/SetWayPoint";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char turtle_interfaces__srv__SetWayPoint_Event__TYPE_NAME[] = "turtle_interfaces/srv/SetWayPoint_Event";
static char turtle_interfaces__srv__SetWayPoint_Request__TYPE_NAME[] = "turtle_interfaces/srv/SetWayPoint_Request";
static char turtle_interfaces__srv__SetWayPoint_Response__TYPE_NAME[] = "turtle_interfaces/srv/SetWayPoint_Response";

// Define type names, field names, and default values
static char turtle_interfaces__srv__SetWayPoint__FIELD_NAME__request_message[] = "request_message";
static char turtle_interfaces__srv__SetWayPoint__FIELD_NAME__response_message[] = "response_message";
static char turtle_interfaces__srv__SetWayPoint__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__SetWayPoint__FIELDS[] = {
  {
    {turtle_interfaces__srv__SetWayPoint__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__SetWayPoint_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__SetWayPoint__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__SetWayPoint_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__SetWayPoint__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__SetWayPoint_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_interfaces__srv__SetWayPoint__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__SetWayPoint_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__SetWayPoint_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__SetWayPoint_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__SetWayPoint__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__SetWayPoint__TYPE_NAME, 33, 33},
      {turtle_interfaces__srv__SetWayPoint__FIELDS, 3, 3},
    },
    {turtle_interfaces__srv__SetWayPoint__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtle_interfaces__srv__SetWayPoint_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtle_interfaces__srv__SetWayPoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = turtle_interfaces__srv__SetWayPoint_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__SetWayPoint_Request__FIELD_NAME__x[] = "x";
static char turtle_interfaces__srv__SetWayPoint_Request__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__SetWayPoint_Request__FIELDS[] = {
  {
    {turtle_interfaces__srv__SetWayPoint_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__SetWayPoint_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__SetWayPoint_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__SetWayPoint_Request__TYPE_NAME, 41, 41},
      {turtle_interfaces__srv__SetWayPoint_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__SetWayPoint_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__SetWayPoint_Response__FIELDS[] = {
  {
    {turtle_interfaces__srv__SetWayPoint_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__SetWayPoint_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__SetWayPoint_Response__TYPE_NAME, 42, 42},
      {turtle_interfaces__srv__SetWayPoint_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__SetWayPoint_Event__FIELD_NAME__info[] = "info";
static char turtle_interfaces__srv__SetWayPoint_Event__FIELD_NAME__request[] = "request";
static char turtle_interfaces__srv__SetWayPoint_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__SetWayPoint_Event__FIELDS[] = {
  {
    {turtle_interfaces__srv__SetWayPoint_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__SetWayPoint_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtle_interfaces__srv__SetWayPoint_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__SetWayPoint_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtle_interfaces__srv__SetWayPoint_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_interfaces__srv__SetWayPoint_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__SetWayPoint_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__SetWayPoint_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__SetWayPoint_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__SetWayPoint_Event__TYPE_NAME, 39, 39},
      {turtle_interfaces__srv__SetWayPoint_Event__FIELDS, 3, 3},
    },
    {turtle_interfaces__srv__SetWayPoint_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtle_interfaces__srv__SetWayPoint_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtle_interfaces__srv__SetWayPoint_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 x\n"
  "float32 y\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__SetWayPoint__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__SetWayPoint__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__SetWayPoint_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__SetWayPoint_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__SetWayPoint_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__SetWayPoint_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__SetWayPoint_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__SetWayPoint_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__SetWayPoint__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__SetWayPoint__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtle_interfaces__srv__SetWayPoint_Event__get_individual_type_description_source(NULL);
    sources[4] = *turtle_interfaces__srv__SetWayPoint_Request__get_individual_type_description_source(NULL);
    sources[5] = *turtle_interfaces__srv__SetWayPoint_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__SetWayPoint_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__SetWayPoint_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__SetWayPoint_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__SetWayPoint_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__SetWayPoint_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__SetWayPoint_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtle_interfaces__srv__SetWayPoint_Request__get_individual_type_description_source(NULL);
    sources[4] = *turtle_interfaces__srv__SetWayPoint_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
