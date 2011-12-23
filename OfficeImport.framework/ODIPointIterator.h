/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIPointIterator : NSObject  {
}

+ (id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3;
+ (BOOL)addPoint:(id)arg1 state:(struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (BOOL)isPoint:(id)arg1 ofType:(int)arg2;
+ (BOOL)isDoneForState:(struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg1;
+ (void)processSelfAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (void)processChildAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState { int x1; unsigned int x2; int x3; int x4; id x5; }*)arg2;
+ (id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3;


@end
