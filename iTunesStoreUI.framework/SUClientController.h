/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUPurchaseManager, ISURLOperationPool, SUScriptExecutionContext, NSMutableDictionary, SUViewControllerFactory, NSMutableArray, SUImageCache, NSString, UIViewController, MFMailComposeViewController, NSArray;

@interface SUClientController : NSObject <MFMailComposeViewControllerDelegate, SUPurchaseManagerDelegate> {
    BOOL _active;
    NSString *_clientIdentifier;
    struct dispatch_queue_s { } *_dispatchQueue;
    NSMutableArray *_downloadQueues;
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    NSString *_localStoreFrontAtLastSuspend;
    MFMailComposeViewController *_mailComposeViewController;
    struct __CFArray { } *_offeredAssetTypes;
    NSArray *_overlayConfigurations;
    NSMutableArray *_preOrderQueues;
    SUPurchaseManager *_purchaseManager;
    UIViewController *_rootViewController;
    SUScriptExecutionContext *_scriptExecutionContext;
    NSString *_synchedStoreFrontAtLastSuspend;
    NSMutableDictionary *_urlBagKeys;
    SUViewControllerFactory *_viewControllerFactory;
    ISURLOperationPool *_imageOperationPool;
}

@property(getter=isStoreEnabled,readonly) BOOL storeEnabled;
@property(copy) struct __CFArray { }* offeredAssetTypes;
@property(readonly) NSString * storeContentLanguage;
@property(readonly) BOOL storeFrontDidChangeSinceLastSuspend;
@property(readonly) SUScriptExecutionContext * scriptExecutionContext;
@property(retain) ISURLOperationPool * imageOperationPool;
@property(retain) SUImageCache * imageCache;
@property(retain) SUViewControllerFactory * viewControllerFactory;
@property(retain) UIViewController * rootViewController;
@property(readonly) NSString * clientIdentifier;
@property(getter=isActive,readonly) BOOL active;

+ (id)sharedController;
+ (void)setSharedController:(id)arg1;

- (BOOL)openURL:(id)arg1;
- (BOOL)isActive;
- (id)init;
- (id)rootViewController;
- (void)setRootViewController:(id)arg1;
- (void)dealloc;
- (void)setImageCache:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (BOOL)openClientURL:(id)arg1;
- (void)resignActive;
- (BOOL)storeFrontDidChangeSinceLastSuspend;
- (id)storeContentLanguage;
- (id)initWithClientIdentifier:(id)arg1;
- (BOOL)displayClientURL:(id)arg1;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (id)newPreOrderQueue;
- (id)newScriptInterface;
- (struct __CFArray { }*)offeredAssetTypes;
- (BOOL)openURL:(id)arg1 inClientWithIdentifier:(id)arg2;
- (BOOL)presentAccountViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)reportAProblemForItemIdentifier:(unsigned long long)arg1;
- (void)setOfferedAssetTypes:(struct __CFArray { }*)arg1;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;
- (id)URLBagKeyForIdentifier:(id)arg1;
- (void)composeEmailByRestoringAutosavedMessage;
- (id)imageOperationPool;
- (BOOL)performActionForDialog:(id)arg1 button:(id)arg2;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)bagDidLoadNotification:(id)arg1;
- (id)_newAccountViewControllerForButtonAction:(id)arg1;
- (id)_newComposeReviewViewControllerForButtonAction:(id)arg1;
- (void)_ntsEndQueueSession:(id)arg1 fromArray:(id)arg2;
- (void)_purgeCaches;
- (void)_reloadOverlayConfigurationsFromURLBag;
- (void)_reloadScriptExecutionContextFromURLBag;
- (void)_reloadUserDefaultsFromURLBag;
- (void)setImageOperationPool:(id)arg1;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (void)presentExternalURLViewController:(id)arg1;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (BOOL)_isEnabledForNetworkConstraints:(id)arg1;
- (BOOL)isComposingEmail;
- (void)endPreOrderQueueSessionWithDownloadKinds:(id)arg1;
- (id)imageCache;
- (id)beginDownloadQueueSessionForDownloadKind:(id)arg1;
- (id)beginDownloadQueueSessionWithDownloadKinds:(id)arg1;
- (id)beginPreOrderQueueSessionWithDownloadKinds:(id)arg1;
- (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)dismissTopViewControllerAnimated:(BOOL)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (void)_syncDidFinishNotification:(id)arg1;
- (id)_ntsQueueSessionWithDownloadKinds:(id)arg1 fromArray:(id)arg2;
- (id)_ntsQueueSessionWithQueue:(id)arg1 fromArray:(id)arg2;
- (void)setViewControllerFactory:(id)arg1;
- (id)scriptExecutionContext;
- (void)endDownloadQueueSessionForQueue:(id)arg1;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (id)clientIdentifier;
- (BOOL)gotoStorePage:(id)arg1 animated:(BOOL)arg2;
- (id)viewControllerFactory;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)becomeActive;
- (void)cancelAllOperations;
- (BOOL)isStoreEnabled;

@end
