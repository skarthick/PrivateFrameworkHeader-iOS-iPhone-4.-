/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDColorReference;

@interface EDPatternFill : EDFill  {
    int mType;
    EDColorReference *mBackColorReference;
    EDColorReference *mForeColorReference;
}

+ (id)patternFillWithType:(int)arg1 resources:(id)arg2;
+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 resources:(id)arg3;
+ (id)patternFillWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
+ (id)patternFillWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;

- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)isEmpty;
- (id)initWithResources:(id)arg1;
- (BOOL)isEqualToPatternFill:(id)arg1;
- (id)initWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4;
- (id)foreColorReference;
- (id)backColorReference;
- (void)setForeColor:(id)arg1;
- (void)setBackColor:(id)arg1;
- (void)setBackColorReference:(id)arg1;
- (void)setForeColorReference:(id)arg1;
- (id)initWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4;
- (id)foreColor;
- (id)backColor;

@end
