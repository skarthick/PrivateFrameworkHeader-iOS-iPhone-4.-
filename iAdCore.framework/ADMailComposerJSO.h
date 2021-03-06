/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSArray, <ADJSODelegate>, WebScriptObject, NSString;

@interface ADMailComposerJSO : ADJavaScriptObject  {
    <ADJSODelegate> *_delegate;
    WebScriptObject *_listener;
    NSArray *_messageRecipients;
    NSString *_subject;
    NSString *_messageBody;
    NSArray *_attachmentDownloads;
    unsigned int _attachmentDownloadCount;
    BOOL _isHTML;
}

@property BOOL isHTML;
@property unsigned int attachmentDownloadCount;
@property(retain) NSArray * attachmentDownloads;
@property(retain) NSString * messageBody;
@property(retain) NSString * subject;
@property(retain) NSArray * messageRecipients;
@property(retain) WebScriptObject * listener;
@property <ADJSODelegate> * delegate;

+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptingKeys;
+ (id)scriptSelectors;

- (id)attachmentDownloads;
- (void)setAttachmentDownloads:(id)arg1;
- (void)mailComposerAttachmentDownloadDidFinish:(id)arg1;
- (void)mailComposerAttachmentDownload:(id)arg1 didFailWithError:(id)arg2;
- (void)setIsHTML:(BOOL)arg1;
- (unsigned int)attachmentDownloadCount;
- (void)setAttachmentDownloadCount:(unsigned int)arg1;
- (void)setMessageRecipients:(id)arg1;
- (id)toRecipients;
- (id)messageRecipients;
- (void)setListener:(id)arg1;
- (id)subject;
- (BOOL)isHTML;
- (void)send;
- (void)reset;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setToRecipients:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)listener;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setSubject:(id)arg1;
- (id)messageBody;
- (void)setMessageBody:(id)arg1;
- (void)setAttachments:(id)arg1;

@end
