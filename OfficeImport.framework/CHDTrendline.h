/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString, OADGraphicProperties, CHDTrendlineLabel;

@interface CHDTrendline : NSObject  {
    boolmDisplayEquation;
    boolmDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    int mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;

- (id)label;
- (int)type;
- (void)setType:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (id)init;
- (void)dealloc;
- (void)setDisplayEquation:(bool)arg1;
- (double)backward;
- (void)setGraphicProperties:(id)arg1;
- (bool)isDisplayEquation;
- (bool)isDisplayRSquaredValue;
- (void)setDisplayRSquaredValue:(bool)arg1;
- (void)setBackward:(double)arg1;
- (double)forward;
- (void)setForward:(double)arg1;
- (double)interceptYAxis;
- (int)polynomialOrder;
- (int)movingAveragePeriod;
- (id)defaultNameWithSeriesName:(id)arg1;
- (void)setInterceptYAxis:(double)arg1;
- (void)setPolynomialOrder:(int)arg1;
- (void)setMovingAveragePeriod:(int)arg1;
- (id)graphicProperties;

@end
