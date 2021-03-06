/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary, NSString, MailboxUid, MailAccount, NSMutableArray, MessageCriterion;

@interface MailboxUid : MFWeakObject <MFWeakReferenceHolder> {
    NSString *uniqueId;
    unsigned int _mailboxID;
    MailAccount *_account;
    NSString *_pathComponent;
    unsigned int _attributes;
    MailboxUid *_parent;
    NSMutableArray *_children;
    MailAccount *_representedAccount;
    NSString *pendingNameChange;
    MessageCriterion *_criterion;
    BOOL allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    NSString *_permanentTag;
    int _type;
    NSMutableDictionary *_userInfo;
}

+ (id)specialNameForType:(int)arg1;
+ (BOOL)isOutgoingMailboxType:(int)arg1;
+ (BOOL)isDraftsMailboxType:(int)arg1;

- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (BOOL)alwaysWriteFullMessageFile;
- (unsigned int)mailboxID;
- (BOOL)isContainer;
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 permanentTag:(id)arg4;
- (void)setPendingNameChange:(id)arg1;
- (id)displayNameUsingSpecialNames;
- (id)permanentTag;
- (void)setPermanentTag:(id)arg1;
- (unsigned int)nonDeletedCount;
- (BOOL)hasChildren;
- (id)childEnumerator;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1;
- (unsigned int)numberOfChildren;
- (unsigned int)indexOfChild:(id)arg1;
- (id)childWithPermanentTag:(id)arg1;
- (id)descendantWithPermanentTag:(id)arg1;
- (id)mutableCopyOfChildren;
- (void)_deleteChildrenWithURLsIfInvalid:(id)arg1 fullPaths:(id)arg2;
- (id)fullPathNonNil;
- (void)sortChildren;
- (void)flushCriteria;
- (id)topMailbox;
- (id)rootMailbox;
- (BOOL)isSpecialMailboxUid;
- (BOOL)isOutgoingMailboxUid;
- (id)realFullPath;
- (id)pathRelativeToMailbox:(id)arg1;
- (id)URLStringWithAccount:(id)arg1;
- (id)oldURLString;
- (id)URLStringNonNil;
- (int)compareWithMailboxUid:(id)arg1;
- (int)indexToInsertChildMailboxUid:(id)arg1;
- (BOOL)isDescendantOfMailbox:(id)arg1;
- (id)_loadUserInfo;
- (BOOL)userInfoBoolForKey:(id)arg1;
- (void)setUserInfoBool:(BOOL)arg1 forKey:(id)arg2;
- (id)userInfoDictionary;
- (void)setUserInfoWithDictionary:(id)arg1;
- (id)userInfoForSerialization;
- (id)ancestralAccount;
- (id)criterion;
- (void)setCriterion:(id)arg1;
- (void)setLastViewedMessageID:(id)arg1;
- (void)addToPostOrderTraversal:(id)arg1;
- (void)objectWillBeDeallocated:(id)arg1;
- (id)URLString;
- (id)depthFirstEnumerator;
- (BOOL)isStore;
- (id)accountRelativePath;
- (BOOL)setUnreadCount:(unsigned int)arg1;
- (id)childWithName:(id)arg1;
- (BOOL)setChildren:(id)arg1;
- (void)setRepresentedAccount:(id)arg1;
- (id)tildeAbbreviatedPath;
- (id)representedAccount;
- (id)lastViewedMessageID;
- (unsigned int)unreadCount;
- (id)lastViewedMessageDate;
- (BOOL)isSelectable;
- (BOOL)isVisible;
- (id)displayName;
- (BOOL)isValid;
- (unsigned int)attributes;
- (void)setAttributes:(unsigned int)arg1;
- (id)URL;
- (int)type;
- (void)setType:(int)arg1;
- (void)setName:(id)arg1;
- (void)invalidate;
- (id)name;
- (id)init;
- (id)copyWithZone:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)removeChild:(id)arg1;
- (void)setParent:(id)arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (id)parent;
- (id)children;
- (id)uniqueId;
- (id)fullPath;
- (id)store;
- (id)userInfoObjectForKey:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)saveUserInfo;
- (id)account;
- (id)initWithAccount:(id)arg1;

@end
