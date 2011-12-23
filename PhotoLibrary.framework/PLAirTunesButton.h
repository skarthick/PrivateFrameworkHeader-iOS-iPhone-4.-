/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAirTunesButton : UINavigationButton  {
    int _mode;
    BOOL _isInMiniBar;
}

@property BOOL isInMiniBar;
@property int mode;


- (int)mode;
- (void)setMode:(int)arg1;
- (void)updateForMiniBarState:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)isInMiniBar;
- (id)_imageNameForMode:(int)arg1 isInMinibar:(BOOL)arg2;
- (void)_setImagesForMode:(int)arg1 miniBar:(BOOL)arg2;
- (id)initWithAirTunesMode:(int)arg1;
- (void)setIsInMiniBar:(BOOL)arg1;

@end
