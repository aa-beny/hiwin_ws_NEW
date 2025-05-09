# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flexbe_msgs:msg/StateInstantiation.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'autonomy'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateInstantiation(type):
    """Metaclass of message 'StateInstantiation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CLASS_STATEMACHINE': ':STATEMACHINE',
        'CLASS_CONCURRENCY': ':CONCURRENCY',
        'CLASS_PRIORITY': ':PRIORITY',
        'CLASS_BEHAVIOR': ':BEHAVIOR',
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
                'flexbe_msgs.msg.StateInstantiation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_instantiation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_instantiation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_instantiation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_instantiation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_instantiation

            from flexbe_msgs.msg import OutcomeCondition
            if OutcomeCondition.__class__._TYPE_SUPPORT is None:
                OutcomeCondition.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CLASS_STATEMACHINE': cls.__constants['CLASS_STATEMACHINE'],
            'CLASS_CONCURRENCY': cls.__constants['CLASS_CONCURRENCY'],
            'CLASS_PRIORITY': cls.__constants['CLASS_PRIORITY'],
            'CLASS_BEHAVIOR': cls.__constants['CLASS_BEHAVIOR'],
        }

    @property
    def CLASS_STATEMACHINE(self):
        """Message constant 'CLASS_STATEMACHINE'."""
        return Metaclass_StateInstantiation.__constants['CLASS_STATEMACHINE']

    @property
    def CLASS_CONCURRENCY(self):
        """Message constant 'CLASS_CONCURRENCY'."""
        return Metaclass_StateInstantiation.__constants['CLASS_CONCURRENCY']

    @property
    def CLASS_PRIORITY(self):
        """Message constant 'CLASS_PRIORITY'."""
        return Metaclass_StateInstantiation.__constants['CLASS_PRIORITY']

    @property
    def CLASS_BEHAVIOR(self):
        """Message constant 'CLASS_BEHAVIOR'."""
        return Metaclass_StateInstantiation.__constants['CLASS_BEHAVIOR']


class StateInstantiation(metaclass=Metaclass_StateInstantiation):
    """
    Message class 'StateInstantiation'.

    Constants:
      CLASS_STATEMACHINE
      CLASS_CONCURRENCY
      CLASS_PRIORITY
      CLASS_BEHAVIOR
    """

    __slots__ = [
        '_state_path',
        '_state_class',
        '_initial_state_name',
        '_input_keys',
        '_output_keys',
        '_cond_outcome',
        '_cond_transition',
        '_behavior_class',
        '_parameter_names',
        '_parameter_values',
        '_position',
        '_outcomes',
        '_transitions',
        '_autonomy',
        '_userdata_keys',
        '_userdata_remapping',
    ]

    _fields_and_field_types = {
        'state_path': 'string',
        'state_class': 'string',
        'initial_state_name': 'string',
        'input_keys': 'sequence<string>',
        'output_keys': 'sequence<string>',
        'cond_outcome': 'sequence<string>',
        'cond_transition': 'sequence<flexbe_msgs/OutcomeCondition>',
        'behavior_class': 'string',
        'parameter_names': 'sequence<string>',
        'parameter_values': 'sequence<string>',
        'position': 'float[2]',
        'outcomes': 'sequence<string>',
        'transitions': 'sequence<string>',
        'autonomy': 'sequence<int8>',
        'userdata_keys': 'sequence<string>',
        'userdata_remapping': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['flexbe_msgs', 'msg'], 'OutcomeCondition')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state_path = kwargs.get('state_path', str())
        self.state_class = kwargs.get('state_class', str())
        self.initial_state_name = kwargs.get('initial_state_name', str())
        self.input_keys = kwargs.get('input_keys', [])
        self.output_keys = kwargs.get('output_keys', [])
        self.cond_outcome = kwargs.get('cond_outcome', [])
        self.cond_transition = kwargs.get('cond_transition', [])
        self.behavior_class = kwargs.get('behavior_class', str())
        self.parameter_names = kwargs.get('parameter_names', [])
        self.parameter_values = kwargs.get('parameter_values', [])
        if 'position' not in kwargs:
            self.position = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.position = numpy.array(kwargs.get('position'), dtype=numpy.float32)
            assert self.position.shape == (2, )
        self.outcomes = kwargs.get('outcomes', [])
        self.transitions = kwargs.get('transitions', [])
        self.autonomy = array.array('b', kwargs.get('autonomy', []))
        self.userdata_keys = kwargs.get('userdata_keys', [])
        self.userdata_remapping = kwargs.get('userdata_remapping', [])

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
        if self.state_path != other.state_path:
            return False
        if self.state_class != other.state_class:
            return False
        if self.initial_state_name != other.initial_state_name:
            return False
        if self.input_keys != other.input_keys:
            return False
        if self.output_keys != other.output_keys:
            return False
        if self.cond_outcome != other.cond_outcome:
            return False
        if self.cond_transition != other.cond_transition:
            return False
        if self.behavior_class != other.behavior_class:
            return False
        if self.parameter_names != other.parameter_names:
            return False
        if self.parameter_values != other.parameter_values:
            return False
        if all(self.position != other.position):
            return False
        if self.outcomes != other.outcomes:
            return False
        if self.transitions != other.transitions:
            return False
        if self.autonomy != other.autonomy:
            return False
        if self.userdata_keys != other.userdata_keys:
            return False
        if self.userdata_remapping != other.userdata_remapping:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state_path(self):
        """Message field 'state_path'."""
        return self._state_path

    @state_path.setter
    def state_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state_path' field must be of type 'str'"
        self._state_path = value

    @builtins.property
    def state_class(self):
        """Message field 'state_class'."""
        return self._state_class

    @state_class.setter
    def state_class(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state_class' field must be of type 'str'"
        self._state_class = value

    @builtins.property
    def initial_state_name(self):
        """Message field 'initial_state_name'."""
        return self._initial_state_name

    @initial_state_name.setter
    def initial_state_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'initial_state_name' field must be of type 'str'"
        self._initial_state_name = value

    @builtins.property
    def input_keys(self):
        """Message field 'input_keys'."""
        return self._input_keys

    @input_keys.setter
    def input_keys(self, value):
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
                "The 'input_keys' field must be a set or sequence and each value of type 'str'"
        self._input_keys = value

    @builtins.property
    def output_keys(self):
        """Message field 'output_keys'."""
        return self._output_keys

    @output_keys.setter
    def output_keys(self, value):
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
                "The 'output_keys' field must be a set or sequence and each value of type 'str'"
        self._output_keys = value

    @builtins.property
    def cond_outcome(self):
        """Message field 'cond_outcome'."""
        return self._cond_outcome

    @cond_outcome.setter
    def cond_outcome(self, value):
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
                "The 'cond_outcome' field must be a set or sequence and each value of type 'str'"
        self._cond_outcome = value

    @builtins.property
    def cond_transition(self):
        """Message field 'cond_transition'."""
        return self._cond_transition

    @cond_transition.setter
    def cond_transition(self, value):
        if __debug__:
            from flexbe_msgs.msg import OutcomeCondition
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
                 all(isinstance(v, OutcomeCondition) for v in value) and
                 True), \
                "The 'cond_transition' field must be a set or sequence and each value of type 'OutcomeCondition'"
        self._cond_transition = value

    @builtins.property
    def behavior_class(self):
        """Message field 'behavior_class'."""
        return self._behavior_class

    @behavior_class.setter
    def behavior_class(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'behavior_class' field must be of type 'str'"
        self._behavior_class = value

    @builtins.property
    def parameter_names(self):
        """Message field 'parameter_names'."""
        return self._parameter_names

    @parameter_names.setter
    def parameter_names(self, value):
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
                "The 'parameter_names' field must be a set or sequence and each value of type 'str'"
        self._parameter_names = value

    @builtins.property
    def parameter_values(self):
        """Message field 'parameter_values'."""
        return self._parameter_values

    @parameter_values.setter
    def parameter_values(self, value):
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
                "The 'parameter_values' field must be a set or sequence and each value of type 'str'"
        self._parameter_values = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'position' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'position' numpy.ndarray() must have a size of 2"
            self._position = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'position' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position = numpy.array(value, dtype=numpy.float32)

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

    @builtins.property
    def userdata_keys(self):
        """Message field 'userdata_keys'."""
        return self._userdata_keys

    @userdata_keys.setter
    def userdata_keys(self, value):
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
                "The 'userdata_keys' field must be a set or sequence and each value of type 'str'"
        self._userdata_keys = value

    @builtins.property
    def userdata_remapping(self):
        """Message field 'userdata_remapping'."""
        return self._userdata_remapping

    @userdata_remapping.setter
    def userdata_remapping(self, value):
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
                "The 'userdata_remapping' field must be a set or sequence and each value of type 'str'"
        self._userdata_remapping = value
