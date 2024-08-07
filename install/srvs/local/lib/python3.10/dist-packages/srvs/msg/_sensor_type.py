# generated from rosidl_generator_py/resource/_idl.py.em
# with input from srvs:msg/SensorType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorType(type):
    """Metaclass of message 'SensorType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNDEFINED': 0,
        'CAMERA': 1,
        'MIC': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'srvs.msg.SensorType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNDEFINED': cls.__constants['UNDEFINED'],
            'CAMERA': cls.__constants['CAMERA'],
            'MIC': cls.__constants['MIC'],
        }

    @property
    def UNDEFINED(self):
        """Message constant 'UNDEFINED'."""
        return Metaclass_SensorType.__constants['UNDEFINED']

    @property
    def CAMERA(self):
        """Message constant 'CAMERA'."""
        return Metaclass_SensorType.__constants['CAMERA']

    @property
    def MIC(self):
        """Message constant 'MIC'."""
        return Metaclass_SensorType.__constants['MIC']


class SensorType(metaclass=Metaclass_SensorType):
    """
    Message class 'SensorType'.

    Constants:
      UNDEFINED
      CAMERA
      MIC
    """

    __slots__ = [
        '_sensor_type',
    ]

    _fields_and_field_types = {
        'sensor_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensor_type = kwargs.get('sensor_type', int())

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
        if self.sensor_type != other.sensor_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor_type(self):
        """Message field 'sensor_type'."""
        return self._sensor_type

    @sensor_type.setter
    def sensor_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_type' field must be an unsigned integer in [0, 255]"
        self._sensor_type = value
