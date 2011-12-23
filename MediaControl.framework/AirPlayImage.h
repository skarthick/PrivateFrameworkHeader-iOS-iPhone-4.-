/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaControl.framework/MediaControl
 */

@interface AirPlayImage : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } _unadjustedSize;
    struct CGImage { } *_image;
    void *_ioSurface;
    int _imageOrientation;
}

@property(readonly) struct CGSize { float width; float height; } size;
@property(readonly) id layerContents;
@property(readonly) void* ioSurface;
@property(readonly) struct CGImage { }* CGImage;
@property(readonly) int imageOrientation;


- (void*)ioSurface;
- (int)imageOrientation;
- (struct CGSize { float x1; float x2; })size;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (struct CGImage { }*)CGImage;
- (id)initWithContentsOfFile:(id)arg1 decode:(BOOL)arg2;
- (id)layerContents;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })contentsTransformForLayer:(id)arg1;
- (void)_setImageOrientation:(int)arg1;
- (void)_setIOSurface:(void*)arg1;
- (void)_setCGImage:(struct CGImage { }*)arg1;
- (struct CGSize { float x1; float x2; })_unadjustedContentSize;
- (id)initWithData:(id)arg1 decode:(BOOL)arg2;

@end
