/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDMarker;

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {
    CHDMarker *mMarker;
    boolmSmooth;
}


- (void)dealloc;
- (void)setMarker:(id)arg1;
- (void)setSmooth:(bool)arg1;
- (bool)isSmooth;
- (id)initWithChart:(id)arg1;
- (id)marker;

@end
