/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class YTSearchRequest, NSMutableArray;

@interface YTBookmarksVideoDataSource : YTVideoDataSource  {
    NSMutableArray *_bookmarkedShortIDs;
    YTSearchRequest *_bookmarksSearchRequest;
    BOOL _lastReloadWasAccountsFavorites;
}


- (void)reloadData;
- (BOOL)isLoading;
- (id)init;
- (void)dealloc;
- (void)_nextBatch;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned int)arg3 videosRemaining:(unsigned int)arg4;
- (void)addVideo:(id)arg1;
- (unsigned int)maxVideosToSave;
- (void)searchRequest:(id)arg1 foundBatchURL:(id)arg2;

@end
