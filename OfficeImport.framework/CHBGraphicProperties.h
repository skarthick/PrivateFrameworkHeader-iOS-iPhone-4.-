/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CHBGraphicProperties : NSObject  {
}

+ (id)oadGraphicPropertiesFromXlMarkerStyle:(const struct XlChartMarkerStyle { int (**x1)(); int x2; struct CsColour { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned short x_3_1_4; } x3; struct CsColour { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned short x_4_1_4; } x4; unsigned int x5; unsigned short x6; unsigned short x7; boolx8; boolx9; boolx10; }*)arg1 complex:(bool)arg2 state:(id)arg3;
+ (id)mapPresetDashFromPattern:(int)arg1;
+ (id)mapFillStyle:(const struct XlChartFillStyle { int (**x1)(); struct CsColour { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned short x_2_1_4; } x2; struct CsColour { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned short x_3_1_4; } x3; unsigned short x4; unsigned short x5; unsigned short x6; boolx7; boolx8; boolx9; }*)arg1 xlPictureFormat:(const struct XlChartPicF { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; double x3; int x4; int x5; int x6; unsigned char x7; }*)arg2 state:(id)arg3;
+ (id)mapFillStyleForMarker:(const struct XlChartMarkerStyle { int (**x1)(); int x2; struct CsColour { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned short x_3_1_4; } x3; struct CsColour { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned short x_4_1_4; } x4; unsigned int x5; unsigned short x6; unsigned short x7; boolx8; boolx9; boolx10; }*)arg1 complex:(bool)arg2 state:(id)arg3;
+ (id)mapAssociatedEscherObjectstate:(id)arg1;
+ (int)oaPresetDashTypeFromLinePatternEnum:(int)arg1;
+ (float)widthFromLineWeightEnum:(int)arg1;
+ (int)presetLinePatternEnumFromDash:(id)arg1;
+ (int)lineWeightEnumFromWidth:(float)arg1;
+ (id)oadGraphicPropertiesFromXlChartSeriesFormat:(const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; int x6; unsigned short x7; unsigned short x8; unsigned short x9; int x10; boolx11; boolx12; boolx13; boolx14; boolx15; boolx16; boolx17; boolx18; boolx19; boolx20; }*)arg1 state:(id)arg2;
+ (id)oadGraphicPropertiesFromXlChartFrameType:(struct XlChartFrameType { int (**x1)(); float x2; float x3; float x4; float x5; int x6; int x7; int x8; int x9; struct XlChartLineStyle {} *x10; struct XlChartFillStyle {} *x11; struct XlChartPicF {} *x12; boolx13; boolx14; boolx15; }*)arg1 state:(id)arg2;
+ (id)oadStrokeFrom:(const struct XlChartLineStyle { int (**x1)(); struct CsColour { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned short x_2_1_4; } x2; int x3; int x4; unsigned short x5; boolx6; boolx7; boolx8; float x9; int x10; }*)arg1;
+ (id)oadGraphicPropertiesFromState:(id)arg1 xlLineStyle:(const struct XlChartLineStyle { int (**x1)(); struct CsColour { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned short x_2_1_4; } x2; int x3; int x4; unsigned short x5; boolx6; boolx7; boolx8; float x9; int x10; }*)arg2 xlFillStyle:(const struct XlChartFillStyle { int (**x1)(); struct CsColour { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned short x_2_1_4; } x2; struct CsColour { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned short x_3_1_4; } x3; unsigned short x4; unsigned short x5; unsigned short x6; boolx7; boolx8; boolx9; }*)arg3;


@end
