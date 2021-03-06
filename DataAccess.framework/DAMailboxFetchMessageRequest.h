/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest  {
    NSString *_messageID;
    int _bodyFormat;
    int _maxSize;
}


- (id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3;
- (int)bodyFormat;
- (id)messageID;
- (void)dealloc;
- (int)maxSize;

@end
