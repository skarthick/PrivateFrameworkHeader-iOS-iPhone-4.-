/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMStyleSheet, NSString, NSURL;

@interface DOMHTMLLinkElement : DOMHTMLElement  {
}

@property BOOL disabled;
@property(copy) NSString * charset;
@property(copy) NSString * href;
@property(copy) NSString * hreflang;
@property(copy) NSString * media;
@property(copy) NSString * rel;
@property(copy) NSString * rev;
@property(copy) NSString * target;
@property(copy) NSString * type;
@property(retain,readonly) DOMStyleSheet * sheet;
@property(copy,readonly) NSURL * absoluteLinkURL;


- (void)setDisabled:(BOOL)arg1;
- (BOOL)_mediaQueryMatchesForOrientation:(int)arg1;
- (id)absoluteLinkURL;
- (id)type;
- (void)setType:(id)arg1;
- (BOOL)disabled;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)sheet;
- (void)setMedia:(id)arg1;
- (void)setHref:(id)arg1;
- (id)hreflang;
- (void)setHreflang:(id)arg1;
- (id)rel;
- (void)setRel:(id)arg1;
- (id)rev;
- (void)setRev:(id)arg1;
- (id)charset;
- (void)setCharset:(id)arg1;
- (id)href;
- (id)media;

@end
