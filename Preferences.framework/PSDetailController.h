/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSEditingPane;

@interface PSDetailController : PSViewController  {
    PSEditingPane *_pane;
}

@property PSEditingPane * pane;


- (void)statusBarWillAnimateByHeight:(float)arg1;
- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)suspend;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)saveChanges;
- (void)setPane:(id)arg1;
- (id)pane;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paneFrame;

@end
