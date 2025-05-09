# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flexbe_msgs:msg/Container.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'autonomy'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Container(type):
    """Metaclass of message 'Container'."""

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
                'flexbe_msgs.msg.Container')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__container
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__container
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__container
            cls._TYPE_SUPPORT = module.type_support_msg__msg__container
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__container

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Container(metaclass=Metaclass_Container):
    """Message class 'Container'."""

    __slots__ = [
        '_path',
        '_children',
        '_outcomes',
        '_transitions',
        '_autonomy',
    ]

    _fields_and_field_types = {
        'path': 'string',
        'children': 'sequence<string>',
        'outcomes': 'sequence<string>',
        'transitions': 'sequence<string>',
        'autonomy': 'sequence<int8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.path = kwargs.get('path', str())
        self.children = kwargs.get('children', [])
        self.outcomes = kwargs.get('outcomes', [])
        self.transitions = kwargs.get('transitions', [])
        self.autonomy = array.array('b', kwargs.get('autonomy', []))

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
        if self.path != other.path:
            return False
        if self.children != other.children:
            return False
        if self.outcomes != other.outcomes:
            return False
        if self.transitions != other.transitions:
            return False
        if self.autonomy != other.autonomy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'path' field must be of type 'str'"
        self._path = value

    @builtins.property
    def children(self):
        """Message field 'children'."""
        return self._children

    @children.setter
    def children(self, value):
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
                "The 'children' field must be a set or sequence and each value of type 'str'"
        self._children = value

    @builtins.property
    def outcomes(self):
        """Message field 'outcomes'."""
        return self._outcomes

    @outcomes.setter
    def outcomes(self, value):
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
                "The 'outcomes' field must be a set or sequence and each value of type 'str'"
        self._outcomes = value

    @builtins.property
    def transitions(self):
        """Message field 'transitions'."""
        return self._transitions

    @transitions.setter
    def transitions(self, value):
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
                "The 'transitions' field must be a set or sequence and each value of type 'str'"
        self._transitions = value

    @builtins.property
    def autonomy(self):
        """Message field 'autonomy'."""
        return self._autonomy

    @autonomy.setter
    def autonomy(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'autonomy' array.array() must have the type code of 'b'"
            self._autonomy = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'autonomy' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._autonomy = array.array('b', value)
