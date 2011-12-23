/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, CoreDAVItem, CoreDAVHrefItem;

@interface CoreDAVPrincipalItem : CoreDAVItem  {
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_all;
    CoreDAVItemWithNoChildren *_authenticated;
    CoreDAVItemWithNoChildren *_unauthenticated;
    CoreDAVItem *_property;
    CoreDAVItemWithNoChildren *_selfItem;
}

@property(retain) CoreDAVItemWithNoChildren * selfItem;
@property(retain) CoreDAVItem * property;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;
@property(retain) CoreDAVItemWithNoChildren * authenticated;
@property(retain) CoreDAVItemWithNoChildren * all;
@property(retain) CoreDAVHrefItem * href;


- (void)setAuthenticated:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setProperty:(id)arg1;
- (void)write:(id)arg1;
- (void)setHref:(id)arg1;
- (id)href;
- (void)setUnauthenticated:(id)arg1;
- (id)selfItem;
- (id)initTypeIsAll;
- (id)initTypeIsHREFWithURL:(id)arg1;
- (id)initTypeIsProperty:(id)arg1;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsUnauthenticated;
- (id)initTypeIsSelf;
- (void)setSelfItem:(id)arg1;
- (void)setAll:(id)arg1;
- (id)hashString;
- (id)all;
- (id)unauthenticated;
- (id)authenticated;
- (id)copyParseRules;
- (id)property;

@end
