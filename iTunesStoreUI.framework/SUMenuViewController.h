/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUMenuViewControllerDelegate>, UITableView;

@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
    <SUMenuViewControllerDelegate> *_delegate;
    int _selectedIndex;
    UITableView *_tableView;
}

@property int selectedIndex;
@property <SUMenuViewControllerDelegate> * delegate;


- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reload;
- (void)setSelectedIndex:(int)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)selectedIndex;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (BOOL)_sendDidCancel;
- (BOOL)isMenuItemEnabledAtIndex:(int)arg1;
- (void)performActionForMenuItemAtIndex:(int)arg1;
- (int)numberOfMenuItems;
- (id)titleOfMenuItemAtIndex:(int)arg1;
- (struct CGSize { float x1; float x2; })maximumViewSize;

@end
