# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flexbe_msgs:msg/BehaviorRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BehaviorRequest(type):
    """Metaclass of message 'BehaviorRequest'."""

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
            module = import_type_support('flexbe_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flexbe_msgs.msg.BehaviorRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__behavior_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__behavior_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__behavior_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__behavior_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__behavior_request

            from flexbe_msgs.msg import Container
            if Container.__class__._TYPE_SUPPORT is None:
                Container.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BehaviorRequest(metaclass=Metaclass_BehaviorRequest):
    """Message class 'BehaviorRequest'."""

    __slots__ = [
        '_behavior_name',
        '_autonomy_level',
        '_arg_keys',
        '_arg_values',
        '_structure',
    ]

    _fields_and_field_types = {
        'behavior_name': 'string',
        'autonomy_level': 'uint8',
        'arg_keys': 'sequence<string>',
        'arg_values': 'sequence<string>',
        'structure': 'sequence<flexbe_msgs/Container>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['flexbe_msgs', 'msg'], 'Container')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.behavior_name = kwargs.get('behavior_name', str())
        self.autonomy_level = kwargs.get('autonomy_level', int())
        self.arg_keys = kwargs.get('arg_keys', [])
        self.arg_values = kwargs.get('arg_values', [])
        self.structure = kwargs.get('structure', [])

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
        if self.behavior_name != other.behavior_name:
            return False
        if self.autonomy_level != other.autonomy_level:
            return False
        if self.arg_keys != other.arg_keys:
            return False
        if self.arg_values != other.arg_values:
            return False
        if self.structure != other.structure:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def behavior_name(self):
        """Message field 'behavior_name'."""
        return self._behavior_name

    @behavior_name.setter
    def behavior_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'behavior_name' field must be of type 'str'"
        self._behavior_name = value

    @builtins.property
    def autonomy_level(self):
        """Message field 'autonomy_level'."""
        return self._autonomy_level

    @autonomy_level.setter
    def autonomy_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'autonomy_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'autonomy_level' field must be an unsigned integer in [0, 255]"
        self._autonomy_level = value

    @builtins.property
    def arg_keys(self):
        """Message field 'arg_keys'."""
        return self._arg_keys

    @arg_keys.setter
    def arg_keys(self, value):
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
                "The 'arg_keys' field must be a set or sequence and each value of type 'str'"
        self._arg_keys = value

    @builtins.property
    def arg_values(self):
        """Message field 'arg_values'."""
        return self._arg_values

    @arg_values.setter
    def arg_values(self, value):
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
                "The 'arg_values' field must be a set or sequence and each value of type 'str'"
        self._arg_values = value

    @builtins.property
    def structure(self):
        """Message field 'structure'."""
        return self._structure

    @structure.setter
    def structure(self, value):
        if __debug__:
            from flexbe_msgs.msg import Container
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
                 all(isinstance(v, Container) for v in value) and
                 True), \
                "The 'structure' field must be a set or sequence and each value of type 'Container'"
        self._structure = value
