// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pilot.proto

#import "GPBProtocolBuffers.h"

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30001
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class BriefGym;
@class BriefUser;
@class CommentMessage;
@class DetailUser;
@class Request10001_Params;
@class Request10002_Params;
@class Request10004_Params;
@class Request10005_Params;
@class Request10006_Params;
@class Request10007_Params;
@class Request10008_Params;
@class Request10009_Params;
@class Request10010_Params;
@class Request10011_Params;
@class Request10012_Params;
@class Request10013_Params;
@class Request10014_Params;
@class Request10015_Params;
@class Request10016_Params;
@class Request10017_Params;
@class Request10018_Params;
@class RequestCommon;
@class Response10001_Data;
@class Response10002_Data;
@class Response10004_Data;
@class Response10005_Data;
@class Response10006_Data;
@class Response10007_Data;
@class Response10008_Data;
@class Response10009_Data;
@class Response10010_Data;
@class Response10011_Data;
@class Response10012_Data;
@class Response10013_Data;
@class Response10014_Data;
@class Response10015_Data;
@class Response10016_Data;
@class Response10017_Data;
@class Response10018_Data;
@class ResponseCommon;
@class SearchedUser;
@class Trend;
@class TrendBriefMessage;
GPB_ENUM_FWD_DECLARE(Sex);

NS_ASSUME_NONNULL_BEGIN

#pragma mark - PilotRoot

/// Exposes the extension registry for this file.
///
/// The base class provides:
/// @code
///   + (GPBExtensionRegistry *)extensionRegistry;
/// @endcode
/// which is a @c GPBExtensionRegistry that includes all the extensions defined by
/// this file and all files that it depends on.
@interface PilotRoot : GPBRootObject
@end

#pragma mark - Request10001

typedef GPB_ENUM(Request10001_FieldNumber) {
  Request10001_FieldNumber_Common = 1,
  Request10001_FieldNumber_Params = 2,
};

/// 注册
/// /pilot/register
@interface Request10001 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10001_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10001_Params

typedef GPB_ENUM(Request10001_Params_FieldNumber) {
  Request10001_Params_FieldNumber_Phone = 1,
  Request10001_Params_FieldNumber_Username = 2,
  Request10001_Params_FieldNumber_AvatarKey = 3,
  Request10001_Params_FieldNumber_BucketName = 4,
  Request10001_Params_FieldNumber_Password = 5,
  Request10001_Params_FieldNumber_Sex = 6,
};

@interface Request10001_Params : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *phone;

@property(nonatomic, readwrite, copy, null_resettable) NSString *username;

/// 上传到七牛的key
@property(nonatomic, readwrite, copy, null_resettable) NSString *avatarKey;

/// 上传到七牛的bucket
@property(nonatomic, readwrite, copy, null_resettable) NSString *bucketName;

/// 密码MD5加密
@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@property(nonatomic, readwrite) enum Sex sex;

@end

/// Fetches the raw value of a @c Request10001_Params's @c sex property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t Request10001_Params_Sex_RawValue(Request10001_Params *message);
/// Sets the raw value of an @c Request10001_Params's @c sex property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetRequest10001_Params_Sex_RawValue(Request10001_Params *message, int32_t value);

#pragma mark - Response10001

typedef GPB_ENUM(Response10001_FieldNumber) {
  Response10001_FieldNumber_Common = 1,
  Response10001_FieldNumber_Data_p = 2,
};

@interface Response10001 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10001_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10001_Data

typedef GPB_ENUM(Response10001_Data_FieldNumber) {
  Response10001_Data_FieldNumber_UserId = 1,
  Response10001_Data_FieldNumber_UserKey = 2,
};

@interface Response10001_Data : GPBMessage

/// 返回的用户id
@property(nonatomic, readwrite) int32_t userId;

/// 用户的私钥
@property(nonatomic, readwrite, copy, null_resettable) NSString *userKey;

@end

#pragma mark - Request10002

typedef GPB_ENUM(Request10002_FieldNumber) {
  Request10002_FieldNumber_Common = 1,
  Request10002_FieldNumber_Params = 2,
};

/// 登录
/// /pilot/login
@interface Request10002 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10002_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10002_Params

typedef GPB_ENUM(Request10002_Params_FieldNumber) {
  Request10002_Params_FieldNumber_Phone = 1,
  Request10002_Params_FieldNumber_Password = 2,
};

