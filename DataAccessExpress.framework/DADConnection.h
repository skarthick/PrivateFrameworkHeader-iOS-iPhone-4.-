/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSInvocation, NSMutableDictionary, NSMutableSet;

@interface DADConnection : NSObject <AccountNotificationProtocol> {
    unsigned int _publicPort;
    unsigned int _serverPort;
    struct __CFMachPort { } *_callbackPort;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;
    NSInvocation *_statusReportInvocation;
    NSMutableDictionary *_defaultContainerIDCache;
}

+ (void)setShouldIgnoreAccountChanges;
+ (void)noteAccountChanges:(id)arg1;
+ (id)sharedConnection;

- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 ignoreThrottleTimer:(BOOL)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2;
- (void)requestDaemonShutdown;
- (BOOL)requestDaemonStopMonitoringAgents;
- (BOOL)requestDaemonStartMonitoringAgents;
- (BOOL)removeStoresForAccountWithID:(id)arg1;
- (BOOL)registerForInterrogationWithInvocation:(id)arg1;
- (BOOL)handleURL:(id)arg1;
- (id)init;
- (void)dealloc;
- (unsigned int)publicPort;
- (void)_handleFoldersUpdated:(id)arg1 forAccountID:(id)arg2;
- (void)_handleNewPolicyKey:(id)arg1 forAccountID:(id)arg2;
- (void)invalidateServerPort;
- (void)_handleSendFailure:(int)arg1 inCodeNamed:(const char *)arg2;
- (unsigned int)serverPortWithTimeout:(unsigned int)arg1;
- (void)_setPublicPort:(unsigned int)arg1;
- (id)_getStatusReportDictsFromClient;
- (void)handleBrokenPipe;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (BOOL)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3;
- (id)statusReports;
- (void)_reallyRegisterForInterrogation;
- (BOOL)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(int)arg2;
- (BOOL)_resetThrottleTimersForAccountId:(id)arg1;
- (void)resetTimersAndWarnings;
- (void)_registerForAppResumedNotification;
- (void)stopWatching;
- (unsigned int)serverPort;
- (BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2 onRunloop:(id)arg3;
- (BOOL)cancelServerContactsSearch:(id)arg1;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2;
- (id)defaultContainerIdentifierForAccountID:(id)arg1 andDataclass:(int)arg2;
- (BOOL)processMeetingRequests:(id)arg1 inFolderWithId:(id)arg2 forAccountWithId:(id)arg3;
- (BOOL)requestPolicyUpdateForAccountID:(id)arg1;
- (BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (int)openDADConnectionOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)upgradeAccountWithId:(id)arg1 withProtocolVersion:(id)arg2;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 andAccountWithID:(id)arg3;

@end
