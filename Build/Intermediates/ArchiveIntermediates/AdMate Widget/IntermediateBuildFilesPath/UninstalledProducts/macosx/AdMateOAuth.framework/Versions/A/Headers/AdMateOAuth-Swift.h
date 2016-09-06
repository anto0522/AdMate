// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import Foundation.NSURLSession;
@import AppKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface NSData (SWIFT_EXTENSION(AdMateOAuth))
@end


@interface NSMutableData (SWIFT_EXTENSION(AdMateOAuth))
@end


@interface NSURL (SWIFT_EXTENSION(AdMateOAuth))
- (NSURL * _Nonnull)URLByAppendingQueryString:(NSString * _Nonnull)queryString;
@end

@protocol OAuthSwiftURLHandlerType;
@class OAuthSwiftCredential;
@class NSURLResponse;
@class NSError;

SWIFT_CLASS("_TtC11AdMateOAuth11OAuth1Swift")
@interface OAuth1Swift : NSObject
@property (nonatomic, strong) id <OAuthSwiftURLHandlerType> _Nonnull authorize_url_handler;
@property (nonatomic) BOOL allowMissingOauthVerifier;
@property (nonatomic, copy) NSString * _Nonnull consumer_key;
@property (nonatomic, copy) NSString * _Nonnull consumer_secret;
@property (nonatomic, copy) NSString * _Nonnull request_token_url;
@property (nonatomic, copy) NSString * _Nonnull authorize_url;
@property (nonatomic, copy) NSString * _Nonnull access_token_url;
@property (nonatomic, strong) id _Nullable observer;
- (nonnull instancetype)initWithConsumerKey:(NSString * _Nonnull)consumerKey consumerSecret:(NSString * _Nonnull)consumerSecret requestTokenUrl:(NSString * _Nonnull)requestTokenUrl authorizeUrl:(NSString * _Nonnull)authorizeUrl accessTokenUrl:(NSString * _Nonnull)accessTokenUrl OBJC_DESIGNATED_INITIALIZER;
- (void)authorizeWithCallbackURL:(NSURL * _Nonnull)callbackURL success:(void (^ _Nonnull)(OAuthSwiftCredential * _Nonnull credential, NSURLResponse * _Nonnull response))success failure:(void (^ _Nonnull)(NSError * _Nonnull error))failure;
- (void)postOAuthRequestTokenWithCallbackURL:(NSURL * _Nonnull)callbackURL success:(void (^ _Nonnull)(OAuthSwiftCredential * _Nonnull credential, NSURLResponse * _Nonnull response))success failure:(void (^ _Nullable)(NSError * _Nonnull error))failure;
- (void)postOAuthAccessTokenWithRequestToken:(void (^ _Nonnull)(OAuthSwiftCredential * _Nonnull credential, NSURLResponse * _Nonnull response))success failure:(void (^ _Nullable)(NSError * _Nonnull error))failure;
+ (void)handleOpenURL:(NSURL * _Nonnull)url;
@end

@class NSDictionary;

SWIFT_CLASS("_TtC11AdMateOAuth11OAuth2Swift")
@interface OAuth2Swift : NSObject
@property (nonatomic, strong) id <OAuthSwiftURLHandlerType> _Nonnull authorize_url_handler;
@property (nonatomic, copy) NSString * _Nonnull consumer_key;
@property (nonatomic, copy) NSString * _Nonnull consumer_secret;
@property (nonatomic, copy) NSString * _Nonnull authorize_url;
@property (nonatomic, copy) NSString * _Nullable access_token_url;
@property (nonatomic, copy) NSString * _Nonnull response_type;
@property (nonatomic, strong) id _Nullable observer;
@property (nonatomic, copy) NSString * _Nullable content_type;
- (nonnull instancetype)initWithConsumerKey:(NSString * _Nonnull)consumerKey consumerSecret:(NSString * _Nonnull)consumerSecret authorizeUrl:(NSString * _Nonnull)authorizeUrl accessTokenUrl:(NSString * _Nonnull)accessTokenUrl responseType:(NSString * _Nonnull)responseType;
- (nonnull instancetype)initWithConsumerKey:(NSString * _Nonnull)consumerKey consumerSecret:(NSString * _Nonnull)consumerSecret authorizeUrl:(NSString * _Nonnull)authorizeUrl accessTokenUrl:(NSString * _Nonnull)accessTokenUrl responseType:(NSString * _Nonnull)responseType contentType:(NSString * _Nonnull)contentType;
- (nonnull instancetype)initWithConsumerKey:(NSString * _Nonnull)consumerKey consumerSecret:(NSString * _Nonnull)consumerSecret authorizeUrl:(NSString * _Nonnull)authorizeUrl responseType:(NSString * _Nonnull)responseType OBJC_DESIGNATED_INITIALIZER;
- (void)authorizeWithCallbackURL:(NSURL * _Nonnull)callbackURL scope:(NSString * _Nonnull)scope state:(NSString * _Nonnull)state params:(NSDictionary<NSString *, NSString *> * _Nonnull)params success:(void (^ _Nonnull)(OAuthSwiftCredential * _Nonnull credential, NSURLResponse * _Nullable response, NSDictionary * _Nonnull parameters))success failure:(void (^ _Nonnull)(NSError * _Nonnull error))failure;
- (void)postOAuthAccessTokenWithRequestTokenByCode:(NSString * _Nonnull)code callbackURL:(NSURL * _Nonnull)callbackURL success:(void (^ _Nonnull)(OAuthSwiftCredential * _Nonnull credential, NSURLResponse * _Nullable response, NSDictionary * _Nonnull parameters))success failure:(void (^ _Nullable)(NSError * _Nonnull error))failure;
+ (void)handleOpenURL:(NSURL * _Nonnull)url;
@end

