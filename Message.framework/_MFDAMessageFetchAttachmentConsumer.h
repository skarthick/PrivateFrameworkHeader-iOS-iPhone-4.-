/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData, NSMutableData, ActivityMonitor;

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer> {
    NSMutableData *_accumulatedData;
    unsigned int _expectedLength;
    ActivityMonitor *_monitor;
    BOOL _dataWasBase64;
}

@property(readonly) BOOL dataWasBase64;
@property unsigned int expectedLength;
@property(readonly) NSData * accumulatedData;


- (void)setExpectedLength:(unsigned int)arg1;
- (void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4;
- (void)attachmentFetchCompletedWithStatus:(int)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(BOOL)arg4;
- (id)initWithActivityMonitor:(id)arg1;
- (BOOL)dataWasBase64;
- (id)accumulatedData;
- (void)dealloc;
- (unsigned int)expectedLength;

@end
