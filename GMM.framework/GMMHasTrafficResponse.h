/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMHasTrafficResponse : GMMOldResponse  {
    BOOL _hasTraffic;
}

@property BOOL hasTraffic;

+ (id)responseSubdataFromReader:(id)arg1;

- (id)dictionaryRepresentation;
- (void)setHasTraffic:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasTraffic;

@end
