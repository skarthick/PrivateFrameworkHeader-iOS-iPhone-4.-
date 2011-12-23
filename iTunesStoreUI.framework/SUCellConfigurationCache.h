/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray;

@interface SUCellConfigurationCache : NSObject  {
    id _cellContext;
    NSMutableArray *_configurations;
}

@property(retain) id cellContext;

+ (void)_initializeSafeCategory;

- (void)reset;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 tableHeight:(float)arg2;
- (id)configurationForRow:(unsigned int)arg1;
- (id)cellContext;
- (void)setCellContext:(id)arg1;
- (void)resetLayoutCaches;
- (void)setCellReuseSource:(id)arg1;

@end
