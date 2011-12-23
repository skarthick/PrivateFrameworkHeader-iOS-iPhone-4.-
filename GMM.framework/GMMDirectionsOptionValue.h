/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMDirectionsOptionValue : PBCodable  {
    int _iD;
    int _value;
    BOOL _hasValue;
}

@property(readonly) BOOL hasValue;
@property int value;
@property int iD;


- (id)dictionaryRepresentation;
- (int)value;
- (void)setValue:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)hasValue;
- (int)iD;
- (void)setID:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
