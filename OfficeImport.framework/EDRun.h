/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources;

@interface EDRun : NSObject <EDKeyedObject> {
    EDResources *mResources;
    unsigned int mCharIndex;
    unsigned int mFontIndex;
}

+ (id)runWithCharIndex:(unsigned int)arg1 font:(id)arg2 resources:(id)arg3;
+ (id)runWithResources:(id)arg1;
+ (id)runWithCharIndex:(unsigned int)arg1 fontIndex:(unsigned int)arg2 resources:(id)arg3;

- (unsigned int)key;
- (BOOL)isEqual:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (unsigned int)fontIndex;
- (void)setFontIndex:(unsigned int)arg1;
- (id)initWithResources:(id)arg1;
- (id)initWithCharIndex:(unsigned int)arg1 font:(id)arg2 resources:(id)arg3;
- (BOOL)isEqualToRun:(id)arg1;
- (id)initWithCharIndex:(unsigned int)arg1 fontIndex:(unsigned int)arg2 resources:(id)arg3;
- (void)setCharIndex:(unsigned int)arg1;
- (unsigned int)charIndex;

@end