@interface Request10002_Params : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *phone;

/// 密码MD5加密
@property(nonatomic, readwrite, copy, null_resettable) NSString *password;

@end

#pragma mark - Response10002

typedef GPB_ENUM(Response10002_FieldNumber) {
  Response10002_FieldNumber_Common = 1,
  Response10002_FieldNumber_Data_p = 2,
};

@interface Response10002 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10002_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10002_Data

typedef GPB_ENUM(Response10002_Data_FieldNumber) {
  Response10002_Data_FieldNumber_BriefUser = 1,
  Response10002_Data_FieldNumber_UserKey = 2,
  Response10002_Data_FieldNumber_RongyunToken = 3,
  Response10002_Data_FieldNumber_Sex = 4,
  Response10002_Data_FieldNumber_Sign = 5,
  Response10002_Data_FieldNumber_Phone = 6,
};

@interface Response10002_Data : GPBMessage

/// 返回用户简要信息
@property(nonatomic, readwrite, strong, null_resettable) BriefUser *briefUser;
/// Test to see if @c briefUser has been set.
@property(nonatomic, readwrite) BOOL hasBriefUser;

/// 返回用户私钥
@property(nonatomic, readwrite, copy, null_resettable) NSString *userKey;

/// 融云聊天使用的token
@property(nonatomic, readwrite, copy, null_resettable) NSString *rongyunToken;

@property(nonatomic, readwrite) enum Sex sex;

/// 个性签名
@property(nonatomic, readwrite, copy, null_resettable) NSString *sign;

@property(nonatomic, readwrite, copy, null_resettable) NSString *phone;

@end

/// Fetches the raw value of a @c Response10002_Data's @c sex property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t Response10002_Data_Sex_RawValue(Response10002_Data *message);
/// Sets the raw value of an @c Response10002_Data's @c sex property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetResponse10002_Data_Sex_RawValue(Response10002_Data *message, int32_t value);

#pragma mark - Request10004

typedef GPB_ENUM(Request10004_FieldNumber) {
  Request10004_FieldNumber_Common = 1,
  Request10004_FieldNumber_Params = 2,
};

/// 更新我的个人信息
/// /pilot/updateMyInfo
@interface Request10004 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10004_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10004_Params

typedef GPB_ENUM(Request10004_Params_FieldNumber) {
  Request10004_Params_FieldNumber_UserName = 1,
  Request10004_Params_FieldNumber_AvatarKey = 2,
  Request10004_Params_FieldNumber_BucketName = 3,
  Request10004_Params_FieldNumber_Sex = 4,
  Request10004_Params_FieldNumber_Sign = 5,
  Request10004_Params_FieldNumber_Phone = 6,
  Request10004_Params_FieldNumber_SexChanged = 7,
};

@interface Request10004_Params : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *userName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *avatarKey;

/// 获取上传token时得到的bucketName
@property(nonatomic, readwrite, copy, null_resettable) NSString *bucketName;

/// 待测试，如果不传性别会不会得到默认为男性
@property(nonatomic, readwrite) enum Sex sex;

/// 个性签名
@property(nonatomic, readwrite, copy, null_resettable) NSString *sign;

@property(nonatomic, readwrite, copy, null_resettable) NSString *phone;

/// 只有当sexChanged为true时，才更改sex
@property(nonatomic, readwrite) BOOL sexChanged;

@end

/// Fetches the raw value of a @c Request10004_Params's @c sex property, even
/// if the value was not defined by the enum at the time the code was generated.
int32_t Request10004_Params_Sex_RawValue(Request10004_Params *message);
/// Sets the raw value of an @c Request10004_Params's @c sex property, allowing
/// it to be set to a value that was not defined by the enum at the time the code
/// was generated.
void SetRequest10004_Params_Sex_RawValue(Request10004_Params *message, int32_t value);

#pragma mark - Response10004

typedef GPB_ENUM(Response10004_FieldNumber) {
  Response10004_FieldNumber_Common = 1,
  Response10004_FieldNumber_Data_p = 2,
};

@interface Response10004 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10004_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10004_Data

typedef GPB_ENUM(Response10004_Data_FieldNumber) {
  Response10004_Data_FieldNumber_AvatarURL = 1,
};

@interface Response10004_Data : GPBMessage

