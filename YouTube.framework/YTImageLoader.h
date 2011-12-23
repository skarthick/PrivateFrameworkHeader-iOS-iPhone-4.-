/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSNotificationCenter, NSMutableSet, NSTimer, NSLock, NSMutableArray, NSMutableDictionary;

@interface YTImageLoader : NSObject  {
    NSLock *_queueLock;
    NSMutableArray *_loadQueue;
    NSMutableSet *_loadsInProgress;
    NSLock *_cacheLock;
    NSMutableDictionary *_imageCache;
    NSMutableDictionary *_roundedThumbnailImageCache;
    NSMutableDictionary *_largeThumbnailImageCache;
    NSMutableDictionary *_pluginImageCache;
    NSMutableArray *_imageCacheLRU;
    struct __CFRunLoop { } *_loaderRunLoop;
    struct __CFRunLoopSource { } *_loaderSource;
    NSNotificationCenter *_notificationCenter;
    NSTimer *_loadStatusNotificationTimer;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _startupLock;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    } _startupCondition;
}

+ (id)sharedImageLoader;

- (id)init;
- (struct CGImage { }*)largeImageForURL:(id)arg1 videoID:(id)arg2 loadIfAbsent:(BOOL)arg3;
- (struct CGImage { }*)pluginImageForURL:(id)arg1 videoID:(id)arg2 loadIfAbsent:(BOOL)arg3;
- (BOOL)isLoadingImages;
- (struct CGImage { }*)createRoundedThumbnailWithImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)_largeThumbnailOverlay;
- (struct CGImage { }*)createSheenedThumbnailWithImage:(struct CGImage { }*)arg1 overlay:(struct CGImage { }*)arg2 width:(int)arg3 height:(int)arg4;
- (struct CGImage { }*)imageForURL:(id)arg1 rounded:(BOOL)arg2 videoID:(id)arg3 loadIfAbsent:(BOOL)arg4;
- (void)saveCache:(id)arg1;
- (void)loadCache:(id)arg1;
- (void)_mainThread_postLoadingStatusChanged;
- (void)_postLoadingStatusChanged;
- (void)_loadingStatusChanged;
- (void)_startLoader;
- (BOOL)_locked_URLIsLoading:(id)arg1;
- (void)_locked_loadImageForURL:(id)arg1 videoID:(id)arg2;
- (void)_loadImageURL:(id)arg1 videoID:(id)arg2;
- (void)_setImageData:(id)arg1 videoID:(id)arg2 forURL:(id)arg3 cacheLocked:(BOOL)arg4;
- (void)_postImageLoadedNotification:(id)arg1;
- (void)_locked_imageLoadStarted:(id)arg1;
- (void)_imageLoadFinished:(id)arg1;
- (id)_locked_saveImageCache:(id)arg1;
- (id)_locked_loadImageCache:(id)arg1;
- (id)notificationCenter;

@end
