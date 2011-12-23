/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMPixelPoint : PBCodable  {
    int _pixelX;
    int _pixelY;
    int _zoomLevel;
}

@property int zoomLevel;
@property int pixelY;
@property int pixelX;


- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)pixelY;
- (int)pixelX;
- (void)setPixelX:(int)arg1;
- (void)setPixelY:(int)arg1;
- (int)zoomLevel;
- (void)setZoomLevel:(int)arg1;

@end
