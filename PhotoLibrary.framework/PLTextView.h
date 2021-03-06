/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel;

@interface PLTextView : UITextView  {
    UILabel *_placeholder;
    BOOL _showingPlaceholder;
}

+ (void)_initializeSafeCategory;

- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)updatePlaceholder;
- (id)_placeholder;
- (void)setPlaceholderText:(id)arg1;
- (id)accessibilityLabel;

@end
