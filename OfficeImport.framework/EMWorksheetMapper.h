/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ECColumnWidthConvertor, EDWorksheet, CMStyle;

@interface EMWorksheetMapper : EMSheetMapper  {
    EDWorksheet *edWorksheet;
    CMStyle *mStyle;
    unsigned int mMaxPopulatedColumn;
    unsigned int mMaxPopulatedRow;
    double *mColumnGrid;
    double *mRowGrid;
    int mWidth;
    int mHeight;
    ECColumnWidthConvertor *mColumnWidthConvertor;
}


- (BOOL)isVisible;
- (int)height;
- (int)columnCount;
- (int)width;
- (void)dealloc;
- (double)defaultRowHeight;
- (id)initWithEDWorksheet:(id)arg1 parent:(id)arg2;
- (void)_initWithState:(id)arg1;
- (double*)columnGrid;
- (double*)rowGrid;
- (double)xlColumnWidthToPoints:(double)arg1;
- (int)preprocessWidthWithState:(id)arg1;
- (struct CGSize { float x1; float x2; })preprocessSizeWithState:(id)arg1;
- (void)setRowGrid;
- (void)countRowsAndColumnsWithState:(id)arg1;
- (void)mapColumnInfosAt:(id)arg1 withState:(id)arg2;
- (void)mapGridAt:(id)arg1;
- (void)mapDrawablesAt:(id)arg1 withState:(id)arg2;
- (void)mapTableAt:(id)arg1 withState:(id)arg2;
- (void)mapTableStyleAt:(id)arg1 withState:(id)arg2;
- (int)maxRowNumber;
- (double)defaultColumnWidth;
- (id)columnWidthConvertor;
- (int)preprocessHeightWithState:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
