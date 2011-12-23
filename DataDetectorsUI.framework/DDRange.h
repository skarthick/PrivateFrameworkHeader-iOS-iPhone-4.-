/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class DOMNode;

@interface DDRange : NSObject  {
    DOMNode *_node;
    int _startOffset;
    int _endOffset;
}

@property int endOffset;
@property int startOffset;
@property(retain) DOMNode * node;

+ (id)rangeWithDOMRange:(id)arg1;

- (long)endOffset;
- (id)node;
- (long)startOffset;
- (void)dealloc;
- (id)description;
- (void)setStartOffset:(long)arg1;
- (id)initWithDOMRange:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setEndOffset:(long)arg1;

@end
