/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebDefaultFormDelegate : NSObject <WebFormDelegate> {
}

+ (id)sharedFormDelegate;

- (void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;
- (BOOL)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;
- (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;

@end
