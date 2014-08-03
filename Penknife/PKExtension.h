#import <Foundation/Foundation.h>

@interface PKExtension : NSObject <NSSecureCoding>

@property NSString* sha;
@property NSString* name;
@property NSString* author;
@property NSString* version;
@property NSString* tarfile;
@property NSString* website;
@property NSString* license;
@property NSString* desc;
@property NSArray* dependencies;

+ (PKExtension*) extensionWithShortJSON:(NSDictionary*)shortJSON longJSON:(NSDictionary*)longJSON;

@end
