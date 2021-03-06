/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder  {
    NSMutableArray *_items;
}


- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithArray:(id)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (id)itemForIndex:(unsigned int)arg1;
- (unsigned int)numberOfPaths;
- (id)pathAtIndex:(unsigned int)arg1;
- (void)shuffleWithCurrentIndex:(unsigned int)arg1;
- (unsigned int)itemCount;

@end
