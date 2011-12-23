/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData;

@interface SUDataInputSource : SUInputSource  {
    NSData *_data;
    int _offset;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _promiseBlock;

}

@property(readonly) NSData * data;


- (id)data;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (BOOL)hasBytesAvailable;
- (long long)expectedLength;
- (id)copyAllData:(id*)arg1;
- (BOOL)open:(id*)arg1;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithDataPromise:(id)arg1;

@end
