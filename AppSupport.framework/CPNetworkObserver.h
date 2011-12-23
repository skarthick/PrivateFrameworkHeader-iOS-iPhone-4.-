/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSMutableDictionary, NSLock;

@interface CPNetworkObserver : NSObject  {
    NSLock *_lock;
    NSMutableDictionary *_reachabilityRequests;
    unsigned int _networkReachability;
    struct __SCNetworkReachability { } *_networkReach;
    struct __CFDictionary { } *_networkObservers;
    struct __SCPreferences { } *_wifiPreferences;
    struct __CFDictionary { } *_wifiObservers;
    BOOL _networkNotified;
    BOOL _networkReachable;
    BOOL _wifiNotified;
    BOOL _wifiEnabled;
}

+ (id)sharedNetworkObserver;

- (void)removeObserver:(id)arg1 forHostname:(id)arg2;
- (void)removeObserver:(id)arg1;
- (BOOL)isNetworkReachable;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeNetworkReachableObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3;
- (void)addWiFiObserver:(id)arg1 selector:(SEL)arg2;
- (BOOL)isWiFiEnabled;
- (void)_networkObserversInitialize;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkReachableFirstCallBack:(id)arg1;
- (void)_wifiObserversInitialize;
- (void)_wifiCallBack:(unsigned int)arg1;
- (void)_wifiFirstCallBack:(id)arg1;
- (void)removeWiFiObserver:(id)arg1;

@end