/// 如果是更新头像，则会返回用户的新头像url
@property(nonatomic, readwrite, copy, null_resettable) NSString *avatarURL;

@end

#pragma mark - Request10005

typedef GPB_ENUM(Request10005_FieldNumber) {
  Request10005_FieldNumber_Common = 1,
  Request10005_FieldNumber_Params = 2,
};

/// 获取我（或别人的）的相册（动态列表）
/// /pilot/getMyTrend
@interface Request10005 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10005_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10005_Params

typedef GPB_ENUM(Request10005_Params_FieldNumber) {
  Request10005_Params_FieldNumber_PageIndex = 1,
  Request10005_Params_FieldNumber_UserId = 2,
};

@interface Request10005_Params : GPBMessage

/// 需要获取的页数，从0开始
@property(nonatomic, readwrite) int32_t pageIndex;

/// 如果传该字段，则是获取该userId对应的用户的相册，否则获取我的
@property(nonatomic, readwrite) int32_t userId;

@end

#pragma mark - Response10005

typedef GPB_ENUM(Response10005_FieldNumber) {
  Response10005_FieldNumber_Common = 1,
  Response10005_FieldNumber_Data_p = 2,
};

@interface Response10005 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10005_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10005_Data

typedef GPB_ENUM(Response10005_Data_FieldNumber) {
  Response10005_Data_FieldNumber_TrendsArray = 1,
  Response10005_Data_FieldNumber_MaxCountPerPage = 2,
};

@interface Response10005_Data : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Trend*> *trendsArray;
/// The number of items in @c trendsArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger trendsArray_Count;

/// 每页的最大数量，如果trends小于该数量，则没有加载更多
@property(nonatomic, readwrite) int32_t maxCountPerPage;

@end

#pragma mark - Request10006

typedef GPB_ENUM(Request10006_FieldNumber) {
  Request10006_FieldNumber_Common = 1,
  Request10006_FieldNumber_Params = 2,
};

/// 获取我的消息列表
/// /pilot/getMyCommentMessage
@interface Request10006 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10006_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10006_Params

typedef GPB_ENUM(Request10006_Params_FieldNumber) {
  Request10006_Params_FieldNumber_PageIndex = 1,
};

@interface Request10006_Params : GPBMessage

/// 需要获取的页数，从0开始
@property(nonatomic, readwrite) int32_t pageIndex;

@end

#pragma mark - Response10006

typedef GPB_ENUM(Response10006_FieldNumber) {
  Response10006_FieldNumber_Common = 1,
  Response10006_FieldNumber_Data_p = 2,
};

@interface Response10006 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10006_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10006_Data

typedef GPB_ENUM(Response10006_Data_FieldNumber) {
  Response10006_Data_FieldNumber_CommentMessagesArray = 1,
  Response10006_Data_FieldNumber_MaxCountPerPage = 2,
};

@interface Response10006_Data : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<CommentMessage*> *commentMessagesArray;
/// The number of items in @c commentMessagesArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger commentMessagesArray_Count;

/// 每页的最大数量，如果messages小于该数量，则没有加载更多
@property(nonatomic, readwrite) int32_t maxCountPerPage;

@end

#pragma mark - Request10007

typedef GPB_ENUM(Request10007_FieldNumber) {
  Request10007_FieldNumber_Common = 1,
  Request10007_FieldNumber_Params = 2,
};

/// 删除我的消息
/// /pilot/deleteCommentMessage
@interface Request10007 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10007_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10007_Params

typedef GPB_ENUM(Request10007_Params_FieldNumber) {
  Request10007_Params_FieldNumber_ClearAll = 1,
  Request10007_Params_FieldNumber_MessageIdsArray = 2,
};

@interface Request10007_Params : GPBMessage

/// 清空消息，如果是true，则清空所有消息
@property(nonatomic, readwrite) BOOL clearAll;

/// 需要删除的消息id
@property(nonatomic, readwrite, strong, null_resettable) GPBInt32Array *messageIdsArray;
/// The number of items in @c messageIdsArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger messageIdsArray_Count;

@end

#pragma mark - Response10007

typedef GPB_ENUM(Response10007_FieldNumber) {
  Response10007_FieldNumber_Common = 1,
  Response10007_FieldNumber_Data_p = 2,
};

@interface Response10007 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10007_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10007_Data

