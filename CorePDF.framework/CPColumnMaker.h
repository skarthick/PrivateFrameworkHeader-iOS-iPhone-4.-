/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, CPZone;

@interface CPColumnMaker : NSObject  {
    NSMutableArray *columns;
    CPZone *currentZone;
    NSMutableArray *allParagraphs;
    NSMutableArray *thinHorizontalShapes;
    NSMutableArray *otherShapes;
    NSMutableArray *paragraphWrappers;
}


- (id)columns;
- (id)init;
- (void)dealloc;
- (BOOL)intervalOverlapLeft:(float)arg1 right:(float)arg2 paragraphs:(id)arg3;
- (void)partitionShapes:(id)arg1;
- (BOOL)cuttingShapeBetween:(id)arg1 and:(id)arg2;
- (BOOL)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2;
- (BOOL)paragraph:(id)arg1 isAbove:(id)arg2;
- (BOOL)paragraph:(id)arg1 isBelow:(id)arg2;
- (id)paragraphBelow:(id)arg1 in:(id)arg2;
- (id)paragraphAbove:(id)arg1 in:(id)arg2;
- (id)chunkAbove:(id)arg1 in:(id)arg2;
- (BOOL)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2;
- (BOOL)column:(id)arg1 isLinkedBelowTo:(id)arg2;
- (BOOL)canSafelyAdd:(id)arg1 to:(id)arg2;
- (void)intersectionCallout:(id)arg1;
- (void)callOuts;
- (void)makeColumnsFrom:(id)arg1 zone:(id)arg2;

@end
