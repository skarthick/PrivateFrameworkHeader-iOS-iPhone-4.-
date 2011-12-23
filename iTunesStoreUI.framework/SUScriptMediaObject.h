/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUMediaObject, NSMutableArray, NSString;

@interface SUScriptMediaObject : SUScriptObject  {
    NSMutableArray *_scriptFunctions;
    unsigned int _thumbnailOffset;
}

@property(readonly) SUMediaObject * nativeMediaObject;
@property(readonly) NSString * mediaType;

+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)valueForProperty:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)mediaType;
- (id)thumbnailWithMaximumSize:(int)arg1;
- (void)saveToLibraryWithCompletionHandler:(id)arg1;
- (void)loadLibraryThumbnailWithCompletionHandler:(id)arg1;
- (void)generateThumbnailWithMaximumSize:(int)arg1 completionHandler:(id)arg2;
- (id)nativeMediaObject;
- (id)initWithNativeMediaObject:(id)arg1;
- (void)_addScriptFunction:(id)arg1;
- (void)_removeScriptFunction:(id)arg1;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_className;

@end
