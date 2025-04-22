// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_custom_interfaces:msg/SensorStatus.idl
// generated code does not contain a copyright notice

#include "my_custom_interfaces/msg/detail/sensor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
const rosidl_type_hash_t *
my_custom_interfaces__msg__SensorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9d, 0x7e, 0x15, 0xa4, 0xc6, 0x2f, 0xee, 0xb0,
      0xd3, 0x0a, 0x9d, 0xe5, 0x6e, 0x23, 0x99, 0x27,
      0xd6, 0x41, 0x01, 0x5a, 0xeb, 0x7e, 0xe2, 0x7e,
      0x76, 0xe0, 0x06, 0xf6, 0x31, 0xda, 0x88, 0x43,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_custom_interfaces__msg__SensorStatus__TYPE_NAME[] = "my_custom_interfaces/msg/SensorStatus";

// Define type names, field names, and default values
static char my_custom_interfaces__msg__SensorStatus__FIELD_NAME__status[] = "status";
static char my_custom_interfaces__msg__SensorStatus__FIELD_NAME__value[] = "value";
static char my_custom_interfaces__msg__SensorStatus__FIELD_NAME__enable[] = "enable";

static rosidl_runtime_c__type_description__Field my_custom_interfaces__msg__SensorStatus__FIELDS[] = {
  {
    {my_custom_interfaces__msg__SensorStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_interfaces__msg__SensorStatus__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_custom_interfaces__msg__SensorStatus__FIELD_NAME__enable, 6, 6},
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
my_custom_interfaces__msg__SensorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_custom_interfaces__msg__SensorStatus__TYPE_NAME, 37, 37},
      {my_custom_interfaces__msg__SensorStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string status\n"
  "float64 value\n"
  "bool enable";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_custom_interfaces__msg__SensorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_custom_interfaces__msg__SensorStatus__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_custom_interfaces__msg__SensorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_custom_interfaces__msg__SensorStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
