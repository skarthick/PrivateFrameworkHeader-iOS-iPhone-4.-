/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMServiceAgentCenter;

@interface IMServiceAgentImpl : IMServiceAgent  {
    IMServiceAgentCenter *_notifCenter;
    BOOL _anyAccountsConnected;
}

+ (void)initialize;
+ (void)_statusImageAppearanceChanged:(id)arg1;
+ (void)_determineStatusImageAppearance;
+ (id)sharedAgent;
+ (id)notificationCenter;
+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned int)arg1;
+ (id)imageURLForStatus:(unsigned int)arg1;

- (id)serviceWithName:(id)arg1;
- (id)serviceWithNameNonBlocking:(id)arg1;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (oneway void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (oneway void)setupComplete;
- (void)_daemonConnected:(id)arg1;
- (void)_daemonDisconnected:(id)arg1;
- (oneway void)centerWillAddObserver;
- (oneway void)centerDidRemoveObserver;
- (void)_customMessagesChanged:(id)arg1;
- (void)imHandleStatusChangedNotification:(id)arg1;
- (void)imHandleInfoChangedNotification:(id)arg1;
- (void)_processAccountStatusChange;
- (oneway void)activeAccountsChanged:(id)arg1 forService:(id)arg2;
- (void)_statusImageAppearanceChanged:(id)arg1;
- (id)myAwayMessages;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2;
- (id)myAvailableMessages;
- (oneway void)launchIfNecessary;
- (oneway void)account:(id)arg1 loginStatusChanged:(unsigned int)arg2 message:(id)arg3 reason:(unsigned int)arg4 properties:(id)arg5;
- (unsigned long long)vcCapabilities;
- (id)notificationCenter;

@end
