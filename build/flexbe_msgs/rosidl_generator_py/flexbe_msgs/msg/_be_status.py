# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flexbe_msgs:msg/BEStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BEStatus(type):
    """Metaclass of message 'BEStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STARTED': 0,
        'FINISHED': 1,
        'FAILED': 2,
        'LOCKED': 4,
        'WAITING': 5,
        'SWITCHING': 6,
        'WARNING': 10,
        'ERROR': 11,
        'READY': 20,
        'RUNNING': 30,
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
                'flexbe_msgs.msg.BEStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__be_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__be_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__be_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__be_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__be_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STARTED': cls.__constants['STARTED'],
            'FINISHED': cls.__constants['FINISHED'],
            'FAILED': cls.__constants['FAILED'],
            'LOCKED': cls.__constants['LOCKED'],
            'WAITING': cls.__constants['WAITING'],
            'SWITCHING': cls.__constants['SWITCHING'],
            'WARNING': cls.__constants['WARNING'],
            'ERROR': cls.__constants['ERROR'],
            'READY': cls.__constants['READY'],
            'RUNNING': cls.__constants['RUNNING'],
        }

    @property
    def STARTED(self):
        """Message constant 'STARTED'."""
        return Metaclass_BEStatus.__constants['STARTED']

    @property
    def FINISHED(self):
        """Message constant 'FINISHED'."""
        return Metaclass_BEStatus.__constants['FINISHED']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_BEStatus.__constants['FAILED']

    @property
    def LOCKED(self):
        """Message constant 'LOCKED'."""
        return Metaclass_BEStatus.__constants['LOCKED']

    @property
    def WAITING(self):
        """Message constant 'WAITING'."""
        return Metaclass_BEStatus.__constants['WAITING']

    @property
    def SWITCHING(self):
        """Message constant 'SWITCHING'."""
        return Metaclass_BEStatus.__constants['SWITCHING']

    @property
    def WARNING(self):
        """Message constant 'WARNING'."""
        return Metaclass_BEStatus.__constants['WARNING']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_BEStatus.__constants['ERROR']

    @property
    def READY(self):
        """Message constant 'READY'."""
        return Metaclass_BEStatus.__constants['READY']

    @property
    def RUNNING(self):
        """Message constant 'RUNNING'."""
        return Metaclass_BEStatus.__constants['RUNNING']


class BEStatus(metaclass=Metaclass_BEStatus):
    """
    Message class 'BEStatus'.

    Constants:
      STARTED
      FINISHED
      FAILED
      LOCKED
      WAITING
      SWITCHING
      WARNING
      ERROR
      READY
      RUNNING
    """

    __slots__ = [
        '_stamp',
        '_behavior_id',
        '_code',
        '_args',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'behavior_id': 'int32',
        'code': 'uint8',
        'args': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.behavior_id = kwargs.get('behavior_id', int())
        self.code = kwargs.get('code', int())
        self.args = kwargs.get('args', [])

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
        if self.stamp != other.stamp:
            return False
        if self.behavior_id != other.behavior_id:
            return False
        if self.code != other.code:
            return False
        if self.args != other.args:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def behavior_id(self):
        """Message field 'behavior_id'."""
        return self._behavior_id

    @behavior_id.setter
    def behavior_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'behavior_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'behavior_id' field must be an integer in [-2147483648, 2147483647]"
        self._behavior_id = value

    @builtins.property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'code' field must be an unsigned integer in [0, 255]"
        self._code = value

    @builtins.property
    def args(self):
        """Message field 'args'."""
        return self._args

    @args.setter
    def args(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'args' field must be a set or sequence and each value of type 'str'"
        self._args = value
