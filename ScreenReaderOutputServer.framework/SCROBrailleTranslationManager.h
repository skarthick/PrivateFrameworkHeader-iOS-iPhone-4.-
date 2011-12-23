/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class <SCROBrailleTranslatorProtocol>, NSBundle, NSLock;

@interface SCROBrailleTranslationManager : NSObject  {
    NSLock *_contentLock;
    <SCROBrailleTranslatorProtocol> *_translator;
    NSBundle *_translatorBundle;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (void)release;
- (id)init;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (BOOL)tableSupportsContractedBraille;
- (BOOL)tableSupportsEightDotBraille;
- (id)tableIdentifier;
- (void)setTranslationTableWithTableIdentifier:(id)arg1;
- (id)textForPrintBraille:(id)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id*)arg4;
- (id)printBrailleForText:(id)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id*)arg4;

@end
