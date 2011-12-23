/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextListStyle, NSMutableArray, OADTextBodyProperties;

@interface OADTextBody : NSObject  {
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}


- (id)plainText;
- (id)init;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (unsigned int)paragraphCount;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (void)addParagraphsFromTextBody:(id)arg1;
- (id)addParagraph;
- (id)textListStyle;
- (void)setProperties:(id)arg1;
- (void)removeAllParagraphs;
- (id)overrideTextListStyle;
- (void)applyTextListStyle:(id)arg1;
- (void)removeTrailingNewlines;
- (void)flattenProperties;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (id)properties;

@end
