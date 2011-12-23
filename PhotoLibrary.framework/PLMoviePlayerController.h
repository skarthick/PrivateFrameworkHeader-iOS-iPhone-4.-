/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLMoviePlayerController : UIMoviePlayerController  {
    id _playerDelegate;
}

+ (void)reset;
+ (id)sharedMoviePlayerController;
+ (void)setVideoIsRemaking:(BOOL)arg1;
+ (BOOL)movieWillBecomeReady;
+ (void)setMovieWillBecomeReady:(BOOL)arg1;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setMovieWithPath:(id)arg1;

@end
