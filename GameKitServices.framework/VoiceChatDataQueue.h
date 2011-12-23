/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSConditionLock, NSMutableArray;

@interface VoiceChatDataQueue : NSObject  {
    NSConditionLock *qLock;
    NSMutableArray *dataArray;
}


- (BOOL)addToQueue:(id)arg1;
- (id)pullFromQueue;
- (id)init;
- (void)dealloc;

@end
