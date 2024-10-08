// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hangman_interfaces:msg/Progress.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__STRUCT_HPP_
#define HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hangman_interfaces__msg__Progress __attribute__((deprecated))
#else
# define DEPRECATED__hangman_interfaces__msg__Progress __declspec(deprecated)
#endif

namespace hangman_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Progress_
{
  using Type = Progress_<ContainerAllocator>;

  explicit Progress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = "";
      this->attempts_left = 0l;
      this->game_over = false;
      this->won = false;
    }
  }

  explicit Progress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_state = "";
      this->attempts_left = 0l;
      this->game_over = false;
      this->won = false;
    }
  }

  // field types and members
  using _current_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_state_type current_state;
  using _attempts_left_type =
    int32_t;
  _attempts_left_type attempts_left;
  using _game_over_type =
    bool;
  _game_over_type game_over;
  using _won_type =
    bool;
  _won_type won;

  // setters for named parameter idiom
  Type & set__current_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_state = _arg;
    return *this;
  }
  Type & set__attempts_left(
    const int32_t & _arg)
  {
    this->attempts_left = _arg;
    return *this;
  }
  Type & set__game_over(
    const bool & _arg)
  {
    this->game_over = _arg;
    return *this;
  }
  Type & set__won(
    const bool & _arg)
  {
    this->won = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hangman_interfaces::msg::Progress_<ContainerAllocator> *;
  using ConstRawPtr =
    const hangman_interfaces::msg::Progress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hangman_interfaces::msg::Progress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hangman_interfaces::msg::Progress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hangman_interfaces::msg::Progress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hangman_interfaces::msg::Progress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hangman_interfaces::msg::Progress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hangman_interfaces::msg::Progress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hangman_interfaces::msg::Progress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hangman_interfaces::msg::Progress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hangman_interfaces__msg__Progress
    std::shared_ptr<hangman_interfaces::msg::Progress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hangman_interfaces__msg__Progress
    std::shared_ptr<hangman_interfaces::msg::Progress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Progress_ & other) const
  {
    if (this->current_state != other.current_state) {
      return false;
    }
    if (this->attempts_left != other.attempts_left) {
      return false;
    }
    if (this->game_over != other.game_over) {
      return false;
    }
    if (this->won != other.won) {
      return false;
    }
    return true;
  }
  bool operator!=(const Progress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Progress_

// alias to use template instance with default allocator
using Progress =
  hangman_interfaces::msg::Progress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hangman_interfaces

#endif  // HANGMAN_INTERFACES__MSG__DETAIL__PROGRESS__STRUCT_HPP_
