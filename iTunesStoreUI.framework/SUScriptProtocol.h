/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptURLRequest, NSString, NSArray;

@interface SUScriptProtocol : SUScriptObject  {
}

@property(retain) NSArray * allowedOrientations;
@property(readonly) NSString * clientIdentifier;
@property(retain) NSString * copyright;
@property BOOL excludeFromNavigationHistory;
@property(retain) SUScriptURLRequest * overlayBackgroundURLRequest;
@property(readonly) NSString * protocolVersion;
@property BOOL shouldShowInOverlay;

+ (id)webScriptNameForKey:(const char *)arg1;

- (id)attributeKeys;
- (BOOL)shouldShowInOverlay;
- (void)setValuesFromDictionary:(id)arg1;
- (BOOL)excludeFromNavigationHistory;
- (id)overlayBackgroundURLRequest;
- (id)protocolVersion;
- (void)setAllowedOrientations:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setExcludeFromNavigationHistory:(BOOL)arg1;
- (void)setOverlayBackgroundURLRequest:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setShouldShowInOverlay:(BOOL)arg1;
- (id)_copyProtocol;
- (void)_setProtocol:(id)arg1;
- (void)_setValue:(id)arg1 forProtocolKey:(id)arg2;
- (id)_webThreadValueForProtocolKey:(id)arg1;
- (id)allowedOrientations;
- (id)scriptAttributeKeys;
- (void)setClientIdentifier:(id)arg1;
- (id)clientIdentifier;
- (id)copyright;
- (id)_className;

@end
