/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/JavaScriptCore.framework/JavaScriptCore
 */

@class NSString;

@interface ProfilerServer : NSObject  {
    NSString *_serverName;
    unsigned int _listenerCount;
}

+ (id)sharedProfileServer;

- (id)init;
- (void)stopProfiling;
- (void)startProfiling;

@end
