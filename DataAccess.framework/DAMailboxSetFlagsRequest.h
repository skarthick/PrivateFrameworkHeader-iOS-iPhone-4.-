/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxSetFlagsRequest : DAMailboxRequest  {
    unsigned long long _onFlags;
    unsigned long long _offFlags;
    NSString *_messageID;
}


- (id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3;
- (id)messageID;
- (void)dealloc;
- (unsigned long long)onFlags;
- (unsigned long long)offFlags;

@end