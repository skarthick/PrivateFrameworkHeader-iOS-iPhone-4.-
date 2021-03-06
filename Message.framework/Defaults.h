/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSUserDefaults;

@interface Defaults : NSObject  {
    NSUserDefaults *defaults;
}

+ (id)sharedInstance;

- (id)primaryEmailAddress;
- (void)setPrimaryEmailAddress:(id)arg1;
- (id)mailAccountDirectory;
- (void)setDefaultMailDirectory:(id)arg1;
- (id)defaultMailDirectory;
- (id)archiveMailbox;
- (id)draftsMailbox;
- (id)trashMailboxName;
- (id)alternateAddressesForSelf;
- (void)removeObjectForKey:(id)arg1;
- (int)integerForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (BOOL)synchronize;
- (BOOL)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;

@end
