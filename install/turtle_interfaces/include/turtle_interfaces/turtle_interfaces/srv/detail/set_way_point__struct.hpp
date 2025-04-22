// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:srv/SetWayPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_interfaces/srv/set_way_point.hpp"


#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_WAY_POINT__STRUCT_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_WAY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__srv__SetWayPoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__srv__SetWayPoint_Request __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWayPoint_Request_
{
  using Type = SetWayPoint_Request_<ContainerAllocator>;

  explicit SetWayPoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit SetWayPoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__srv__SetWayPoint_Request
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__srv__SetWayPoint_Request
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWayPoint_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWayPoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWayPoint_Request_

// alias to use template instance with default allocator
using SetWayPoint_Request =
  turtle_interfaces::srv::SetWayPoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_interfaces


#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__srv__SetWayPoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__srv__SetWayPoint_Response __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWayPoint_Response_
{
  using Type = SetWayPoint_Response_<ContainerAllocator>;

  explicit SetWayPoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetWayPoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__srv__SetWayPoint_Response
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__srv__SetWayPoint_Response
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWayPoint_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWayPoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWayPoint_Response_

// alias to use template instance with default allocator
using SetWayPoint_Response =
  turtle_interfaces::srv::SetWayPoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__srv__SetWayPoint_Event __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__srv__SetWayPoint_Event __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWayPoint_Event_
{
  using Type = SetWayPoint_Event_<ContainerAllocator>;

  explicit SetWayPoint_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetWayPoint_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtle_interfaces::srv::SetWayPoint_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtle_interfaces::srv::SetWayPoint_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__srv__SetWayPoint_Event
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__srv__SetWayPoint_Event
    std::shared_ptr<turtle_interfaces::srv::SetWayPoint_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWayPoint_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWayPoint_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWayPoint_Event_

// alias to use template instance with default allocator
using SetWayPoint_Event =
  turtle_interfaces::srv::SetWayPoint_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_interfaces

namespace turtle_interfaces
{

namespace srv
{

struct SetWayPoint
{
  using Request = turtle_interfaces::srv::SetWayPoint_Request;
  using Response = turtle_interfaces::srv::SetWayPoint_Response;
  using Event = turtle_interfaces::srv::SetWayPoint_Event;
};

}  // namespace srv

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_WAY_POINT__STRUCT_HPP_
