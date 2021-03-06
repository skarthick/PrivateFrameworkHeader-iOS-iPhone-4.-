/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGLatLng;

@interface LBSGRectangle : PBCodable  {
    LBSGLatLng *_lowerLeft;
    LBSGLatLng *_upperRight;
}

@property(retain) LBSGLatLng * upperRight;
@property(retain) LBSGLatLng * lowerLeft;


- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)upperRight;
- (void)setUpperRight:(id)arg1;
- (id)lowerLeft;
- (void)setLowerLeft:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
