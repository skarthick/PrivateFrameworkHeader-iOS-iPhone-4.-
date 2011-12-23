/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCameraButton;

@interface PLCameraButtonBar : UIToolbar  {
    PLCameraButton *_cameraButton;
}

@property(retain) PLCameraButton * cameraButton;

+ (id)backgroundImage;
+ (float)defaultHeight;

- (id)initInView:(id)arg1 withItems:(struct { int x1; int x2; id x3; id x4; float x5; int x6; SEL x7; id x8; }*)arg2 withCount:(int)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)cameraButton;
- (void)setCameraButton:(id)arg1;

@end
