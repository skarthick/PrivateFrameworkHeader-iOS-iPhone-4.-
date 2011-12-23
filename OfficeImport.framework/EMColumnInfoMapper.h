/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDColumnInfo;

@interface EMColumnInfoMapper : CMMapper  {
    EDColumnInfo *edColumnInfo;
    double columnWidth;
    int columnSpan;
}


- (double)columnWidth;
- (id)initWithEDColumnInfo:(id)arg1 maxSpan:(int)arg2 parent:(id)arg3;
- (id)initWithDefaultWidth:(double)arg1 span:(int)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
