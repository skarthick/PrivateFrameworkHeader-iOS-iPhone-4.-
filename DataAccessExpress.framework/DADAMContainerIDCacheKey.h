/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {
    NSString *_accountID;
    int _dataclass;
}

@property(readonly) int dataclass;
@property(readonly) NSString * accountID;


- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithAccountID:(id)arg1 andDataclass:(int)arg2;
- (id)accountID;
- (int)dataclass;

@end
