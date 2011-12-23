/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSURL, NSString;

@interface DOMHTMLAreaElement : DOMHTMLElement  {
}

@property(copy) NSString * accessKey;
@property(copy) NSString * alt;
@property(copy) NSString * coords;
@property(copy) NSString * href;
@property BOOL noHref;
@property(copy) NSString * shape;
@property(copy) NSString * target;
@property(copy,readonly) NSString * hashName;
@property(copy,readonly) NSString * host;
@property(copy,readonly) NSString * hostname;
@property(copy,readonly) NSString * pathname;
@property(copy,readonly) NSString * port;
@property(copy,readonly) NSString * protocol;
@property(copy,readonly) NSString * search;
@property(copy,readonly) NSURL * absoluteLinkURL;


- (id)protocol;
- (id)port;
- (id)absoluteQuadsWithOwner:(id)arg1;
- (id)shape;
- (id)absoluteLinkURL;
- (id)host;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)boundingBoxesWithOwner:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBoxWithOwner:(id)arg1;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuadWithOwner:(id)arg1;
- (BOOL)noHref;
- (void)setNoHref:(BOOL)arg1;
- (id)alt;
- (void)setAlt:(id)arg1;
- (id)accessKey;
- (void)setAccessKey:(id)arg1;
- (id)coords;
- (void)setCoords:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setShape:(id)arg1;
- (id)hashName;
- (id)hostname;
- (id)pathname;
- (id)search;
- (id)href;
- (id)absoluteQuadsAtPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
