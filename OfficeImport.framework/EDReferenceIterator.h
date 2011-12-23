/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, EDWorkbook, EDRowBlock, EDRowBlocks, EDWorksheet, EDReference;

@interface EDReferenceIterator : NSObject  {
    EDWorkbook *mWorkbook;
    EDWorksheet *mCurrentSheet;
    EDCollection *mReferences;
    EDReference *mReference;
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mRowBlock;
    unsigned int mRowBlockIndex;
    struct EDRowInfo { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; } *mRowInfo;
    unsigned int mRowInfoIndex;
    unsigned int mCellIndex;
    unsigned int mNextArrayIndex;
    int mCurrentCellIndex;
    unsigned int mPreviousColumnNumber;
}

+ (id)referenceIteratorWithReference:(id)arg1 workbook:(id)arg2;
+ (id)referenceIteratorWithReferenceArray:(id)arg1 workbook:(id)arg2;

- (void)dealloc;
- (struct EDCellHeader { unsigned short x1; unsigned int x2; }*)nextCell;
- (id)initWithReferenceArray:(id)arg1 reference:(id)arg2 workbook:(id)arg3;
- (id)initWithReference:(id)arg1 workbook:(id)arg2;
- (id)initWithReferenceArray:(id)arg1 workbook:(id)arg2;
- (unsigned int)currentCellIndex;
- (bool)nextReference;
- (bool)nextRow;
- (void)setCurrentSheet:(id)arg1;
- (void)setReference:(id)arg1;

@end
