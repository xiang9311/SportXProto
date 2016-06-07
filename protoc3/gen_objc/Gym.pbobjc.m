// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gym.proto

#import "GPBProtocolBuffers_RuntimeSupport.h"
#import "Gym.pbobjc.h"
#import "Common.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - GymRoot

@implementation GymRoot

+ (GPBExtensionRegistry*)extensionRegistry {
  // This is called by +initialize so there is no need to worry
  // about thread safety and initialization of registry.
  static GPBExtensionRegistry* registry = nil;
  if (!registry) {
    GPBDebugCheckRuntimeVersion();
    registry = [[GPBExtensionRegistry alloc] init];
    [registry addExtensions:[CommonRoot extensionRegistry]];
  }
  return registry;
}

@end

#pragma mark - GymRoot_FileDescriptor

static GPBFileDescriptor *GymRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPBDebugCheckRuntimeVersion();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"com.xiang.proto.gym"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - Request13001

@implementation Request13001

@dynamic hasCommon, common;
@dynamic hasParams, params;

typedef struct Request13001__storage_ {
  uint32_t _has_storage_[1];
  RequestCommon *common;
  Request13001_Params *params;
} Request13001__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .dataTypeSpecific.className = GPBStringifySymbol(RequestCommon),
        .number = Request13001_FieldNumber_Common,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Request13001__storage_, common),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "params",
        .dataTypeSpecific.className = GPBStringifySymbol(Request13001_Params),
        .number = Request13001_FieldNumber_Params,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Request13001__storage_, params),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request13001 class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Request13001__storage_)
                                         flags:0];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Request13001_Params

@implementation Request13001_Params

@dynamic longitude;
@dynamic latitude;
@dynamic pageIndex;

typedef struct Request13001_Params__storage_ {
  uint32_t _has_storage_[1];
  float longitude;
  float latitude;
  int32_t pageIndex;
} Request13001_Params__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "longitude",
        .dataTypeSpecific.className = NULL,
        .number = Request13001_Params_FieldNumber_Longitude,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Request13001_Params__storage_, longitude),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "latitude",
        .dataTypeSpecific.className = NULL,
        .number = Request13001_Params_FieldNumber_Latitude,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Request13001_Params__storage_, latitude),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "pageIndex",
        .dataTypeSpecific.className = NULL,
        .number = Request13001_Params_FieldNumber_PageIndex,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(Request13001_Params__storage_, pageIndex),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request13001_Params class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Request13001_Params__storage_)
                                         flags:0];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\001\003\t\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response13001

@implementation Response13001

@dynamic hasCommon, common;
@dynamic hasData_p, data_p;

typedef struct Response13001__storage_ {
  uint32_t _has_storage_[1];
  ResponseCommon *common;
  Response13001_Data *data_p;
} Response13001__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .dataTypeSpecific.className = GPBStringifySymbol(ResponseCommon),
        .number = Response13001_FieldNumber_Common,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Response13001__storage_, common),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "data_p",
        .dataTypeSpecific.className = GPBStringifySymbol(Response13001_Data),
        .number = Response13001_FieldNumber_Data_p,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Response13001__storage_, data_p),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response13001 class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Response13001__storage_)
                                         flags:0];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response13001_Data

@implementation Response13001_Data

@dynamic briefGymsArray, briefGymsArray_Count;
@dynamic maxCountPerPage;

typedef struct Response13001_Data__storage_ {
  uint32_t _has_storage_[1];
  int32_t maxCountPerPage;
  NSMutableArray *briefGymsArray;
} Response13001_Data__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "briefGymsArray",
        .dataTypeSpecific.className = GPBStringifySymbol(BriefGym),
        .number = Response13001_Data_FieldNumber_BriefGymsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Response13001_Data__storage_, briefGymsArray),
        .flags = GPBFieldRepeated | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "maxCountPerPage",
        .dataTypeSpecific.className = NULL,
        .number = Response13001_Data_FieldNumber_MaxCountPerPage,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Response13001_Data__storage_, maxCountPerPage),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response13001_Data class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Response13001_Data__storage_)
                                         flags:0];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\002\001\000briefGyms\000\002\017\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Request13002

@implementation Request13002

@dynamic hasCommon, common;
@dynamic hasParams, params;

typedef struct Request13002__storage_ {
  uint32_t _has_storage_[1];
  RequestCommon *common;
  Request13002_Params *params;
} Request13002__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .dataTypeSpecific.className = GPBStringifySymbol(RequestCommon),
        .number = Request13002_FieldNumber_Common,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Request13002__storage_, common),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "params",
        .dataTypeSpecific.className = GPBStringifySymbol(Request13002_Params),
        .number = Request13002_FieldNumber_Params,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Request13002__storage_, params),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request13002 class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Request13002__storage_)
                                         flags:0];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Request13002_Params

