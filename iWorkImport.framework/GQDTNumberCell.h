/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDTComputedFormatSpec;

@interface GQDTNumberCell : GQDTCell  {
    double mValue;
    GQDTComputedFormatSpec *mComputedFormat;
}


- (int)readAttributesForNumberCell:(struct _xmlTextReader { }*)arg1;
- (int)readAttributesForNCell:(struct _xmlTextReader { }*)arg1;
- (struct __CFString { }*)createStringValue;
- (double)value;
- (void)dealloc;

@end