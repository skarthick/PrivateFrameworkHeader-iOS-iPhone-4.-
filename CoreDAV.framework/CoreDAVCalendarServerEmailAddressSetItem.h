/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem  {
    NSMutableSet *_emailAddresses;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(retain) CoreDAVItemWithNoChildren * unauthenticated;
@property(retain) NSMutableSet * emailAddresses;


- (id)emailAddresses;
- (void)setEmailAddresses:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)addEmailAddress:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)unauthenticated;
- (id)copyParseRules;

@end
