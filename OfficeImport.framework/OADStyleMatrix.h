/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADStyleMatrix : NSObject  {
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
    NSMutableArray *mEffects;
    NSMutableArray *mBgFills;
}


- (id)init;
- (void)dealloc;
- (id)strokeAtIndex:(unsigned int)arg1;
- (id)effectsAtIndex:(unsigned int)arg1;
- (void)addStroke:(id)arg1;
- (void)addBgFill:(id)arg1;
- (void)addFill:(id)arg1;
- (unsigned int)fillCount;
- (id)fillAtIndex:(unsigned int)arg1 color:(id)arg2;
- (unsigned int)strokeCount;
- (id)strokeAtIndex:(unsigned int)arg1 color:(id)arg2;
- (void)addEffects:(id)arg1;
- (unsigned int)effectsCount;
- (id)effectsAtIndex:(unsigned int)arg1 color:(id)arg2;
- (unsigned int)bgFillCount;
- (id)bgFillAtIndex:(unsigned int)arg1;
- (id)fillAtIndex:(unsigned int)arg1;

@end
