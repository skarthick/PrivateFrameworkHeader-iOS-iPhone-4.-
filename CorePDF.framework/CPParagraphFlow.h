/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, CPParagraph;

@interface CPParagraphFlow : NSObject  {
    CPParagraph *paragraph;
    float fLeft;
    float fRight;
    float fTop;
    float fBottom;
    NSMutableArray *paragraphsAbove;
    NSMutableArray *paragraphsBelow;
    NSMutableArray *paragraphsLeft;
    NSMutableArray *paragraphsRight;
    BOOL placed;
    BOOL adjacentToCallout;
    int calloutType;
    CPParagraph *nextInColumn;
}

@property CPParagraph * nextInColumn;
@property int calloutType;
@property BOOL placed;
@property float fRight;
@property float fLeft;
@property(retain) CPParagraph * paragraph;


- (int)leftOrder;
- (int)rightOrder;
- (void)dealloc;
- (id)description;
- (id)paragraph;
- (id)initWithParagraph:(id)arg1;
- (float)fLeft;
- (BOOL)placed;
- (int)calloutType;
- (BOOL)intervalOverlapLeft:(float)arg1 right:(float)arg2 rects:(id)arg3;
- (BOOL)intervalOverlapLeft:(float)arg1 right:(float)arg2 paragraphs:(id)arg3;
- (BOOL)intervalOverlapTop:(float)arg1 bottom:(float)arg2 paragraphs:(id)arg3;
- (void)setParagraphsAboveIn:(id)arg1;
- (void)setParagraphsBelowIn:(id)arg1;
- (id)simpleRule:(unsigned int)arg1;
- (id)ignoreCallouts:(unsigned int)arg1;
- (id)twoSides:(unsigned int)arg1;
- (id)belowTwoSides:(unsigned int)arg1;
- (void)removeFromBelow:(id)arg1;
- (void)removeFromAbove:(id)arg1;
- (void)replaceBelow:(id)arg1 withOneOf:(id)arg2;
- (void)replaceAbove:(id)arg1 withOneOf:(id)arg2;
- (void)removeFromFlow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })belowBounds;
- (float)dAbove;
- (int)inOrder:(BOOL)arg1;
- (void)setNextInColumn:(id)arg1;
- (void)setCalloutType:(int)arg1;
- (void)setPlaced:(BOOL)arg1;
- (void)setFRight:(float)arg1;
- (void)setFLeft:(float)arg1;
- (void)setParagraph:(id)arg1;
- (id)nextInColumn;
- (id)paragraphsLeft;
- (id)paragraphsBelow;
- (id)paragraphsAbove;
- (float)fRight;
- (id)paragraphsRight;
- (float)dBelow;
- (void)setParagraphsLeftIn:(id)arg1;
- (void)setParagraphsRightIn:(id)arg1;
- (int)topDescending:(id)arg1;
- (id)nextParagraphInColumn:(id)arg1;
- (int)outOrder;
- (int)inOrder;
- (float)area;

@end
