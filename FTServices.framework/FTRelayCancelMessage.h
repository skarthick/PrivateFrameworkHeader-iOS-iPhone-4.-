/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSString, NSData;

@interface FTRelayCancelMessage : FTMessage  {
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_relayType;
    NSNumber *_reason;
    NSData *_relayConnectionID;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
}

@property(copy) NSNumber * peerRelayPort;
@property(copy) NSData * peerRelayIP;
@property(copy) NSNumber * selfRelayPort;
@property(copy) NSData * selfRelayIP;
@property(copy) NSData * relayConnectionID;
@property(copy) NSNumber * reason;
@property(copy) NSNumber * relayType;
@property(copy) NSData * peerPushToken;
@property(copy) NSString * peerID;


- (void)setReason:(id)arg1;
- (id)peerID;
- (id)bagKey;
- (id)reason;
- (void)dealloc;
- (void)setRelayConnectionID:(id)arg1;
- (id)relayConnectionID;
- (void)setPeerPushToken:(id)arg1;
- (id)selfRelayIP;
- (id)peerRelayIP;
- (id)peerRelayPort;
- (void)setPeerRelayPort:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (id)selfRelayPort;
- (void)setSelfRelayPort:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (id)relayType;
- (void)setRelayType:(id)arg1;
- (id)peerPushToken;
- (void)setPeerID:(id)arg1;
- (id)requiredKeys;
- (id)messageBody;

@end
