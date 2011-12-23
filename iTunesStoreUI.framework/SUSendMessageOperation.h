/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSOperationQueue, SUMessage;

@interface SUSendMessageOperation : ISOperation  {
    SUMessage *_message;
    NSOperationQueue *_operationQueue;
}

@property(readonly) SUMessage * message;


- (id)message;
- (void)run;
- (void)cancel;
- (id)init;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;
- (id)_copyResourcesByUploadingParts:(id*)arg1;
- (id)_copyResourcesForLocalPart:(id)arg1;
- (id)_copyResourcesForUploadOperation:(id)arg1;
- (id)_newStoreURLOperationForResources:(id)arg1 error:(id*)arg2;
- (id)_newUploadOperationForMessagePart:(id)arg1;
- (BOOL)_prepareMessageParts:(id*)arg1;

@end
