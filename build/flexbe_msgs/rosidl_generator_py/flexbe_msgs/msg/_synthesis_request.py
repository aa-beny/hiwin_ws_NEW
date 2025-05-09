# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flexbe_msgs:msg/SynthesisRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SynthesisRequest(type):
    """Metaclass of message 'SynthesisRequest'."""

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
                'flexbe_msgs.msg.SynthesisRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__synthesis_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__synthesis_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__synthesis_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__synthesis_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__synthesis_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SynthesisRequest(metaclass=Metaclass_SynthesisRequest):
    """Message class 'SynthesisRequest'."""

    __slots__ = [
        '_name',
        '_system',
        '_goal',
        '_initial_condition',
        '_sm_outcomes',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'system': 'string',
        'goal': 'string',
        'initial_condition': 'string',
        'sm_outcomes': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.system = kwargs.get('system', str())
        self.goal = kwargs.get('goal', str())
        self.initial_condition = kwargs.get('initial_condition', str())
        self.sm_outcomes = kwargs.get('sm_outcomes', [])

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
        if self.name != other.name:
            return False
        if self.system != other.system:
            return False
        if self.goal != other.goal:
            return False
        if self.initial_condition != other.initial_condition:
            return False
        if self.sm_outcomes != other.sm_outcomes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def system(self):
        """Message field 'system'."""
        return self._system

    @system.setter
    def system(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'system' field must be of type 'str'"
        self._system = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'goal' field must be of type 'str'"
        self._goal = value

    @builtins.property
    def initial_condition(self):
        """Message field 'initial_condition'."""
        return self._initial_condition

    @initial_condition.setter
    def initial_condition(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'initial_condition' field must be of type 'str'"
        self._initial_condition = value

    @builtins.property
    def sm_outcomes(self):
        """Message field 'sm_outcomes'."""
        return self._sm_outcomes

    @sm_outcomes.setter
    def sm_outcomes(self, value):
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
                "The 'sm_outcomes' field must be a set or sequence and each value of type 'str'"
        self._sm_outcomes = value
