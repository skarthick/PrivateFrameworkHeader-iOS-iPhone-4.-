/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UILongPressGestureRecognizer, UITapGestureRecognizer, UIPDFSelectionController, UIPDFPageView, UIPDFViewMagnifyController, UIMenuController;

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate> {
    UIPDFPageView *_pdfPageView;
    UITapGestureRecognizer *_singleTapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UILongPressGestureRecognizer *_briefPressRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIMenuController *_menuController;
    UIPDFSelectionController *_selectionController;
    UIPDFViewMagnifyController *_magnifyController;
    BOOL _showMagnifier;
    BOOL _showLoupe;
}


- (void)copy:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)initWithView:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)selectAll:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)nextResponder;
- (void)dealloc;
- (void)enableRecognizers;
- (void)disableRecognizers;
- (void)gesturesCompleted;
- (void)browse:(struct CGPoint { float x1; float x2; })arg1;
- (void)briefPressRecognized:(id)arg1;
- (void)longPressRecognized:(id)arg1;
- (void)singleTapRecognized:(id)arg1;
- (void)doubleTapRecognized:(id)arg1;
- (void)addHTML:(id)arg1;
- (void)addPlainText:(id)arg1;
- (void)showMenu;

@end
