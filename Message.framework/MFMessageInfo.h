/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageInfo : NSObject  {
    long long _generationNumber;
    unsigned int _uid;
    unsigned int _dateReceivedInterval;
    unsigned int _conversationHash;
    unsigned int _mailboxID;
    unsigned int _retainCount;
    BOOL _read;
    BOOL _deleted;
    BOOL _uidIsLibraryID;
    BOOL _hasAttachments;
}

@property(readonly) long long generationNumber;
@property BOOL deleted;
@property(getter=isKnownToHaveAttachments) BOOL knownToHaveAttachments;
@property BOOL uidIsLibraryID;
@property BOOL read;
@property unsigned int mailboxID;
@property unsigned int conversationHash;
@property unsigned int dateReceivedInterval;
@property unsigned int uid;

+ (long long)newGenerationNumber;

- (unsigned int)dateReceivedInterval;
- (int)generationCompare:(id)arg1;
- (BOOL)isKnownToHaveAttachments;
- (BOOL)uidIsLibraryID;
- (void)setConversationHash:(unsigned int)arg1;
- (void)setUidIsLibraryID:(BOOL)arg1;
- (long long)generationNumber;
- (void)setDateReceivedInterval:(unsigned int)arg1;
- (void)setRead:(BOOL)arg1;
- (void)setKnownToHaveAttachments:(BOOL)arg1;
- (unsigned int)conversationHash;
- (BOOL)read;
- (unsigned int)mailboxID;
- (void)setMailboxID:(unsigned int)arg1;
- (unsigned int)uid;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)description;
- (void)setDeleted:(BOOL)arg1;
- (BOOL)deleted;
- (void)setUid:(unsigned int)arg1;

@end
