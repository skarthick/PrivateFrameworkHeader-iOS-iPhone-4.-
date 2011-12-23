/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSArray;

@interface ValidationObject : IMThreadedWorkUnit  {
    NSArray *_certs;
    NSString *_screenName;
    unsigned int _usage;
    unsigned int _result;
}

@property(readonly) NSArray * certificates;
@property(readonly) unsigned int result;

+ (id)validateCerts:(id)arg1 screenName:(id)arg2 usage:(unsigned int)arg3;

- (unsigned long)result;
- (void)dealloc;
- (id)initWithCerts:(id)arg1 screenName:(id)arg2 usage:(unsigned int)arg3;
- (void)stopWatchingThread;
- (void)_workerThreadFinished;
- (void)startThread;
- (void)_workerThread;
- (id)certificates;

@end
