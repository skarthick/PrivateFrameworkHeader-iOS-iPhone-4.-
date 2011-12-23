/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSMutableSet, WAKView, WebDataSource, NSMutableArray;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {
    WAKView *_documentView;
    WebDataSource *_dataSource;
    NSMutableArray *_views;
    BOOL _started;
    NSMutableSet *_checksInProgress;
    NSMutableArray *_viewsNotInDocument;
}

+ (BOOL)isPlugInView:(id)arg1;
+ (void)addPlugInView:(id)arg1;
+ (void)pluginViewHidden:(id)arg1;
+ (id)plugInViewWithArguments:(id)arg1 fromPluginPackage:(id)arg2;

- (BOOL)plugInsAreRunning;
- (id)superlayerForPluginView:(id)arg1;
- (BOOL)processingUserGesture;
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg1 inFrame:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4;
- (void)webPlugInContainerLoadRequest:(id)arg1 inFrame:(id)arg2;
- (void)webPlugInContainerWillShowFullScreenForView:(id)arg1;
- (void)webPlugInContainerDidHideFullScreenForView:(id)arg1;
- (void)showStatus:(id)arg1;
- (id)URLPolicyCheckReferrer;
- (void)_webPluginContainerSetMediaPlayerProxy:(id)arg1 forElement:(id)arg2;
- (void)_webPluginContainerPostMediaPlayerNotification:(int)arg1 forElement:(id)arg2;
- (void)stopOnePlugin:(id)arg1;
- (void)destroyOnePlugin:(id)arg1;
- (void)_cancelOutstandingChecks;
- (void)webPlugInContainerShowStatus:(id)arg1;
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg1;
- (void)destroyAllPlugins;
- (void)stopAllPlugins;
- (void)startAllPlugins;
- (void)addPlugin:(id)arg1;
- (void)destroyPlugin:(id)arg1;
- (void)pluginView:(id)arg1 receivedResponse:(id)arg2;
- (void)pluginView:(id)arg1 receivedData:(id)arg2;
- (void)pluginView:(id)arg1 receivedError:(id)arg2;
- (void)pluginViewFinishedLoading:(id)arg1;
- (void)pluginViewCreated:(id)arg1;
- (id)initWithDocumentView:(id)arg1;
- (id)webFrame;
- (void)setDataSource:(id)arg1;
- (id)webView;
- (void)dealloc;

@end
