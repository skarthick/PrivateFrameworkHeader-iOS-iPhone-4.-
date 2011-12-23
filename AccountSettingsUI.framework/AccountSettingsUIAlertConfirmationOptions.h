/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSString;

@interface AccountSettingsUIAlertConfirmationOptions : NSObject  {
    int _selectedButtonIndex;
    int _keepDataButtonIndex;
    int _mergeDataButtonIndex;
    int _deleteDataButtonIndex;
    int _cancelButtonIndex;
    NSString *_dataclass;
    BOOL _enableAction;
    NSString *_tag;
}

+ (BOOL)isEnableAction:(id)arg1;
+ (BOOL)isNonDestructiveAction:(id)arg1;

- (void)setTag:(id)arg1;
- (id)tag;
- (id)init;
- (void)dealloc;
- (void)setIsEnableAction:(BOOL)arg1;
- (void)setupButtonIndexesForActions:(id)arg1;
- (BOOL)userCancelled;
- (BOOL)userChoiceWillDeleteData;
- (id)userAction;
- (void)setDataclass:(id)arg1;

@end