@implementation Request13002_Params

@dynamic gymId;

typedef struct Request13002_Params__storage_ {
  uint32_t _has_storage_[1];
  int32_t gymId;
} Request13002_Params__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "gymId",
        .dataTypeSpecific.className = NULL,
        .number = Request13002_Params_FieldNumber_GymId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Request13002_Params__storage_, gymId),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request13002_Params class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Request13002_Params__storage_)
                                         flags:0];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\001\001\005\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response13002

@implementation Response13002

@dynamic hasCommon, common;
@dynamic hasData_p, data_p;

typedef struct Response13002__storage_ {
  uint32_t _has_storage_[1];
  ResponseCommon *common;
  Response13002_Data *data_p;
} Response13002__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .dataTypeSpecific.className = GPBStringifySymbol(ResponseCommon),
        .number = Response13002_FieldNumber_Common,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Response13002__storage_, common),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "data_p",
        .dataTypeSpecific.className = GPBStringifySymbol(Response13002_Data),
        .number = Response13002_FieldNumber_Data_p,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Response13002__storage_, data_p),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response13002 class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Response13002__storage_)
                                         flags:0];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response13002_Data

@implementation Response13002_Data

@dynamic hasDetailGym, detailGym;
@dynamic briefUsersArray, briefUsersArray_Count;

typedef struct Response13002_Data__storage_ {
  uint32_t _has_storage_[1];
  DetailGym *detailGym;
  NSMutableArray *briefUsersArray;
} Response13002_Data__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "detailGym",
        .dataTypeSpecific.className = GPBStringifySymbol(DetailGym),
        .number = Response13002_Data_FieldNumber_DetailGym,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Response13002_Data__storage_, detailGym),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "briefUsersArray",
        .dataTypeSpecific.className = GPBStringifySymbol(BriefUser),
        .number = Response13002_Data_FieldNumber_BriefUsersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Response13002_Data__storage_, briefUsersArray),
        .flags = GPBFieldRepeated | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response13002_Data class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Response13002_Data__storage_)
                                         flags:0];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\002\001\t\000\002\000briefUsers\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Request13003

@implementation Request13003

@dynamic hasCommon, common;
@dynamic hasParams, params;

typedef struct Request13003__storage_ {
  uint32_t _has_storage_[1];
  RequestCommon *common;
  Request13003_Params *params;
} Request13003__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .dataTypeSpecific.className = GPBStringifySymbol(RequestCommon),
        .number = Request13003_FieldNumber_Common,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Request13003__storage_, common),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "params",
        .dataTypeSpecific.className = GPBStringifySymbol(Request13003_Params),
        .number = Request13003_FieldNumber_Params,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Request13003__storage_, params),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request13003 class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Request13003__storage_)
                                         flags:0];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Request13003_Params

@implementation Request13003_Params

@dynamic longitude;
@dynamic latitude;
@dynamic wantGymId;

typedef struct Request13003_Params__storage_ {
  uint32_t _has_storage_[1];
  float longitude;
  float latitude;
  int32_t wantGymId;
} Request13003_Params__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "longitude",
        .dataTypeSpecific.className = NULL,
        .number = Request13003_Params_FieldNumber_Longitude,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Request13003_Params__storage_, longitude),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "latitude",
        .dataTypeSpecific.className = NULL,
        .number = Request13003_Params_FieldNumber_Latitude,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Request13003_Params__storage_, latitude),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeFloat,
      },
      {
        .name = "wantGymId",
        .dataTypeSpecific.className = NULL,
        .number = Request13003_Params_FieldNumber_WantGymId,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(Request13003_Params__storage_, wantGymId),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request13003_Params class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Request13003_Params__storage_)
                                         flags:0];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\001\003\t\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response13003

@implementation Response13003

@dynamic hasCommon, common;
@dynamic hasData_p, data_p;

typedef struct Response13003__storage_ {
  uint32_t _has_storage_[1];
  ResponseCommon *common;
  Response13003_Data *data_p;
} Response13003__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .dataTypeSpecific.className = GPBStringifySymbol(ResponseCommon),
        .number = Response13003_FieldNumber_Common,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Response13003__storage_, common),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "data_p",
        .dataTypeSpecific.className = GPBStringifySymbol(Response13003_Data),
        .number = Response13003_FieldNumber_Data_p,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Response13003__storage_, data_p),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response13003 class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Response13003__storage_)
                                         flags:0];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response13003_Data

