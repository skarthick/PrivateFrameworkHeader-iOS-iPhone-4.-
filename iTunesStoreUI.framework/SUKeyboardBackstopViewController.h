/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUKeyboardBackstopDelegate>, SUViewController, UIControl, UIColor;

@interface SUKeyboardBackstopViewController : SUViewController  {
    int _animationCount;
    UIControl *_backstopView;
    SUViewController *_contentViewController;
    <SUKeyboardBackstopDelegate> *_delegate;
    BOOL _displayContentAfterAnimation;
}

@property(retain) UIColor * backstopBackgroundColor;
@property <SUKeyboardBackstopDelegate> * delegate;
@property(retain) SUViewController * contentViewController;


- (void)loadView;
- (id)contentViewController;
- (void)setContentViewController:(id)arg1;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)backstopBackgroundColor;
- (void)setBackstopBackgroundColor:(id)arg1;
- (void)_keyboardDidHide;
- (void)_orderOutAnimationDidStop;
- (void)_orderInAnimationDidStop;
- (void)_animateWithKeyboardInfo:(id)arg1 didEndSelector:(SEL)arg2;
- (void)_displayContentViewController;
- (void)_layoutViewsForKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setContentViewsVisible:(BOOL)arg1;
- (void)_backstopAction:(id)arg1;
- (id)_backstopView;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;

@end
