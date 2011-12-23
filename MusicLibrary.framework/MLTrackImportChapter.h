/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSURL, NSData, NSString;

@interface MLTrackImportChapter : NSObject  {
    NSData *_imageData;
    unsigned int _time;
    NSString *_title;
    NSURL *_url;
    NSString *_urlTitle;
    unsigned int _startTimeInMilliseconds;
}

@property(copy) NSString * URLTitle;
@property(copy) NSURL * URL;
@property(copy) NSString * title;
@property unsigned int startTimeInMilliseconds;
@property(copy) NSData * imageData;


- (void)setURL:(id)arg1;
- (int)compare:(id)arg1;
- (id)URL;
- (id)title;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (id)imageData;
- (id)URLTitle;
- (void)setURLTitle:(id)arg1;
- (unsigned int)startTimeInMilliseconds;
- (void)setStartTimeInMilliseconds:(unsigned int)arg1;
- (void)setImageData:(id)arg1;

@end
