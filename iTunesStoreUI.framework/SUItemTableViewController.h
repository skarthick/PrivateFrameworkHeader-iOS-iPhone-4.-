/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUDocumentInteractionSession;

@interface SUItemTableViewController : SUTableViewController  {
    SUDocumentInteractionSession *_documentInteractionSession;
}


- (void)reloadData;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)purchaseItemAtIndexPath:(id)arg1;
- (BOOL)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2;
- (void)_purchasedItemSetChangedNotification:(id)arg1;
- (void)_chooseApplicationToOpenDocumentAtIndexPath:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_hidePurchaseConfirmationForButton:(id)arg1;
- (id)_preferredApplicationFromCandidates:(id)arg1;
- (void)_promptToOpenUTI:(id)arg1 fromIndexPath:(id)arg2 withCompletionHandler:(id)arg3;
- (void)_removeTouchCaptureView;
- (void)_showPurchaseConfirmationForButton:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)itemOfferButtonAction:(id)arg1;
- (void)_touchCaptureAction:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;

@end
