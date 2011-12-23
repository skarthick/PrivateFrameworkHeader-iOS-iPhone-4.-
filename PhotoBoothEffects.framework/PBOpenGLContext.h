/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBOpenGLContext : PBContext  {
    void *_priv;
}


- (id)init;
- (void)dealloc;
- (void)setSmallPool:(struct __CVPixelBufferPool { }*)arg1;
- (struct __CVPixelBufferPool { }*)smallPool;
- (struct __CVBuffer { }*)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(BOOL)arg3;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(BOOL)arg3;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(BOOL)arg3;
- (struct CGImage { }*)createCGImageForFilterViaGL:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (BOOL)_registerFilter:(id)arg1;
- (id)_compileFilter:(id)arg1;
- (void)_createPixelBuffer:(struct __CVBuffer {}**)arg1 fromPool:(struct __CVPixelBufferPool { }*)arg2;
- (void)_createPixelBufferPools;
- (unsigned int)_compileShader:(const char *)arg1 type:(unsigned int)arg2;
- (void)_debugDump;
- (unsigned int)_textureForLookupTableName:(id)arg1;
- (void)preloadFilter:(id)arg1;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (struct _CAImageQueue { }*)outputImageQueue;
- (void)setOutputImageQueue:(struct _CAImageQueue { }*)arg1;
- (struct __CVPixelBufferPool { }*)largePool;
- (void)setLargePool:(struct __CVPixelBufferPool { }*)arg1;

@end
