/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADRelativeRect;

@interface OADPathShade : OADShade  {
    OADRelativeRect *mFillToRect;
    BOOL mIsFillToRectOverridden;
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;

- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setFillToRect:(id)arg1;
- (BOOL)isFillToRectOverridden;
- (BOOL)isTypeOverridden;
- (id)initWithDefaults;
- (id)fillToRect;

@end
