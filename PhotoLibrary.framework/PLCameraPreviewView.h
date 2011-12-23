/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, PLCameraFocusView;

@interface PLCameraPreviewView : UIView  {
    struct CGPoint { 
        float x; 
        float y; 
    } _touchLocation;
    PLCameraFocusView *_focusView;
    PLCameraFocusView *_autoFocusView;
    UIView *_disabledView;
    UIView *_snapshotView;
    unsigned int _canShowFocus : 1;
    unsigned int _controlsAreVisible : 1;
}

+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })defaultAffineTransform;
+ (void)_initializeSafeCategory;

- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)finishFocusingAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCameraIsChangingModes:(BOOL)arg1;
- (void)removeFocusView;
- (void)zoomFromFactor:(float)arg1 toFactor:(float)arg2 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
- (void)setShouldShowFocus:(BOOL)arg1;
- (void)showAutofocusViewWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)focusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)focusDidEnd;
- (void)setControlsAreVisible:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;

@end
