/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, NSString, PLVideoView, MLPhoto, PLImageView;

@interface PLExpandableImageView : PLExpandableView <PLStackableImage> {
    PLImageView *_imageView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contractedFrame;
    int _imageID;
    struct CGSize { 
        float width; 
        float height; 
    } _originalSize;
    float _originalWidth;
    float _originalAngle;
    struct CGPoint { 
        float x; 
        float y; 
    } _anchorPoint;
    float _imageRotationAngle;
    float _pinchWidth;
    float _pinchAngle;
    float _pinchScale;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _initialExpandingFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _originalBounds;
    float _currentAngle;
    struct CGSize { 
        float width; 
        float height; 
    } _centerOffset;
    MLPhoto *_photo;
    struct { 
        unsigned int isRotating : 1; 
        unsigned int didTrack : 1; 
        unsigned int updateFrame : 1; 
        unsigned int didLayout : 1; 
        unsigned int alwaysDoLayout : 1; 
        unsigned int didComputeCenterOffset : 1; 
        unsigned int imageIsFullScreen : 1; 
    } _exImageFlags;
}

@property(copy) NSString * name;
@property(readonly) struct CGSize { float width; float height; } imageSize;
@property(retain) PLVideoView * videoView;
@property(getter=borderIsVisible) BOOL borderVisible;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } contractedFrame;
@property(readonly) BOOL isBeingManipulated;
@property float transitionProgress;
@property(getter=isShadowEnabled) BOOL shadowEnabled;
@property(readonly) UIImageView * imageView;
@property(retain) MLPhoto * photo;

+ (float)imageBorderWidth;
+ (void)_initializeSafeCategory;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (id)imageView;
- (void)setName:(id)arg1;
- (id)image;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)willMoveToSuperview:(id)arg1;
- (id)name;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBorderVisible:(BOOL)arg1;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (float)transitionProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2 withBorder:(BOOL)arg3;
- (void)setPhoto:(id)arg1;
- (void)setTransitionProgress:(float)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1 angle:(float)arg2;
- (BOOL)isBeingManipulated;
- (float)continueTrackingPinch:(id)arg1;
- (float)_currentScale;
- (float)_expandedScale;
- (float)_expansionFractionForBorderAlpha:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_snappedExpandedFrame;
- (void)_setOriginalSize:(struct CGSize { float x1; float x2; })arg1;
- (float)_borderAlphaForExpansionFraction:(float)arg1;
- (void)_updateBorderAlpha;
- (void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint { float x1; float x2; })arg1 rightPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })_newSizeFromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTransformAndCenterForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_finishedState;
- (id)_contentView;
- (BOOL)borderIsVisible;
- (void)setImage:(id)arg1 isFullscreen:(BOOL)arg2;
- (void)setPosterImage:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contractedFrame;
- (void)setContractedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setVideoView:(id)arg1;
- (float)imageRotationAngle;
- (void)setShadowEnabled:(BOOL)arg1;
- (BOOL)isShadowEnabled;
- (void)setTextBadgeString:(id)arg1;
- (void)beginTrackingPinch:(id)arg1;
- (float)_expansionFraction;
- (id)photo;
- (id)videoView;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;

@end
