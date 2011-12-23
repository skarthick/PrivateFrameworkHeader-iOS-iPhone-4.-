/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UINavigationController, UITableView, NSArray;

@interface CKLinksController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    id _delegate;
    UINavigationController *_navigationController;
    NSArray *_linkProps;
    UITableView *_table;
}


- (id)initWithNavigationController:(id)arg1;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setLinkProperties:(id)arg1;

@end