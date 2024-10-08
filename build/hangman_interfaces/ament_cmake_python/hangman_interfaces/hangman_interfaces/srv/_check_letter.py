# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hangman_interfaces:srv/CheckLetter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CheckLetter_Request(type):
    """Metaclass of message 'CheckLetter_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hangman_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hangman_interfaces.srv.CheckLetter_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__check_letter__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__check_letter__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__check_letter__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__check_letter__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__check_letter__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CheckLetter_Request(metaclass=Metaclass_CheckLetter_Request):
    """Message class 'CheckLetter_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_CheckLetter_Response(type):
    """Metaclass of message 'CheckLetter_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hangman_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hangman_interfaces.srv.CheckLetter_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__check_letter__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__check_letter__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__check_letter__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__check_letter__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__check_letter__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CheckLetter_Response(metaclass=Metaclass_CheckLetter_Response):
    """Message class 'CheckLetter_Response'."""

    __slots__ = [
        '_updated_word_state',
        '_is_correct',
        '_message',
    ]

    _fields_and_field_types = {
        'updated_word_state': 'string',
        'is_correct': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.updated_word_state = kwargs.get('updated_word_state', str())
        self.is_correct = kwargs.get('is_correct', bool())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.updated_word_state != other.updated_word_state:
            return False
        if self.is_correct != other.is_correct:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def updated_word_state(self):
        """Message field 'updated_word_state'."""
        return self._updated_word_state

    @updated_word_state.setter
    def updated_word_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'updated_word_state' field must be of type 'str'"
        self._updated_word_state = value

    @builtins.property
    def is_correct(self):
        """Message field 'is_correct'."""
        return self._is_correct

    @is_correct.setter
    def is_correct(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_correct' field must be of type 'bool'"
        self._is_correct = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_CheckLetter(type):
    """Metaclass of service 'CheckLetter'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hangman_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hangman_interfaces.srv.CheckLetter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__check_letter

            from hangman_interfaces.srv import _check_letter
            if _check_letter.Metaclass_CheckLetter_Request._TYPE_SUPPORT is None:
                _check_letter.Metaclass_CheckLetter_Request.__import_type_support__()
            if _check_letter.Metaclass_CheckLetter_Response._TYPE_SUPPORT is None:
                _check_letter.Metaclass_CheckLetter_Response.__import_type_support__()


class CheckLetter(metaclass=Metaclass_CheckLetter):
    from hangman_interfaces.srv._check_letter import CheckLetter_Request as Request
    from hangman_interfaces.srv._check_letter import CheckLetter_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
