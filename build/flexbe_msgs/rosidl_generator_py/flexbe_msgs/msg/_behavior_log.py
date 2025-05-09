# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flexbe_msgs:msg/BehaviorLog.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BehaviorLog(type):
    """Metaclass of message 'BehaviorLog'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INFO': 0,
        'WARN': 1,
        'HINT': 2,
        'ERROR': 3,
        'DEBUG': 10,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('flexbe_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flexbe_msgs.msg.BehaviorLog')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__behavior_log
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__behavior_log
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__behavior_log
            cls._TYPE_SUPPORT = module.type_support_msg__msg__behavior_log
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__behavior_log

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INFO': cls.__constants['INFO'],
            'WARN': cls.__constants['WARN'],
            'HINT': cls.__constants['HINT'],
            'ERROR': cls.__constants['ERROR'],
            'DEBUG': cls.__constants['DEBUG'],
        }

    @property
    def INFO(self):
        """Message constant 'INFO'."""
        return Metaclass_BehaviorLog.__constants['INFO']

    @property
    def WARN(self):
        """Message constant 'WARN'."""
        return Metaclass_BehaviorLog.__constants['WARN']

    @property
    def HINT(self):
        """Message constant 'HINT'."""
        return Metaclass_BehaviorLog.__constants['HINT']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_BehaviorLog.__constants['ERROR']

    @property
    def DEBUG(self):
        """Message constant 'DEBUG'."""
        return Metaclass_BehaviorLog.__constants['DEBUG']


class BehaviorLog(metaclass=Metaclass_BehaviorLog):
    """
    Message class 'BehaviorLog'.

    Constants:
      INFO
      WARN
      HINT
      ERROR
      DEBUG
    """

    __slots__ = [
        '_text',
        '_status_code',
    ]

    _fields_and_field_types = {
        'text': 'string',
        'status_code': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.text = kwargs.get('text', str())
        self.status_code = kwargs.get('status_code', int())

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
        if self.text != other.text:
            return False
        if self.status_code != other.status_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value

    @builtins.property
    def status_code(self):
        """Message field 'status_code'."""
        return self._status_code

    @status_code.setter
    def status_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status_code' field must be an unsigned integer in [0, 255]"
        self._status_code = value
