/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDContentFormatsCollection : EDKeyedCollection  {
    unsigned int mNextContentFormatId;
}


- (id)init;
- (unsigned int)addObject:(id)arg1;
- (unsigned int)addOrEquivalentObject:(id)arg1;
- (void)setupDefaults;
- (void)addDefaultWithNSString:(id)arg1 formatId:(unsigned int)arg2;
- (bool)isOverwritingKeyOK;

@end
