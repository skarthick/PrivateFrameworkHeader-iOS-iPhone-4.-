/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHPCategoryAndSeriesReordering : EDProcessor  {
}


- (bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(bool)arg2;
- (void)applySeriesReorderingPreprocessor:(id)arg1;
- (void)applyCategoryReorderingPreprocessor:(id)arg1;
- (void)reorderSeriesCategory:(id)arg1 dataPointCount:(unsigned int)arg2 byRow:(bool)arg3;
- (void)reorderValueProperties:(id)arg1 dataPointCount:(unsigned int)arg2;
- (void)reorderData:(id)arg1 dataPointCount:(unsigned int)arg2 byRow:(bool)arg3;
- (void)reorderDataValues:(id)arg1 dataPointCount:(unsigned int)arg2;
- (void)reorderDataFormula:(id)arg1 dataPointCount:(unsigned int)arg2 byRow:(bool)arg3;
- (bool)isObjectSupported:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;

@end
