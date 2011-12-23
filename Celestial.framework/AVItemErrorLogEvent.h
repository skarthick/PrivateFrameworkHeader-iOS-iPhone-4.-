/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDate, AVItemErrorLogEventInternal, NSString;

@interface AVItemErrorLogEvent : NSObject <NSCopying> {
    AVItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property(readonly) NSDate * date;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) NSString * playbackSessionID;
@property(readonly) int errorStatusCode;
@property(readonly) NSString * errorDomain;
@property(readonly) NSString * errorComment;


- (id)date;
- (void)finalize;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)errorStatusCode;
- (id)serverAddress;
- (id)playbackSessionID;
- (id)errorDomain;
- (id)errorComment;
- (id)URI;

@end