@class NSCoder;

SWIFT_CLASS("_TtC11AdMateOAuth20OAuthSwiftCredential")
@interface OAuthSwiftCredential : NSObject <NSCoding>
@property (nonatomic, copy) NSString * _Nonnull consumer_key;
@property (nonatomic, copy) NSString * _Nonnull consumer_secret;
@property (nonatomic, copy) NSString * _Nonnull oauth_token;
@property (nonatomic, copy) NSString * _Nonnull oauth_token_secret;
@property (nonatomic, copy) NSString * _Nonnull oauth_verifier;
@property (nonatomic, copy) NSString * _Nonnull oauth_header_type;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithConsumer_key:(NSString * _Nonnull)consumer_key consumer_secret:(NSString * _Nonnull)consumer_secret OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithOauth_token:(NSString * _Nonnull)oauth_token oauth_token_secret:(NSString * _Nonnull)oauth_token_secret OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)decoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
- (NSDictionary<NSString *, NSString *> * _Nonnull)makeHeaders:(NSURL * _Nonnull)url method:(NSString * _Nonnull)method parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters;
- (NSString * _Nonnull)authorizationHeaderForMethod:(NSString * _Nonnull)method url:(NSURL * _Nonnull)url parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters;
- (NSString * _Nonnull)signatureForMethod:(NSString * _Nonnull)method url:(NSURL * _Nonnull)url parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters;
@end

@class NSMutableURLRequest;
@class NSURLSession;
@class NSHTTPURLResponse;
@class NSURLRequest;

SWIFT_CLASS("_TtC11AdMateOAuth21OAuthSwiftHTTPRequest")
@interface OAuthSwiftHTTPRequest : NSObject <NSURLSessionDelegate>
@property (nonatomic, strong) NSURL * _Nonnull URL;
@property (nonatomic, copy) NSString * _Nonnull HTTPMethod;
@property (nonatomic, strong) NSData * _Nullable HTTPBodyMultipart;
@property (nonatomic, copy) NSString * _Nullable contentTypeMultipart;
@property (nonatomic, strong) NSMutableURLRequest * _Nullable request;
@property (nonatomic, strong) NSURLSession * _Null_unspecified session;
@property (nonatomic, copy) NSDictionary<NSString *, NSString *> * _Nonnull headers;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull parameters;
@property (nonatomic) BOOL encodeParameters;
@property (nonatomic) NSUInteger dataEncoding;
@property (nonatomic) NSTimeInterval timeoutInterval;
@property (nonatomic) BOOL HTTPShouldHandleCookies;
@property (nonatomic, strong) NSHTTPURLResponse * _Null_unspecified response;
@property (nonatomic, strong) NSMutableData * _Nonnull responseData;
@property (nonatomic, copy) void (^ _Nullable successHandler)(NSData * _Nonnull data, NSHTTPURLResponse * _Nonnull response);
@property (nonatomic, copy) void (^ _Nullable failureHandler)(NSError * _Nonnull error);
- (nonnull instancetype)initWithURL:(NSURL * _Nonnull)URL;
- (nonnull instancetype)initWithURL:(NSURL * _Nonnull)URL method:(NSString * _Nonnull)method parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRequest:(NSURLRequest * _Nonnull)request OBJC_DESIGNATED_INITIALIZER;
- (void)start;
- (NSMutableURLRequest * _Nullable)makeRequestAndReturnError:(NSError * _Nullable * _Null_unspecified)error;
+ (NSMutableURLRequest * _Nullable)makeRequest:(NSURL * _Nonnull)URL method:(NSString * _Nonnull)method headers:(NSDictionary<NSString *, NSString *> * _Nonnull)headers parameters:(NSDictionary<NSString *, id> * _Nonnull)parameters dataEncoding:(NSUInteger)dataEncoding encodeParameters:(BOOL)encodeParameters body:(NSData * _Nullable)body contentType:(NSString * _Nullable)contentType error:(NSError * _Nullable * _Null_unspecified)error;
+ (NSString * _Nonnull)stringWithData:(NSData * _Nonnull)data encodingName:(NSString * _Nullable)encodingName;
+ (NSString * _Nonnull)descriptionForHTTPStatus:(NSInteger)status responseString:(NSString * _Nonnull)responseString;
@end


SWIFT_PROTOCOL("_TtP11AdMateOAuth24OAuthSwiftURLHandlerType_")
@protocol OAuthSwiftURLHandlerType
- (void)handle:(NSURL * _Nonnull)url;
@end

@class NSBundle;

SWIFT_CLASS("_TtC11AdMateOAuth22OAuthWebViewController")
@interface OAuthWebViewController : NSViewController <OAuthSwiftURLHandlerType>
- (void)handle:(NSURL * _Nonnull)url;
- (void)dismissWebViewController;
- (nullable instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
