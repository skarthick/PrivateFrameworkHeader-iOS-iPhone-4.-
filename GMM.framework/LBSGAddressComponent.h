/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface LBSGAddressComponent : PBCodable  {
    NSString *_name;
    int _featureType;
    NSString *_locale;
}

@property(readonly) BOOL hasLocale;
@property(retain) NSString * locale;
@property int featureType;
@property(retain) NSString * name;


- (id)dictionaryRepresentation;
- (void)setLocale:(id)arg1;
- (id)locale;
- (void)setName:(id)arg1;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setFeatureType:(int)arg1;
- (BOOL)hasLocale;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)featureType;

@end
