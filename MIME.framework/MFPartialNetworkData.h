/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableData;

@interface MFPartialNetworkData : NSObject  {
    NSMutableData *_rawData;
    NSMutableData *_unixData;
}


- (id)dataWithUnixLineEndings;
- (unsigned int)rawDataLength;
- (id)rawData;
- (void)dealloc;
- (void)appendRawData:(id)arg1;
- (void)setRawData:(id)arg1;
- (id)copyDataWithUnixLineEndings;
- (void)purgeCaches;

@end
