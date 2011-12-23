/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;

@interface GMMModel : PBCodable  {
    NSData *_panoMap;
    NSData *_depthMap;
}

@property(readonly) BOOL hasPanoMap;
@property(readonly) BOOL hasDepthMap;
@property(retain) NSData * depthMap;
@property(retain) NSData * panoMap;


- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)hasPanoMap;
- (BOOL)hasDepthMap;
- (id)depthMap;
- (void)setDepthMap:(id)arg1;
- (id)panoMap;
- (void)setPanoMap:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