@interface Response10007_Data : GPBMessage

@end

#pragma mark - Request10008

typedef GPB_ENUM(Request10008_FieldNumber) {
  Request10008_FieldNumber_Common = 1,
  Request10008_FieldNumber_Params = 2,
};

/// 获取我的X币数量
/// /pilot/getMyXMoney
@interface Request10008 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10008_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10008_Params

@interface Request10008_Params : GPBMessage

@end

#pragma mark - Response10008

typedef GPB_ENUM(Response10008_FieldNumber) {
  Response10008_FieldNumber_Common = 1,
  Response10008_FieldNumber_Data_p = 2,
};

@interface Response10008 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10008_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10008_Data

typedef GPB_ENUM(Response10008_Data_FieldNumber) {
  Response10008_Data_FieldNumber_Count = 1,
};

@interface Response10008_Data : GPBMessage

/// X币数量
@property(nonatomic, readwrite) int32_t count;

@end

#pragma mark - Request10009

typedef GPB_ENUM(Request10009_FieldNumber) {
  Request10009_FieldNumber_Common = 1,
  Request10009_FieldNumber_Params = 2,
};

/// 获取用户关注的列表
/// /pilot/getUserGuanzhu
@interface Request10009 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10009_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10009_Params

typedef GPB_ENUM(Request10009_Params_FieldNumber) {
  Request10009_Params_FieldNumber_UserId = 1,
};

@interface Request10009_Params : GPBMessage

/// 如果不传该字段，则获取我的关注列表
@property(nonatomic, readwrite) int32_t userId;

@end

#pragma mark - Response10009

typedef GPB_ENUM(Response10009_FieldNumber) {
  Response10009_FieldNumber_Common = 1,
  Response10009_FieldNumber_Data_p = 2,
};

@interface Response10009 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10009_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10009_Data

typedef GPB_ENUM(Response10009_Data_FieldNumber) {
  Response10009_Data_FieldNumber_BriefUsersArray = 1,
};

@interface Response10009_Data : GPBMessage

/// 关注列表
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BriefUser*> *briefUsersArray;
/// The number of items in @c briefUsersArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger briefUsersArray_Count;

@end

#pragma mark - Request10010

typedef GPB_ENUM(Request10010_FieldNumber) {
  Request10010_FieldNumber_Common = 1,
  Request10010_FieldNumber_Params = 2,
};

/// 获取用户粉丝的列表
/// /pilot/getUserFensi
@interface Request10010 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10010_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10010_Params

typedef GPB_ENUM(Request10010_Params_FieldNumber) {
  Request10010_Params_FieldNumber_UserId = 1,
};

@interface Request10010_Params : GPBMessage

/// 如果不传该字段，则获取我的粉丝列表
@property(nonatomic, readwrite) int32_t userId;

@end

#pragma mark - Response10010

typedef GPB_ENUM(Response10010_FieldNumber) {
  Response10010_FieldNumber_Common = 1,
  Response10010_FieldNumber_Data_p = 2,
};

@interface Response10010 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10010_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10010_Data

typedef GPB_ENUM(Response10010_Data_FieldNumber) {
  Response10010_Data_FieldNumber_BriefUsersArray = 1,
};

@interface Response10010_Data : GPBMessage

/// 粉丝列表
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BriefUser*> *briefUsersArray;
/// The number of items in @c briefUsersArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger briefUsersArray_Count;

@end

#pragma mark - Request10011

typedef GPB_ENUM(Request10011_FieldNumber) {
  Request10011_FieldNumber_Common = 1,
  Request10011_FieldNumber_Params = 2,
};

/// 关注或取消关注别人
/// /pilot/guanzhuUser
@interface Request10011 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10011_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10011_Params

typedef GPB_ENUM(Request10011_Params_FieldNumber) {
  Request10011_Params_FieldNumber_ToUserId = 1,
  Request10011_Params_FieldNumber_IsFollow = 2,
};

@interface Request10011_Params : GPBMessage

@property(nonatomic, readwrite) int32_t toUserId;

/// true:关注 false：取消关注
@property(nonatomic, readwrite) BOOL isFollow;

@end

#pragma mark - Response10011

typedef GPB_ENUM(Response10011_FieldNumber) {
  Response10011_FieldNumber_Common = 1,
  Response10011_FieldNumber_Data_p = 2,
};

