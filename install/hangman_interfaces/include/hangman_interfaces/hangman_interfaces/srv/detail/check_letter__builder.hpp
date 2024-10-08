// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from hangman_interfaces:srv/CheckLetter.idl
// generated code does not contain a copyright notice

#ifndef HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__BUILDER_HPP_
#define HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "hangman_interfaces/srv/detail/check_letter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace hangman_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::srv::CheckLetter_Request>()
{
  return ::hangman_interfaces::srv::CheckLetter_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace hangman_interfaces


namespace hangman_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckLetter_Response_message
{
public:
  explicit Init_CheckLetter_Response_message(::hangman_interfaces::srv::CheckLetter_Response & msg)
  : msg_(msg)
  {}
  ::hangman_interfaces::srv::CheckLetter_Response message(::hangman_interfaces::srv::CheckLetter_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::hangman_interfaces::srv::CheckLetter_Response msg_;
};

class Init_CheckLetter_Response_is_correct
{
public:
  explicit Init_CheckLetter_Response_is_correct(::hangman_interfaces::srv::CheckLetter_Response & msg)
  : msg_(msg)
  {}
  Init_CheckLetter_Response_message is_correct(::hangman_interfaces::srv::CheckLetter_Response::_is_correct_type arg)
  {
    msg_.is_correct = std::move(arg);
    return Init_CheckLetter_Response_message(msg_);
  }

private:
  ::hangman_interfaces::srv::CheckLetter_Response msg_;
};

class Init_CheckLetter_Response_updated_word_state
{
public:
  Init_CheckLetter_Response_updated_word_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CheckLetter_Response_is_correct updated_word_state(::hangman_interfaces::srv::CheckLetter_Response::_updated_word_state_type arg)
  {
    msg_.updated_word_state = std::move(arg);
    return Init_CheckLetter_Response_is_correct(msg_);
  }

private:
  ::hangman_interfaces::srv::CheckLetter_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::hangman_interfaces::srv::CheckLetter_Response>()
{
  return hangman_interfaces::srv::builder::Init_CheckLetter_Response_updated_word_state();
}

}  // namespace hangman_interfaces

#endif  // HANGMAN_INTERFACES__SRV__DETAIL__CHECK_LETTER__BUILDER_HPP_
