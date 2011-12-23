/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;

@interface GMMAnnotationProperties : PBCodable  {
    int _horizonHeightFractionE6;
    BOOL _hasHorizonHeightFractionE6;
    int _annotationHeightFractionE6;
    BOOL _hasAnnotationHeightFractionE6;
    NSMutableArray *_links;
}

@property(readonly) int linksCount;
@property(retain) NSMutableArray * links;
@property(readonly) BOOL hasAnnotationHeightFractionE6;
@property int annotationHeightFractionE6;
@property(readonly) BOOL hasHorizonHeightFractionE6;
@property int horizonHeightFractionE6;


- (id)dictionaryRepresentation;
- (id)links;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setHorizonHeightFractionE6:(int)arg1;
- (void)setAnnotationHeightFractionE6:(int)arg1;
- (void)setLink:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setLinks:(id)arg1;
- (BOOL)hasAnnotationHeightFractionE6;
- (BOOL)hasHorizonHeightFractionE6;
- (BOOL)readFrom:(id)arg1;
- (int)linksCount;
- (id)linkAtIndex:(unsigned int)arg1;
- (void)addLink:(id)arg1;
- (void)writeTo:(id)arg1;
- (int)annotationHeightFractionE6;
- (int)horizonHeightFractionE6;

@end
