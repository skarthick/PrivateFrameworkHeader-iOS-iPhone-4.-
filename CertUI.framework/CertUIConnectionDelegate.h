/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

@class NSString, CertUITrustManager;

@interface CertUIConnectionDelegate : NSObject  {
    CertUITrustManager *_trustManager;
    id _forwardingDelegate;
    NSString *_connectionDisplayName;
    struct { 
        unsigned int canAuthenticateAgainstProtectionSpace : 1; 
        unsigned int didReceiveAuthenticationChallenge : 1; 
    } _delegateRespondsTo;
}

@property(copy) NSString * connectionDisplayName;
@property id forwardingDelegate;


- (void)setForwardingDelegate:(id)arg1;
- (void)_continueConnectionWithResponse:(int)arg1 challenge:(id)arg2 service:(id)arg3;
- (id)connectionDisplayName;
- (id)forwardingDelegate;
- (void)setConnectionDisplayName:(id)arg1;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end
