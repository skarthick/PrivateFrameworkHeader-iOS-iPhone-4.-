/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSSoftwareUpdatesContext : NSObject <NSCopying, NSMutableCopying> {
    NSString *_clientIdentifierHeader;
    BOOL _forced;
}

@property(readonly) NSString * queueIdentifier;
@property(getter=isForced,readonly) BOOL forced;
@property(copy,readonly) NSString * clientIdentifierHeader;


- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)isForced;
- (id)queueIdentifier;
- (id)clientIdentifierHeader;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end
