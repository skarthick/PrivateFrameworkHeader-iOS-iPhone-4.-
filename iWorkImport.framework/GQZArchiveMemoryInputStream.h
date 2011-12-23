/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSData;

@interface GQZArchiveMemoryInputStream : NSObject <GQZArchiveInputStream> {
    NSData *mData;
    char *mBytes;
    long long mSize;
}


- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3 readSize:(unsigned int*)arg4;
- (void)readFromOffset:(long long)arg1 size:(unsigned long)arg2 buffer:(char *)arg3;
- (long long)size;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
