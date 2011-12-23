/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDDrawable;

@interface GQDWrapPoint : NSObject  {
    struct CGPoint { 
        float x; 
        float y; 
    } mPoint;
    float mDistance;
    GQDDrawable *mDrawable;
    int mFlowType;
    int mZIndex;
}


- (id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4;
- (int)comparePoint:(id)arg1;
- (int)zIndex;

@end
