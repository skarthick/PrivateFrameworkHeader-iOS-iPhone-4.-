/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface AdSheetRegionScriptObject : ADJavaScriptObject  {
    float latitude;
    float longitude;
    float latitudeDelta;
    float longitudeDelta;
}

@property float longitudeDelta;
@property float latitudeDelta;
@property float longitude;
@property float latitude;

+ (id)inputRequiredProperties;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })MKCoordinateRegionWithWebScriptObject:(id)arg1;
+ (id)regionWithMKCoordinateRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)scriptingKeys;

- (void)setLongitudeDelta:(float)arg1;
- (void)setLatitudeDelta:(float)arg1;
- (float)longitudeDelta;
- (float)latitudeDelta;
- (float)latitude;
- (float)longitude;
- (void)setLatitude:(float)arg1;
- (void)setLongitude:(float)arg1;

@end
