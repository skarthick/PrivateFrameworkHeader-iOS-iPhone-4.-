/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSProtocolChecker, NSString, Protocol;

@interface IMRemoteProxy : NSObject  {
    NSProtocolChecker *_protocolChecker;
    NSString *_identifier;
    id _target;
    SEL _selector;
}

@property(copy) Protocol * remoteProtocol;
@property(copy) NSString * identifier;
@property SEL action;
@property id target;


- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)dealloc;
- (void)setTarget:(id)arg1;
- (id)remoteProtocol;
- (void)setRemoteProtocol:(id)arg1;

@end
