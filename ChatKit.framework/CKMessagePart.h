/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSData, CKMessage;

@interface CKMessagePart : NSObject  {
    unsigned int _height;
    unsigned int _flags;
    unsigned int _rowID;
    CKMessage *_parentMessage;
}

@property(readonly) NSData * highlightData;
@property(readonly) unsigned int rowID;
@property CKMessage * parentMessage;

+ (id)_assembleTextPartFromRange:(id)arg1;
+ (id)_newPartsForNode:(id)arg1 resources:(id)arg2;
+ (id)copyMessagePartsFromComposition:(id)arg1;
+ (id)_newPartForPartRepresentation:(id)arg1 previewPartRepresentation:(id)arg2;
+ (id)copyDeletedPart;
+ (id)copyUnknownPart;
+ (id)copyMessagePartsFromArrayRepresentation:(id)arg1;
+ (id)copyDetachedMessageParts:(id)arg1;

- (int)type;
- (id)image;
- (BOOL)isEqual:(id)arg1;
- (id)text;
- (void)dealloc;
- (id)imageData;
- (id)previewImage;
- (id)imageFilename;
- (void)setUIHeight:(unsigned long)arg1 flags:(unsigned long)arg2 store:(BOOL)arg3;
- (void)setRowID:(unsigned long)arg1;
- (id)detachedCopy;
- (id)highlightData;
- (id)composeData;
- (id)previewData;
- (void)setParentMessage:(id)arg1;
- (unsigned long)rowID;
- (void)getUIHeight:(unsigned int*)arg1 flags:(unsigned int*)arg2;
- (id)previewText;
- (id)parentMessage;
- (void)copyToPasteboard;
- (id)mediaObject;
- (id)composeImage;
- (BOOL)isDisplayable;

@end
