/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface SFUFileOutputStream : NSObject <SFUOutputStream> {
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { 
            char *_base; 
            int _size; 
        } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { 
            char *_base; 
            int _size; 
        } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { 
            char *_base; 
            int _size; 
        } x18; int x19; long long x20; } *mFile;
    NSString *mPath;
}


- (id)initWithPath:(id)arg1;
- (id)path;
- (void)close;
- (long long)offset;
- (void)dealloc;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (BOOL)canCreateInputStream;
- (id)closeLocalStream;
- (id)inputStream;

@end
