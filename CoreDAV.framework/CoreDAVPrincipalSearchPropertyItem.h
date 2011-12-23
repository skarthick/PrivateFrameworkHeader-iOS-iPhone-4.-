/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, CoreDAVItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem  {
    CoreDAVItem *_prop;
    CoreDAVLeafItem *_descriptionItem;
}

@property(retain) CoreDAVLeafItem * descriptionItem;
@property(retain) CoreDAVItem * prop;


- (id)init;
- (void)dealloc;
- (id)description;
- (void)setProp:(id)arg1;
- (id)descriptionItem;
- (void)setDescriptionItem:(id)arg1;
- (id)prop;
- (id)copyParseRules;

@end
