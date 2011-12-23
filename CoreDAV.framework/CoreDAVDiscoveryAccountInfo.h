/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVAccountInfoProvider>, NSError, NSString, NSData, NSSet, NSURL;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {
    NSString *_scheme;
    NSString *_host;
    NSString *_serverRoot;
    int _port;
    NSString *_user;
    NSString *_password;
    NSData *_identityPersist;
    NSURL *_principalURL;
    NSString *_accountID;
    NSSet *_serverComplianceClasses;
    NSString *_userAgentHeader;
    BOOL _shouldFailAllTasks;
    BOOL _started;
    NSError *_error;
    <CoreDAVAccountInfoProvider> *_backingAccountInfoProvider;
}

@property(retain) NSString * userAgentHeader;
@property(retain) NSSet * serverComplianceClasses;
@property(retain) NSError * error;
@property BOOL started;
@property(retain) <CoreDAVAccountInfoProvider> * backingAccountInfoProvider;
@property BOOL shouldFailAllTasks;
@property(retain) NSString * accountID;
@property(retain) NSURL * principalURL;
@property(retain) NSData * identityPersist;
@property(retain) NSString * password;
@property(retain) NSString * user;
@property(retain) NSString * serverRoot;
@property int port;
@property(retain) NSString * host;
@property(retain) NSString * scheme;


- (void)setPort:(int)arg1;
- (int)port;
- (id)user;
- (id)url;
- (id)password;
- (id)scheme;
- (id)host;
- (void)dealloc;
- (id)description;
- (id)principalURL;
- (void)setPrincipalURL:(id)arg1;
- (id)accountID;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setScheme:(id)arg1;
- (id)userAgentHeader;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)arg1;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)started;
- (id)serverComplianceClasses;
- (id)initWithAccountInfoProvider:(id)arg1;
- (id)mmeToken;
- (BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
- (BOOL)handleCertificateError:(id)arg1;
- (BOOL)shouldTurnModalOnBadPassword;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
- (void)setUserAgentHeader:(id)arg1;
- (void)setServerComplianceClasses:(id)arg1;
- (void)setStarted:(BOOL)arg1;
- (id)backingAccountInfoProvider;
- (void)setBackingAccountInfoProvider:(id)arg1;
- (void)setAccountID:(id)arg1;
- (void)setIdentityPersist:(id)arg1;
- (void)setUser:(id)arg1;
- (id)serverRoot;
- (void)setServerRoot:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (BOOL)shouldFailAllTasks;
- (BOOL)handleTrustChallenge:(id)arg1;
- (id)identityPersist;
- (void)setShouldFailAllTasks:(BOOL)arg1;

@end
