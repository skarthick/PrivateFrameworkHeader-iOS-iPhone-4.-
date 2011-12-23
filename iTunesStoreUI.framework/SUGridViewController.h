/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUTableDataSource, SUGridView;

@interface SUGridViewController : SUViewController <SUGridViewDataSource, SUGridViewDelegate> {
    SUTableDataSource *_dataSource;
    int _disappearOrientation;
    float _tableMargin;
    int _tableViewStyle;
}

@property(readonly) SUGridView * gridView;
@property float tableMargin;
@property(retain) SUTableDataSource * dataSource;


- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)initWithTableViewStyle:(int)arg1;
- (BOOL)deleteCellAtIndexPath:(id)arg1;
- (id)_existingGridView;
- (float)tableMargin;
- (void)setTableMargin:(float)arg1;
- (id)gridView;
- (void)gridView:(id)arg1 commitEditingStyle:(int)arg2 forCellAtIndexPath:(id)arg3;
- (int)numberOfSectionsInGridView:(id)arg1;
- (id)gridView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)gridView:(id)arg1 editingStyleForCellAtIndexPath:(id)arg2;
- (float)gridView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)marginForGridView:(id)arg1;
- (id)gridView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)gridView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)gridView:(id)arg1 gridCellForRowAtIndexPath:(id)arg2;
- (int)gridView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)gridView:(id)arg1 numberOfColumnsInSection:(int)arg2;

@end
