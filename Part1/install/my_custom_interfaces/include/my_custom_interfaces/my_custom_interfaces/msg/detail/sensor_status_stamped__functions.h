// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_custom_interfaces:msg/SensorStatusStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_custom_interfaces/msg/sensor_status_stamped.h"


#ifndef MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS_STAMPED__FUNCTIONS_H_
#define MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "my_custom_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_custom_interfaces/msg/detail/sensor_status_stamped__struct.h"

/// Initialize msg/SensorStatusStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_custom_interfaces__msg__SensorStatusStamped
 * )) before or use
 * my_custom_interfaces__msg__SensorStatusStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
bool
my_custom_interfaces__msg__SensorStatusStamped__init(my_custom_interfaces__msg__SensorStatusStamped * msg);

/// Finalize msg/SensorStatusStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
void
my_custom_interfaces__msg__SensorStatusStamped__fini(my_custom_interfaces__msg__SensorStatusStamped * msg);

/// Create msg/SensorStatusStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_custom_interfaces__msg__SensorStatusStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
my_custom_interfaces__msg__SensorStatusStamped *
my_custom_interfaces__msg__SensorStatusStamped__create(void);

/// Destroy msg/SensorStatusStamped message.
/**
 * It calls
 * my_custom_interfaces__msg__SensorStatusStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
void
my_custom_interfaces__msg__SensorStatusStamped__destroy(my_custom_interfaces__msg__SensorStatusStamped * msg);

/// Check for msg/SensorStatusStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
bool
my_custom_interfaces__msg__SensorStatusStamped__are_equal(const my_custom_interfaces__msg__SensorStatusStamped * lhs, const my_custom_interfaces__msg__SensorStatusStamped * rhs);

/// Copy a msg/SensorStatusStamped message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
bool
my_custom_interfaces__msg__SensorStatusStamped__copy(
  const my_custom_interfaces__msg__SensorStatusStamped * input,
  my_custom_interfaces__msg__SensorStatusStamped * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
const rosidl_type_hash_t *
my_custom_interfaces__msg__SensorStatusStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
my_custom_interfaces__msg__SensorStatusStamped__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
const rosidl_runtime_c__type_description__TypeSource *
my_custom_interfaces__msg__SensorStatusStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_custom_interfaces__msg__SensorStatusStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/SensorStatusStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_custom_interfaces__msg__SensorStatusStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
bool
my_custom_interfaces__msg__SensorStatusStamped__Sequence__init(my_custom_interfaces__msg__SensorStatusStamped__Sequence * array, size_t size);

/// Finalize array of msg/SensorStatusStamped messages.
/**
 * It calls
 * my_custom_interfaces__msg__SensorStatusStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
void
my_custom_interfaces__msg__SensorStatusStamped__Sequence__fini(my_custom_interfaces__msg__SensorStatusStamped__Sequence * array);

/// Create array of msg/SensorStatusStamped messages.
/**
 * It allocates the memory for the array and calls
 * my_custom_interfaces__msg__SensorStatusStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
my_custom_interfaces__msg__SensorStatusStamped__Sequence *
my_custom_interfaces__msg__SensorStatusStamped__Sequence__create(size_t size);

/// Destroy array of msg/SensorStatusStamped messages.
/**
 * It calls
 * my_custom_interfaces__msg__SensorStatusStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
void
my_custom_interfaces__msg__SensorStatusStamped__Sequence__destroy(my_custom_interfaces__msg__SensorStatusStamped__Sequence * array);

/// Check for msg/SensorStatusStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
bool
my_custom_interfaces__msg__SensorStatusStamped__Sequence__are_equal(const my_custom_interfaces__msg__SensorStatusStamped__Sequence * lhs, const my_custom_interfaces__msg__SensorStatusStamped__Sequence * rhs);

/// Copy an array of msg/SensorStatusStamped messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_custom_interfaces
bool
my_custom_interfaces__msg__SensorStatusStamped__Sequence__copy(
  const my_custom_interfaces__msg__SensorStatusStamped__Sequence * input,
  my_custom_interfaces__msg__SensorStatusStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_CUSTOM_INTERFACES__MSG__DETAIL__SENSOR_STATUS_STAMPED__FUNCTIONS_H_
