// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hangman_interfaces:srv/CheckLetter.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__STRUCT_HPP_
#define HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hangman_interfaces__srv__CheckLetter_Request __attribute__((deprecated))
#else
# define DEPRECATED__hangman_interfaces__srv__CheckLetter_Request __declspec(deprecated)
#endif

namespace hangman_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckLetter_Request_
{
  using Type = CheckLetter_Request_<ContainerAllocator>;

  explicit CheckLetter_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CheckLetter_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hangman_interfaces__srv__CheckLetter_Request
    std::shared_ptr<hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hangman_interfaces__srv__CheckLetter_Request
    std::shared_ptr<hangman_interfaces::srv::CheckLetter_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckLetter_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckLetter_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckLetter_Request_

// alias to use template instance with default allocator
using CheckLetter_Request =
  hangman_interfaces::srv::CheckLetter_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hangman_interfaces


#ifndef _WIN32
# define DEPRECATED__hangman_interfaces__srv__CheckLetter_Response __attribute__((deprecated))
#else
# define DEPRECATED__hangman_interfaces__srv__CheckLetter_Response __declspec(deprecated)
#endif

namespace hangman_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CheckLetter_Response_
{
  using Type = CheckLetter_Response_<ContainerAllocator>;

  explicit CheckLetter_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->updated_word_state = "";
      this->is_correct = false;
      this->message = "";
    }
  }

  explicit CheckLetter_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : updated_word_state(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->updated_word_state = "";
      this->is_correct = false;
      this->message = "";
    }
  }

  // field types and members
  using _updated_word_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _updated_word_state_type updated_word_state;
  using _is_correct_type =
    bool;
  _is_correct_type is_correct;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__updated_word_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->updated_word_state = _arg;
    return *this;
  }
  Type & set__is_correct(
    const bool & _arg)
  {
    this->is_correct = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hangman_interfaces__srv__CheckLetter_Response
    std::shared_ptr<hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hangman_interfaces__srv__CheckLetter_Response
    std::shared_ptr<hangman_interfaces::srv::CheckLetter_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckLetter_Response_ & other) const
  {
    if (this->updated_word_state != other.updated_word_state) {
      return false;
    }
    if (this->is_correct != other.is_correct) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckLetter_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckLetter_Response_

// alias to use template instance with default allocator
using CheckLetter_Response =
  hangman_interfaces::srv::CheckLetter_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace hangman_interfaces

namespace hangman_interfaces
{

namespace srv
{

struct CheckLetter
{
  using Request = hangman_interfaces::srv::CheckLetter_Request;
  using Response = hangman_interfaces::srv::CheckLetter_Response;
};

}  // namespace srv

}  // namespace hangman_interfaces

#endif  // HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__STRUCT_HPP_
