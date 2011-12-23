/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSMutableSet;

@interface SSRequestGroup : NSObject  {
    NSString *_identifier;
    NSMutableSet *_requests;
    Class _requestClass;
}

@property(readonly) NSArray * requests;
@property(readonly) NSString * groupIdentifier;


- (id)requests;
- (id)init;
- (void)dealloc;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (id)groupIdentifier;
- (id)initWithGroupIdentifier:(id)arg1;
- (id)initWithGroupIdentifier:(id)arg1 requestClass:(Class)arg2;
- (void)_registerForDaemonNotifications;
- (void)_reloadRequestsFromDaemon;
- (void)_setGroupIdentifier:(id)arg1 forRequestWithIdentifier:(id)arg2;
- (void)_unregisterForDaemonNotifications;
- (void)_mainThreadDaemonExited:(id)arg1;
- (void)_daemonExited:(id)arg1;

@end