@interface Response10011 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10011_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10011_Data

@interface Response10011_Data : GPBMessage

@end

#pragma mark - Request10012

typedef GPB_ENUM(Request10012_FieldNumber) {
  Request10012_FieldNumber_Common = 1,
  Request10012_FieldNumber_Params = 2,
};

/// 获取用户详情
/// /pilot/getUserDetail
@interface Request10012 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10012_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10012_Params

typedef GPB_ENUM(Request10012_Params_FieldNumber) {
  Request10012_Params_FieldNumber_UserId = 1,
};

@interface Request10012_Params : GPBMessage

@property(nonatomic, readwrite) int32_t userId;

@end

#pragma mark - Response10012

typedef GPB_ENUM(Response10012_FieldNumber) {
  Response10012_FieldNumber_Common = 1,
  Response10012_FieldNumber_Data_p = 2,
};

@interface Response10012 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10012_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10012_Data

typedef GPB_ENUM(Response10012_Data_FieldNumber) {
  Response10012_Data_FieldNumber_DetailUser = 1,
};

@interface Response10012_Data : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) DetailUser *detailUser;
/// Test to see if @c detailUser has been set.
@property(nonatomic, readwrite) BOOL hasDetailUser;

@end

#pragma mark - Request10013

typedef GPB_ENUM(Request10013_FieldNumber) {
  Request10013_FieldNumber_Common = 1,
  Request10013_FieldNumber_Params = 2,
};

/// 搜索用户
/// /pilot/searchUser
@interface Request10013 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10013_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10013_Params

typedef GPB_ENUM(Request10013_Params_FieldNumber) {
  Request10013_Params_FieldNumber_Keyword = 1,
  Request10013_Params_FieldNumber_PageIndex = 2,
};

@interface Request10013_Params : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *keyword;

@property(nonatomic, readwrite) int32_t pageIndex;

@end

#pragma mark - Response10013

typedef GPB_ENUM(Response10013_FieldNumber) {
  Response10013_FieldNumber_Common = 1,
  Response10013_FieldNumber_Data_p = 2,
};

@interface Response10013 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10013_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10013_Data

typedef GPB_ENUM(Response10013_Data_FieldNumber) {
  Response10013_Data_FieldNumber_SearchedUsersArray = 1,
  Response10013_Data_FieldNumber_MaxCountPerPage = 2,
};

@interface Response10013_Data : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SearchedUser*> *searchedUsersArray;
/// The number of items in @c searchedUsersArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger searchedUsersArray_Count;

@property(nonatomic, readwrite) int32_t maxCountPerPage;

@end

#pragma mark - Request10014

typedef GPB_ENUM(Request10014_FieldNumber) {
  Request10014_FieldNumber_Common = 1,
  Request10014_FieldNumber_Params = 2,
};

/// 搜索场馆
/// /pilot/searchGym
@interface Request10014 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10014_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10014_Params

typedef GPB_ENUM(Request10014_Params_FieldNumber) {
  Request10014_Params_FieldNumber_Keyword = 1,
  Request10014_Params_FieldNumber_PageIndex = 2,
};

@interface Request10014_Params : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *keyword;

@property(nonatomic, readwrite) int32_t pageIndex;

@end

#pragma mark - Response10014

typedef GPB_ENUM(Response10014_FieldNumber) {
  Response10014_FieldNumber_Common = 1,
  Response10014_FieldNumber_Data_p = 2,
};

@interface Response10014 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10014_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10014_Data

typedef GPB_ENUM(Response10014_Data_FieldNumber) {
  Response10014_Data_FieldNumber_BriefGymsArray = 1,
  Response10014_Data_FieldNumber_MaxCountPerPage = 2,
};

@interface Response10014_Data : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<BriefGym*> *briefGymsArray;
/// The number of items in @c briefGymsArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger briefGymsArray_Count;

@property(nonatomic, readwrite) int32_t maxCountPerPage;

@end

#pragma mark - Request10015

typedef GPB_ENUM(Request10015_FieldNumber) {
  Request10015_FieldNumber_Common = 1,
  Request10015_FieldNumber_Params = 2,
};

/// 获取热门搜索关键字列表
/// /pilot/getSearchKeys
@interface Request10015 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10015_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10015_Params

@interface Request10015_Params : GPBMessage

@end

#pragma mark - Response10015