@implementation Response13003_Data

@dynamic hasBriefGym, briefGym;
@dynamic userNum;
@dynamic trendNum;
@dynamic briefUsersArray, briefUsersArray_Count;

typedef struct Response13003_Data__storage_ {
  uint32_t _has_storage_[1];
  int32_t userNum;
  int32_t trendNum;
  BriefGym *briefGym;
  NSMutableArray *briefUsersArray;
} Response13003_Data__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "briefGym",
        .dataTypeSpecific.className = GPBStringifySymbol(BriefGym),
        .number = Response13003_Data_FieldNumber_BriefGym,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Response13003_Data__storage_, briefGym),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "userNum",
        .dataTypeSpecific.className = NULL,
        .number = Response13003_Data_FieldNumber_UserNum,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Response13003_Data__storage_, userNum),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "trendNum",
        .dataTypeSpecific.className = NULL,
        .number = Response13003_Data_FieldNumber_TrendNum,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(Response13003_Data__storage_, trendNum),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "briefUsersArray",
        .dataTypeSpecific.className = GPBStringifySymbol(BriefUser),
        .number = Response13003_Data_FieldNumber_BriefUsersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Response13003_Data__storage_, briefUsersArray),
        .flags = GPBFieldRepeated | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response13003_Data class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Response13003_Data__storage_)
                                         flags:0];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\004\001\010\000\002\007\000\003\010\000\004\000briefUsers\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Request13004

@implementation Request13004

@dynamic hasCommon, common;
@dynamic hasParams, params;

typedef struct Request13004__storage_ {
  uint32_t _has_storage_[1];
  RequestCommon *common;
  Request13004_Params *params;
} Request13004__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .dataTypeSpecific.className = GPBStringifySymbol(RequestCommon),
        .number = Request13004_FieldNumber_Common,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Request13004__storage_, common),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "params",
        .dataTypeSpecific.className = GPBStringifySymbol(Request13004_Params),
        .number = Request13004_FieldNumber_Params,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Request13004__storage_, params),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request13004 class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Request13004__storage_)
                                         flags:0];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Request13004_Params

@implementation Request13004_Params

@dynamic gymId;
@dynamic pageIndex;

typedef struct Request13004_Params__storage_ {
  uint32_t _has_storage_[1];
  int32_t gymId;
  int32_t pageIndex;
} Request13004_Params__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "gymId",
        .dataTypeSpecific.className = NULL,
        .number = Request13004_Params_FieldNumber_GymId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Request13004_Params__storage_, gymId),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "pageIndex",
        .dataTypeSpecific.className = NULL,
        .number = Request13004_Params_FieldNumber_PageIndex,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Request13004_Params__storage_, pageIndex),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Request13004_Params class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Request13004_Params__storage_)
                                         flags:0];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\002\001\005\000\002\t\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response13004

@implementation Response13004

@dynamic hasCommon, common;
@dynamic hasData_p, data_p;

typedef struct Response13004__storage_ {
  uint32_t _has_storage_[1];
  ResponseCommon *common;
  Response13004_Data *data_p;
} Response13004__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "common",
        .dataTypeSpecific.className = GPBStringifySymbol(ResponseCommon),
        .number = Response13004_FieldNumber_Common,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Response13004__storage_, common),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "data_p",
        .dataTypeSpecific.className = GPBStringifySymbol(Response13004_Data),
        .number = Response13004_FieldNumber_Data_p,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Response13004__storage_, data_p),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response13004 class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Response13004__storage_)
                                         flags:0];
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - Response13004_Data

@implementation Response13004_Data

@dynamic trendsArray, trendsArray_Count;
@dynamic maxCountPerPage;

typedef struct Response13004_Data__storage_ {
  uint32_t _has_storage_[1];
  int32_t maxCountPerPage;
  NSMutableArray *trendsArray;
} Response13004_Data__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "trendsArray",
        .dataTypeSpecific.className = GPBStringifySymbol(Trend),
        .number = Response13004_Data_FieldNumber_TrendsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Response13004_Data__storage_, trendsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "maxCountPerPage",
        .dataTypeSpecific.className = NULL,
        .number = Response13004_Data_FieldNumber_MaxCountPerPage,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Response13004_Data__storage_, maxCountPerPage),
        .flags = GPBFieldOptional | GPBFieldTextFormatNameCustom,
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Response13004_Data class]
                                     rootClass:[GymRoot class]
                                          file:GymRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Response13004_Data__storage_)
                                         flags:0];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\001\002\017\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    NSAssert(descriptor == nil, @"Startup recursed!");
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
