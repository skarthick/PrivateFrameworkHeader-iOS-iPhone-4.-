/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIAlbumViewController : PLAlbumViewController  {
    int _previousStatusBarMode;
    int _newStatusBarMode;
    unsigned int _didSetPreviousStatusBarMode : 1;
}


- (void)loadView;
- (int)_imagePickerStatusBarMode;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)albumView:(id)arg1 didTapPhotoAtIndex:(unsigned int)arg2;
- (void)setAlbum:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;

@end
