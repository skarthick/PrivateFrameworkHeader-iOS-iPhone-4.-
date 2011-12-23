/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSString;

@interface GrammarPart : NSObject  {
    int _order;
    int _depth;
    NSString *_name;
}

@property(readonly) NSString * name;
@property(readonly) int depth;
@property(readonly) int order;

+ (id)instanceFromPlist:(id)arg1;

- (id)name;
- (void)dealloc;
- (id)description;
- (int)order;
- (int)orderComparedTo:(id)arg1;
- (void)genericSetUpFromPlist:(id)arg1;
- (id)appliedTo:(id)arg1;
- (int)depth;

@end
