# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hangman_interfaces:msg/Progress.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Progress(type):
    """Metaclass of message 'Progress'."""

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
                'hangman_interfaces.msg.Progress')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__progress
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__progress
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__progress
            cls._TYPE_SUPPORT = module.type_support_msg__msg__progress
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__progress

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Progress(metaclass=Metaclass_Progress):
    """Message class 'Progress'."""

    __slots__ = [
        '_current_state',
        '_attempts_left',
        '_game_over',
        '_won',
    ]

    _fields_and_field_types = {
        'current_state': 'string',
        'attempts_left': 'int32',
        'game_over': 'boolean',
        'won': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_state = kwargs.get('current_state', str())
        self.attempts_left = kwargs.get('attempts_left', int())
        self.game_over = kwargs.get('game_over', bool())
        self.won = kwargs.get('won', bool())

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
        if self.current_state != other.current_state:
            return False
        if self.attempts_left != other.attempts_left:
            return False
        if self.game_over != other.game_over:
            return False
        if self.won != other.won:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_state(self):
        """Message field 'current_state'."""
        return self._current_state

    @current_state.setter
    def current_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_state' field must be of type 'str'"
        self._current_state = value

    @builtins.property
    def attempts_left(self):
        """Message field 'attempts_left'."""
        return self._attempts_left

    @attempts_left.setter
    def attempts_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'attempts_left' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'attempts_left' field must be an integer in [-2147483648, 2147483647]"
        self._attempts_left = value

    @builtins.property
    def game_over(self):
        """Message field 'game_over'."""
        return self._game_over

    @game_over.setter
    def game_over(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'game_over' field must be of type 'bool'"
        self._game_over = value

    @builtins.property
    def won(self):
        """Message field 'won'."""
        return self._won

    @won.setter
    def won(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'won' field must be of type 'bool'"
        self._won = value
