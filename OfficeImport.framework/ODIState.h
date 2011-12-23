/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADOrientedBounds, ODDDiagram, OADGroup, OADDrawingTheme, NSMutableArray, OADShapeStyle;

@interface ODIState : NSObject  {
    ODDDiagram *mDiagram;
    OADOrientedBounds *mDiagramOrientedBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLogicalBounds;
    float mScale;
    OADGroup *mGroup;
    NSMutableArray *mPresentationNames;
    NSMutableArray *mDefaultStyleLabelNames;
    int mPointCount;
    int mPointIndex;
    OADShapeStyle *mTextStyle;
    OADDrawingTheme *mDrawingTheme;
}


- (id)group;
- (void)dealloc;
- (float)scale;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logicalBounds;
- (void)setGroup:(id)arg1;
- (id)presentationNameForPointType:(int)arg1;
- (void)setPresentationName:(id)arg1 forPointType:(int)arg2;
- (void)setPointIndex:(int)arg1;
- (id)textStyle;
- (void)setTextStyle:(id)arg1;
- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2;
- (id)drawingTheme;
- (int)pointIndex;
- (id)defaultStyleLabelNameForPointType:(int)arg1;
- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;
- (void)setPointCount:(int)arg1;
- (id)diagramOrientedBounds;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 maintainAspectRatio:(BOOL)arg2;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)pointCount;
- (id)diagram;

@end
