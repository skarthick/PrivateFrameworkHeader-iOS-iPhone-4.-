/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface WMListLevelTextMapper : NSObject  {
    NSMutableArray *m_tokens;
    int m_format;
    unsigned int m_initNumber;
}


- (id)initWithText:(id)arg1;
- (void)dealloc;
- (id)initWithText:(id)arg1 format:(int)arg2;
- (id)initWithText:(id)arg1 format:(int)arg2 initNumber:(int)arg3;
- (id)listLevelTextforOutline:(id)arg1;
- (unsigned int)tokenCount;
- (id)token:(unsigned int)arg1;

@end