typedef GPB_ENUM(Response10015_FieldNumber) {
  Response10015_FieldNumber_Common = 1,
  Response10015_FieldNumber_Data_p = 2,
};

@interface Response10015 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10015_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10015_Data

typedef GPB_ENUM(Response10015_Data_FieldNumber) {
  Response10015_Data_FieldNumber_KeysArray = 1,
};

@interface Response10015_Data : GPBMessage

/// 注意，如果该数组为空，则data会是null，客户端做好判空准备
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *keysArray;
/// The number of items in @c keysArray without causing the array to be created.
@property(nonatomic, readonly) NSUInteger keysArray_Count;

@end

#pragma mark - Request10016

typedef GPB_ENUM(Request10016_FieldNumber) {
  Request10016_FieldNumber_Common = 1,
  Request10016_FieldNumber_Params = 2,
};

/// 验证手机号是否已经注册
/// /pilot/verifyPhoneCanUse
@interface Request10016 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10016_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10016_Params

typedef GPB_ENUM(Request10016_Params_FieldNumber) {
  Request10016_Params_FieldNumber_Phone = 1,
};

@interface Request10016_Params : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *phone;

@end

#pragma mark - Response10016

typedef GPB_ENUM(Response10016_FieldNumber) {
  Response10016_FieldNumber_Common = 1,
  Response10016_FieldNumber_Data_p = 2,
};

@interface Response10016 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10016_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10016_Data

typedef GPB_ENUM(Response10016_Data_FieldNumber) {
  Response10016_Data_FieldNumber_CanUser = 1,
};

@interface Response10016_Data : GPBMessage

@property(nonatomic, readwrite) BOOL canUser;

@end

#pragma mark - Request10017

typedef GPB_ENUM(Request10017_FieldNumber) {
  Request10017_FieldNumber_Common = 1,
  Request10017_FieldNumber_Params = 2,
};

/// 获取简要消息内容
/// /pilot/getTrendBriefMessage
@interface Request10017 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10017_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10017_Params

@interface Request10017_Params : GPBMessage

@end

#pragma mark - Response10017

typedef GPB_ENUM(Response10017_FieldNumber) {
  Response10017_FieldNumber_Common = 1,
  Response10017_FieldNumber_Data_p = 2,
};

@interface Response10017 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10017_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10017_Data

typedef GPB_ENUM(Response10017_Data_FieldNumber) {
  Response10017_Data_FieldNumber_TrendBriefMessage = 1,
};

@interface Response10017_Data : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) TrendBriefMessage *trendBriefMessage;
/// Test to see if @c trendBriefMessage has been set.
@property(nonatomic, readwrite) BOOL hasTrendBriefMessage;

@end

#pragma mark - Request10018

typedef GPB_ENUM(Request10018_FieldNumber) {
  Request10018_FieldNumber_Common = 1,
  Request10018_FieldNumber_Params = 2,
};

/// 获取用户简要信息
/// /pilot/getBriefUser
@interface Request10018 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) RequestCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Request10018_Params *params;
/// Test to see if @c params has been set.
@property(nonatomic, readwrite) BOOL hasParams;

@end

#pragma mark - Request10018_Params

typedef GPB_ENUM(Request10018_Params_FieldNumber) {
  Request10018_Params_FieldNumber_UserId = 1,
};

@interface Request10018_Params : GPBMessage

@property(nonatomic, readwrite) int32_t userId;

@end

#pragma mark - Response10018

typedef GPB_ENUM(Response10018_FieldNumber) {
  Response10018_FieldNumber_Common = 1,
  Response10018_FieldNumber_Data_p = 2,
};

@interface Response10018 : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) ResponseCommon *common;
/// Test to see if @c common has been set.
@property(nonatomic, readwrite) BOOL hasCommon;

@property(nonatomic, readwrite, strong, null_resettable) Response10018_Data *data_p;
/// Test to see if @c data_p has been set.
@property(nonatomic, readwrite) BOOL hasData_p;

@end

#pragma mark - Response10018_Data

typedef GPB_ENUM(Response10018_Data_FieldNumber) {
  Response10018_Data_FieldNumber_BriefUser = 1,
};

@interface Response10018_Data : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) BriefUser *briefUser;
/// Test to see if @c briefUser has been set.
@property(nonatomic, readwrite) BOOL hasBriefUser;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
