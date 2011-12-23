/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, NSString, EDResources;

@interface EDPhoneticInfo : NSObject <EDImmutableObject> {
    EDResources *mResources;
    unsigned int mFontIndex;
    NSString *mString;
    int mType;
    int mAlign;
    EDCollection *mRuns;
    boolmDoNotModify;
}

+ (id)phoneticInfoWithResources:(id)arg1;

- (int)type;
- (void)setType:(int)arg1;
- (id)string;
- (unsigned int)hash;
- (void)setString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)dealloc;
- (int)align;
- (unsigned int)fontIndex;
- (void)setFontIndex:(unsigned int)arg1;
- (id)initWithResources:(id)arg1;
- (BOOL)isEqualToEDPhoneticInfo:(id)arg1;
- (void)setDoNotModify:(bool)arg1;
- (id)runs;
- (void)setAlign:(int)arg1;

@end
