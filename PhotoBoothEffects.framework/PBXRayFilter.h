/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface PBXRayFilter : PBFilter  {
}


- (id)_lookupTableForName:(id)arg1;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize { float x1; float x2; })arg2 outputRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 mirrored:(BOOL)arg4;
- (id)_glesUniforms;
- (void)setupKernelArguments:(id)arg1 mirrored:(BOOL)arg2;
- (int (*)())kernelWrapper;
- (const char *)_fragmentShaderSource;
- (id)_lookupTableNames;
- (unsigned long)kernelArgCount;

@end
