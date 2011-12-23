/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface MSCameraFolder : ICCameraFolder  {
    void *_msCameraFolderProperties;
}

@property(readonly) unsigned long long fsSN;
@property(readonly) struct timespec { int tv_sec; long tv_nsec; } fsCreationTime;
@property(readonly) struct timespec { int tv_sec; long tv_nsec; } fsModificationTime;
@property(readonly) long long fsSize;


- (BOOL)deleteItemFromCamera:(id)arg1;
- (void)enumerateContent;
- (id)itemMatchingName:(id)arg1 fsSN:(unsigned long long)arg2 fsCreationTime:(struct timespec { int x1; long x2; }*)arg3 fsSize:(long long)arg4;
- (id)folderMatchingPath:(id)arg1;
- (unsigned long long)fsSN;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 fsSN:(unsigned long long)arg4 fsCreationTime:(struct timespec { int x1; long x2; })arg5 fsModificationTime:(struct timespec { int x1; long x2; })arg6 fsSize:(long long)arg7 fsFlags:(unsigned int)arg8;
- (struct timespec { int x1; long x2; })fsCreationTime;
- (struct timespec { int x1; long x2; })fsModificationTime;
- (long long)fsSize;
- (void)finalize;
- (void)dealloc;

@end
