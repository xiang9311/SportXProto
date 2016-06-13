# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gym.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import common_pb2 as common__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='gym.proto',
  package='com.xiang.proto.gym',
  syntax='proto3',
  serialized_pb=_b('\n\tgym.proto\x12\x13\x63om.xiang.proto.gym\x1a\x0c\x63ommon.proto\"\xba\x01\n\x0cRequest13001\x12.\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1e.com.xiang.proto.RequestCommon\x12\x38\n\x06params\x18\x02 \x01(\x0b\x32(.com.xiang.proto.gym.Request13001.Params\x1a@\n\x06Params\x12\x11\n\tlongitude\x18\x01 \x01(\x02\x12\x10\n\x08latitude\x18\x02 \x01(\x02\x12\x11\n\tpageIndex\x18\x03 \x01(\x05\"\xc6\x01\n\rResponse13001\x12/\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1f.com.xiang.proto.ResponseCommon\x12\x35\n\x04\x64\x61ta\x18\x02 \x01(\x0b\x32\'.com.xiang.proto.gym.Response13001.Data\x1aM\n\x04\x44\x61ta\x12,\n\tbriefGyms\x18\x01 \x03(\x0b\x32\x19.com.xiang.proto.BriefGym\x12\x17\n\x0fmaxCountPerPage\x18\x02 \x01(\x05\"\x91\x01\n\x0cRequest13002\x12.\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1e.com.xiang.proto.RequestCommon\x12\x38\n\x06params\x18\x02 \x01(\x0b\x32(.com.xiang.proto.gym.Request13002.Params\x1a\x17\n\x06Params\x12\r\n\x05gymId\x18\x01 \x01(\x05\"\xde\x01\n\rResponse13002\x12/\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1f.com.xiang.proto.ResponseCommon\x12\x35\n\x04\x64\x61ta\x18\x02 \x01(\x0b\x32\'.com.xiang.proto.gym.Response13002.Data\x1a\x65\n\x04\x44\x61ta\x12-\n\tdetailGym\x18\x01 \x01(\x0b\x32\x1a.com.xiang.proto.DetailGym\x12.\n\nbriefUsers\x18\x02 \x03(\x0b\x32\x1a.com.xiang.proto.BriefUser\"\xb6\x01\n\x0cRequest13003\x12.\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1e.com.xiang.proto.RequestCommon\x12\x38\n\x06params\x18\x02 \x01(\x0b\x32(.com.xiang.proto.gym.Request13003.Params\x1a<\n\x06Params\x12\r\n\x05gymId\x18\x03 \x01(\x05\x12\x11\n\tlongitude\x18\x01 \x01(\x02\x12\x10\n\x08latitude\x18\x02 \x01(\x02\"\x80\x02\n\rResponse13003\x12/\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1f.com.xiang.proto.ResponseCommon\x12\x35\n\x04\x64\x61ta\x18\x02 \x01(\x0b\x32\'.com.xiang.proto.gym.Response13003.Data\x1a\x86\x01\n\x04\x44\x61ta\x12+\n\x08\x62riefGym\x18\x01 \x01(\x0b\x32\x19.com.xiang.proto.BriefGym\x12\x0f\n\x07userNum\x18\x02 \x01(\x05\x12\x10\n\x08trendNum\x18\x03 \x01(\x05\x12.\n\nbriefUsers\x18\x04 \x03(\x0b\x32\x1a.com.xiang.proto.BriefUser\"\xa4\x01\n\x0cRequest13004\x12.\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1e.com.xiang.proto.RequestCommon\x12\x38\n\x06params\x18\x02 \x01(\x0b\x32(.com.xiang.proto.gym.Request13004.Params\x1a*\n\x06Params\x12\r\n\x05gymId\x18\x01 \x01(\x05\x12\x11\n\tpageIndex\x18\x02 \x01(\x05\"\xc0\x01\n\rResponse13004\x12/\n\x06\x63ommon\x18\x01 \x01(\x0b\x32\x1f.com.xiang.proto.ResponseCommon\x12\x35\n\x04\x64\x61ta\x18\x02 \x01(\x0b\x32\'.com.xiang.proto.gym.Response13004.Data\x1aG\n\x04\x44\x61ta\x12&\n\x06trends\x18\x01 \x03(\x0b\x32\x16.com.xiang.proto.Trend\x12\x17\n\x0fmaxCountPerPage\x18\x02 \x01(\x05\x62\x06proto3')
  ,
  dependencies=[common__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_REQUEST13001_PARAMS = _descriptor.Descriptor(
  name='Params',
  full_name='com.xiang.proto.gym.Request13001.Params',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='longitude', full_name='com.xiang.proto.gym.Request13001.Params.longitude', index=0,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='latitude', full_name='com.xiang.proto.gym.Request13001.Params.latitude', index=1,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pageIndex', full_name='com.xiang.proto.gym.Request13001.Params.pageIndex', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=171,
  serialized_end=235,
)

_REQUEST13001 = _descriptor.Descriptor(
  name='Request13001',
  full_name='com.xiang.proto.gym.Request13001',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.gym.Request13001.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='params', full_name='com.xiang.proto.gym.Request13001.params', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_REQUEST13001_PARAMS, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=49,
  serialized_end=235,
)


_RESPONSE13001_DATA = _descriptor.Descriptor(
  name='Data',
  full_name='com.xiang.proto.gym.Response13001.Data',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='briefGyms', full_name='com.xiang.proto.gym.Response13001.Data.briefGyms', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='maxCountPerPage', full_name='com.xiang.proto.gym.Response13001.Data.maxCountPerPage', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=359,
  serialized_end=436,
)

_RESPONSE13001 = _descriptor.Descriptor(
  name='Response13001',
  full_name='com.xiang.proto.gym.Response13001',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.gym.Response13001.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='com.xiang.proto.gym.Response13001.data', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_RESPONSE13001_DATA, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=238,
  serialized_end=436,
)


_REQUEST13002_PARAMS = _descriptor.Descriptor(
  name='Params',
  full_name='com.xiang.proto.gym.Request13002.Params',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='gymId', full_name='com.xiang.proto.gym.Request13002.Params.gymId', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=561,
  serialized_end=584,
)

_REQUEST13002 = _descriptor.Descriptor(
  name='Request13002',
  full_name='com.xiang.proto.gym.Request13002',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.gym.Request13002.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='params', full_name='com.xiang.proto.gym.Request13002.params', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_REQUEST13002_PARAMS, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=439,
  serialized_end=584,
)


_RESPONSE13002_DATA = _descriptor.Descriptor(
  name='Data',
  full_name='com.xiang.proto.gym.Response13002.Data',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='detailGym', full_name='com.xiang.proto.gym.Response13002.Data.detailGym', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='briefUsers', full_name='com.xiang.proto.gym.Response13002.Data.briefUsers', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=708,
  serialized_end=809,
)

_RESPONSE13002 = _descriptor.Descriptor(
  name='Response13002',
  full_name='com.xiang.proto.gym.Response13002',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.gym.Response13002.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='com.xiang.proto.gym.Response13002.data', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_RESPONSE13002_DATA, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=587,
  serialized_end=809,
)


_REQUEST13003_PARAMS = _descriptor.Descriptor(
  name='Params',
  full_name='com.xiang.proto.gym.Request13003.Params',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='gymId', full_name='com.xiang.proto.gym.Request13003.Params.gymId', index=0,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='longitude', full_name='com.xiang.proto.gym.Request13003.Params.longitude', index=1,
      number=1, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='latitude', full_name='com.xiang.proto.gym.Request13003.Params.latitude', index=2,
      number=2, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=934,
  serialized_end=994,
)

_REQUEST13003 = _descriptor.Descriptor(
  name='Request13003',
  full_name='com.xiang.proto.gym.Request13003',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.gym.Request13003.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='params', full_name='com.xiang.proto.gym.Request13003.params', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_REQUEST13003_PARAMS, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=812,
  serialized_end=994,
)


_RESPONSE13003_DATA = _descriptor.Descriptor(
  name='Data',
  full_name='com.xiang.proto.gym.Response13003.Data',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='briefGym', full_name='com.xiang.proto.gym.Response13003.Data.briefGym', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='userNum', full_name='com.xiang.proto.gym.Response13003.Data.userNum', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='trendNum', full_name='com.xiang.proto.gym.Response13003.Data.trendNum', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='briefUsers', full_name='com.xiang.proto.gym.Response13003.Data.briefUsers', index=3,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1119,
  serialized_end=1253,
)

_RESPONSE13003 = _descriptor.Descriptor(
  name='Response13003',
  full_name='com.xiang.proto.gym.Response13003',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.gym.Response13003.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='com.xiang.proto.gym.Response13003.data', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_RESPONSE13003_DATA, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=997,
  serialized_end=1253,
)


_REQUEST13004_PARAMS = _descriptor.Descriptor(
  name='Params',
  full_name='com.xiang.proto.gym.Request13004.Params',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='gymId', full_name='com.xiang.proto.gym.Request13004.Params.gymId', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pageIndex', full_name='com.xiang.proto.gym.Request13004.Params.pageIndex', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1378,
  serialized_end=1420,
)

_REQUEST13004 = _descriptor.Descriptor(
  name='Request13004',
  full_name='com.xiang.proto.gym.Request13004',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.gym.Request13004.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='params', full_name='com.xiang.proto.gym.Request13004.params', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_REQUEST13004_PARAMS, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1256,
  serialized_end=1420,
)


_RESPONSE13004_DATA = _descriptor.Descriptor(
  name='Data',
  full_name='com.xiang.proto.gym.Response13004.Data',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='trends', full_name='com.xiang.proto.gym.Response13004.Data.trends', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='maxCountPerPage', full_name='com.xiang.proto.gym.Response13004.Data.maxCountPerPage', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1544,
  serialized_end=1615,
)

_RESPONSE13004 = _descriptor.Descriptor(
  name='Response13004',
  full_name='com.xiang.proto.gym.Response13004',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='common', full_name='com.xiang.proto.gym.Response13004.common', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='data', full_name='com.xiang.proto.gym.Response13004.data', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_RESPONSE13004_DATA, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1423,
  serialized_end=1615,
)

_REQUEST13001_PARAMS.containing_type = _REQUEST13001
_REQUEST13001.fields_by_name['common'].message_type = common__pb2._REQUESTCOMMON
_REQUEST13001.fields_by_name['params'].message_type = _REQUEST13001_PARAMS
_RESPONSE13001_DATA.fields_by_name['briefGyms'].message_type = common__pb2._BRIEFGYM
_RESPONSE13001_DATA.containing_type = _RESPONSE13001
_RESPONSE13001.fields_by_name['common'].message_type = common__pb2._RESPONSECOMMON
_RESPONSE13001.fields_by_name['data'].message_type = _RESPONSE13001_DATA
_REQUEST13002_PARAMS.containing_type = _REQUEST13002
_REQUEST13002.fields_by_name['common'].message_type = common__pb2._REQUESTCOMMON
_REQUEST13002.fields_by_name['params'].message_type = _REQUEST13002_PARAMS
_RESPONSE13002_DATA.fields_by_name['detailGym'].message_type = common__pb2._DETAILGYM
_RESPONSE13002_DATA.fields_by_name['briefUsers'].message_type = common__pb2._BRIEFUSER
_RESPONSE13002_DATA.containing_type = _RESPONSE13002
_RESPONSE13002.fields_by_name['common'].message_type = common__pb2._RESPONSECOMMON
_RESPONSE13002.fields_by_name['data'].message_type = _RESPONSE13002_DATA
_REQUEST13003_PARAMS.containing_type = _REQUEST13003
_REQUEST13003.fields_by_name['common'].message_type = common__pb2._REQUESTCOMMON
_REQUEST13003.fields_by_name['params'].message_type = _REQUEST13003_PARAMS
_RESPONSE13003_DATA.fields_by_name['briefGym'].message_type = common__pb2._BRIEFGYM
_RESPONSE13003_DATA.fields_by_name['briefUsers'].message_type = common__pb2._BRIEFUSER
_RESPONSE13003_DATA.containing_type = _RESPONSE13003
_RESPONSE13003.fields_by_name['common'].message_type = common__pb2._RESPONSECOMMON
_RESPONSE13003.fields_by_name['data'].message_type = _RESPONSE13003_DATA
_REQUEST13004_PARAMS.containing_type = _REQUEST13004
_REQUEST13004.fields_by_name['common'].message_type = common__pb2._REQUESTCOMMON
_REQUEST13004.fields_by_name['params'].message_type = _REQUEST13004_PARAMS
_RESPONSE13004_DATA.fields_by_name['trends'].message_type = common__pb2._TREND
_RESPONSE13004_DATA.containing_type = _RESPONSE13004
_RESPONSE13004.fields_by_name['common'].message_type = common__pb2._RESPONSECOMMON
_RESPONSE13004.fields_by_name['data'].message_type = _RESPONSE13004_DATA
DESCRIPTOR.message_types_by_name['Request13001'] = _REQUEST13001
DESCRIPTOR.message_types_by_name['Response13001'] = _RESPONSE13001
DESCRIPTOR.message_types_by_name['Request13002'] = _REQUEST13002
DESCRIPTOR.message_types_by_name['Response13002'] = _RESPONSE13002
DESCRIPTOR.message_types_by_name['Request13003'] = _REQUEST13003
DESCRIPTOR.message_types_by_name['Response13003'] = _RESPONSE13003
DESCRIPTOR.message_types_by_name['Request13004'] = _REQUEST13004
DESCRIPTOR.message_types_by_name['Response13004'] = _RESPONSE13004

Request13001 = _reflection.GeneratedProtocolMessageType('Request13001', (_message.Message,), dict(

  Params = _reflection.GeneratedProtocolMessageType('Params', (_message.Message,), dict(
    DESCRIPTOR = _REQUEST13001_PARAMS,
    __module__ = 'gym_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Request13001.Params)
    ))
  ,
  DESCRIPTOR = _REQUEST13001,
  __module__ = 'gym_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Request13001)
  ))
_sym_db.RegisterMessage(Request13001)
_sym_db.RegisterMessage(Request13001.Params)

Response13001 = _reflection.GeneratedProtocolMessageType('Response13001', (_message.Message,), dict(

  Data = _reflection.GeneratedProtocolMessageType('Data', (_message.Message,), dict(
    DESCRIPTOR = _RESPONSE13001_DATA,
    __module__ = 'gym_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Response13001.Data)
    ))
  ,
  DESCRIPTOR = _RESPONSE13001,
  __module__ = 'gym_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Response13001)
  ))
_sym_db.RegisterMessage(Response13001)
_sym_db.RegisterMessage(Response13001.Data)

Request13002 = _reflection.GeneratedProtocolMessageType('Request13002', (_message.Message,), dict(

  Params = _reflection.GeneratedProtocolMessageType('Params', (_message.Message,), dict(
    DESCRIPTOR = _REQUEST13002_PARAMS,
    __module__ = 'gym_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Request13002.Params)
    ))
  ,
  DESCRIPTOR = _REQUEST13002,
  __module__ = 'gym_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Request13002)
  ))
_sym_db.RegisterMessage(Request13002)
_sym_db.RegisterMessage(Request13002.Params)

Response13002 = _reflection.GeneratedProtocolMessageType('Response13002', (_message.Message,), dict(

  Data = _reflection.GeneratedProtocolMessageType('Data', (_message.Message,), dict(
    DESCRIPTOR = _RESPONSE13002_DATA,
    __module__ = 'gym_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Response13002.Data)
    ))
  ,
  DESCRIPTOR = _RESPONSE13002,
  __module__ = 'gym_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Response13002)
  ))
_sym_db.RegisterMessage(Response13002)
_sym_db.RegisterMessage(Response13002.Data)

Request13003 = _reflection.GeneratedProtocolMessageType('Request13003', (_message.Message,), dict(

  Params = _reflection.GeneratedProtocolMessageType('Params', (_message.Message,), dict(
    DESCRIPTOR = _REQUEST13003_PARAMS,
    __module__ = 'gym_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Request13003.Params)
    ))
  ,
  DESCRIPTOR = _REQUEST13003,
  __module__ = 'gym_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Request13003)
  ))
_sym_db.RegisterMessage(Request13003)
_sym_db.RegisterMessage(Request13003.Params)

Response13003 = _reflection.GeneratedProtocolMessageType('Response13003', (_message.Message,), dict(

  Data = _reflection.GeneratedProtocolMessageType('Data', (_message.Message,), dict(
    DESCRIPTOR = _RESPONSE13003_DATA,
    __module__ = 'gym_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Response13003.Data)
    ))
  ,
  DESCRIPTOR = _RESPONSE13003,
  __module__ = 'gym_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Response13003)
  ))
_sym_db.RegisterMessage(Response13003)
_sym_db.RegisterMessage(Response13003.Data)

Request13004 = _reflection.GeneratedProtocolMessageType('Request13004', (_message.Message,), dict(

  Params = _reflection.GeneratedProtocolMessageType('Params', (_message.Message,), dict(
    DESCRIPTOR = _REQUEST13004_PARAMS,
    __module__ = 'gym_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Request13004.Params)
    ))
  ,
  DESCRIPTOR = _REQUEST13004,
  __module__ = 'gym_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Request13004)
  ))
_sym_db.RegisterMessage(Request13004)
_sym_db.RegisterMessage(Request13004.Params)

Response13004 = _reflection.GeneratedProtocolMessageType('Response13004', (_message.Message,), dict(

  Data = _reflection.GeneratedProtocolMessageType('Data', (_message.Message,), dict(
    DESCRIPTOR = _RESPONSE13004_DATA,
    __module__ = 'gym_pb2'
    # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Response13004.Data)
    ))
  ,
  DESCRIPTOR = _RESPONSE13004,
  __module__ = 'gym_pb2'
  # @@protoc_insertion_point(class_scope:com.xiang.proto.gym.Response13004)
  ))
_sym_db.RegisterMessage(Response13004)
_sym_db.RegisterMessage(Response13004.Data)


# @@protoc_insertion_point(module_scope)
