/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLQueryImpl : NSObject  {
    BOOL _registeredForNotificationsAffectingEvaluationResults;
}

+ (void)reset;
+ (void)recursiveEvaluationLockLock;
+ (void)resetAndInvalidate:(id)arg1;
+ (void)resetAndInvalidate;
+ (id)_recursiveEvaluationLock;
+ (void)recursiveEvaluationLockUnlock;

- (void)evaluate;

@end
