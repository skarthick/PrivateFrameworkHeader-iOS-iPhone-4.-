/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMutableDictionary;

@interface TimingCollection : NSObject  {
    NSMutableDictionary *timings;
    struct dispatch_queue_s { } *queue;
}


- (void)startTimingForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (float)timingForKey:(id)arg1;
- (BOOL)hasKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
