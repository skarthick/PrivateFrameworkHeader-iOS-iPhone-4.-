/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImportSessionInfo, PLCameraImporter, PLImageTable, UIAlertView, NSMutableArray, NSTimer, PLEmptyAlbumView, UIBarButtonItem;

@interface PLImportViewController : UIViewController <PLCameraImporterDelegate, PLAlbumViewDataSource, PLAlbumViewDelegate> {
    PLCameraImporter *_importer;
    PLEmptyAlbumView *_emptyAlbumView;
    BOOL _readingImportItems;
    PLImageTable *_thumbStorage;
    unsigned int _lastUsedThumbEntry;
    NSMutableArray *_importItemThumbEntries;
    PLImportSessionInfo *_importSessionInfo;
    struct __CFUserNotification { } *_importCompleteNotification;
    UIAlertView *_notEnoughSpaceAlert;
    UIAlertView *_confirmDupsAlert;
    NSTimer *_deletedItemsTimer;
    NSTimer *_icSleepPreventionTimer;
    UIBarButtonItem *_importAllBarButton;
    UIBarButtonItem *_importSelectedBarButton;
    UIBarButtonItem *_stopImportBarButton;
    unsigned int _busyCount;
    unsigned int _imageCount;
    unsigned int _videoCount;
    unsigned int _otherCount;
}

@property(retain) PLCameraImporter * importer;


- (void)loadView;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; int x5; float x6; }*)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (id)contentScrollView;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)_localizedDeviceType;
- (id)_localizedCameraName;
- (void)_icSleepPreventionTimerFired:(id)arg1;
- (void)_setupNavigationItem;
- (void)_beginUninterruptibleOperation;
- (void)_resetDuplicateBadgesForceDatabaseCheck:(BOOL)arg1;
- (void)_deletedItemsTimerFired:(id)arg1;
- (void)_photosDatabaseHasChanged:(id)arg1;
- (void)_endUninterruptibleOperation;
- (void)_cleanUpAfterImport;
- (id)_textBadgeStringForCameraItem:(id)arg1;
- (void)_addEmptyAlbumViewWithError:(id)arg1;
- (id)_thumbnailPathString;
- (void)_resetThumbnailTracking;
- (struct CGImage { }*)_newGenericThumbnailForImportItem:(id)arg1;
- (void)_setThumbnailEntryForImportItem:(id)arg1 atImportItemIndex:(unsigned int)arg2;
- (id)_deletableIndexesOfItemsAtIndexes:(id)arg1;
- (BOOL)isBusy;
- (BOOL)isImporting;
- (id)importDevice;
- (void)_cancelAlerts;
- (void)setImportDevice:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification { }*)arg1 flags:(unsigned long)arg2;
- (void)_beginImportForItemAtIndex:(unsigned int)arg1;
- (void)_endImport;
- (void)_beginImportSession;
- (void)_checkDiskSpaceForImportIndexes:(id)arg1;
- (void)importAll;
- (void)importSelected;
- (void)importer:(id)arg1 didAddImportItem:(id)arg2 atIndex:(unsigned int)arg3;
- (void)importer:(id)arg1 didRemoveImportItem:(id)arg2 atIndex:(unsigned int)arg3;
- (id)albumView:(id)arg1 imageDataForPhotoAtIndex:(unsigned int)arg2 imageWidth:(int*)arg3 imageHeight:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)importer;
- (void)setImporter:(id)arg1;
- (unsigned int)numberOfPhotosForAlbumView:(id)arg1;
- (id)albumView:(id)arg1 textBadgeForPhotoAtIndex:(unsigned int)arg2;
- (void)albumViewSelectionDidChange:(id)arg1;
- (void)albumView:(id)arg1 imageCount:(unsigned int*)arg2 videoCount:(unsigned int*)arg3 otherCount:(unsigned int*)arg4;
- (void)importerDidFinishReadingImportItems:(id)arg1 error:(id)arg2;
- (void)importer:(id)arg1 didChangeImportItem:(id)arg2 changeType:(int)arg3 error:(id)arg4;
- (void)importer:(id)arg1 didCopyOriginalForItem:(id)arg2 error:(id)arg3;
- (void)importer:(id)arg1 didCompleteImportForItems:(id)arg2;
- (void)importer:(id)arg1 didImportItem:(id)arg2 error:(id)arg3;
- (void)importer:(id)arg1 didCompleteRemovalOfItems:(id)arg2;
- (void)stopImport;

@end
