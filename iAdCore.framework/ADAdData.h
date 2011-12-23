/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADStoryboardInfo, NSString, NSData, NSMutableArray;

@interface ADAdData : PBCodable  {
    int _action;
    BOOL _hasAction;
    NSString *_url;
    NSMutableArray *_trackingURLs;
    NSString *_trackingURLSubstitutionParameter;
    int _impressionCount;
    NSString *_uniqueIdentifier;
    NSString *_adContentExternalURL;
    NSMutableArray *_adContentImages;
    NSString *_adContentWebArchiveURL;
    ADStoryboardInfo *_storyboardInfo;
    unsigned long long _expirationDate;
    BOOL _hasExpirationDate;
    NSString *_qToken;
    BOOL _unbranded;
    BOOL _hasUnbranded;
    NSString *_accessibilityDescription;
    BOOL _suppressesPermissionToExitDialog;
    BOOL _hasSuppressesPermissionToExitDialog;
    NSString *_titleForExitDialog;
    NSString *_messageForExitDialog;
    NSString *_cancelLabelForExitDialog;
    NSString *_continueLabelForExitDialog;
    NSData *_impressionIdentifierData;
    float _confirmedClickTimeInterval;
    BOOL _hasConfirmedClickTimeInterval;
    BOOL _adManagesPurchaseFlow;
    BOOL _hasAdManagesPurchaseFlow;
    BOOL _allowedToUseWebGL;
    BOOL _hasAllowedToUseWebGL;
    int _transitionType;
    BOOL _hasTransitionType;
}

@property(readonly) BOOL hasUrl;
@property(readonly) int trackingURLsCount;
@property(readonly) BOOL hasTrackingURLSubstitutionParameter;
@property(readonly) BOOL hasUniqueIdentifier;
@property(readonly) BOOL hasAdContentExternalURL;
@property(readonly) int adContentImagesCount;
@property(readonly) BOOL hasAdContentWebArchiveURL;
@property(readonly) BOOL hasStoryboardInfo;
@property(readonly) BOOL hasQToken;
@property(readonly) BOOL hasAccessibilityDescription;
@property(readonly) BOOL hasTitleForExitDialog;
@property(readonly) BOOL hasMessageForExitDialog;
@property(readonly) BOOL hasCancelLabelForExitDialog;
@property(readonly) BOOL hasContinueLabelForExitDialog;
@property(readonly) BOOL hasImpressionIdentifierData;
@property(readonly) BOOL hasTransitionType;
@property int transitionType;
@property(readonly) BOOL hasAllowedToUseWebGL;
@property BOOL allowedToUseWebGL;
@property(readonly) BOOL hasAdManagesPurchaseFlow;
@property BOOL adManagesPurchaseFlow;
@property(readonly) BOOL hasConfirmedClickTimeInterval;
@property float confirmedClickTimeInterval;
@property(retain) NSData * impressionIdentifierData;
@property(retain) NSString * continueLabelForExitDialog;
@property(retain) NSString * cancelLabelForExitDialog;
@property(retain) NSString * messageForExitDialog;
@property(retain) NSString * titleForExitDialog;
@property(readonly) BOOL hasSuppressesPermissionToExitDialog;
@property BOOL suppressesPermissionToExitDialog;
@property(retain) NSString * accessibilityDescription;
@property(readonly) BOOL hasUnbranded;
@property BOOL unbranded;
@property(retain) NSString * qToken;
@property(readonly) BOOL hasExpirationDate;
@property unsigned long long expirationDate;
@property(retain) ADStoryboardInfo * storyboardInfo;
@property(retain) NSString * adContentWebArchiveURL;
@property(retain) NSMutableArray * adContentImages;
@property(retain) NSString * adContentExternalURL;
@property(retain) NSString * uniqueIdentifier;
@property int impressionCount;
@property(retain) NSString * trackingURLSubstitutionParameter;
@property(retain) NSMutableArray * trackingURLs;
@property(retain) NSString * url;
@property(readonly) BOOL hasAction;
@property int action;

+ (void)initialize;

- (id)trackingURLs;
- (BOOL)hasAdManagesPurchaseFlow;
- (BOOL)hasTransitionType;
- (BOOL)hasTitleForExitDialog;
- (BOOL)hasStoryboardInfo;
- (BOOL)hasAdContentWebArchiveURL;
- (void)setTrackingURL:(id)arg1 atIndex:(unsigned int)arg2;
- (id)trackingURLAtIndex:(unsigned int)arg1;
- (void)addTrackingURL:(id)arg1;
- (BOOL)hasTrackingURLSubstitutionParameter;
- (BOOL)hasUniqueIdentifier;
- (BOOL)hasAdContentExternalURL;
- (void)setAdContentImage:(id)arg1 atIndex:(unsigned int)arg2;
- (id)adContentImageAtIndex:(unsigned int)arg1;
- (void)addAdContentImage:(id)arg1;
- (void)setExpirationDate:(unsigned long long)arg1;
- (BOOL)hasQToken;
- (void)setUnbranded:(BOOL)arg1;
- (BOOL)hasAccessibilityDescription;
- (void)setSuppressesPermissionToExitDialog:(BOOL)arg1;
- (void)setConfirmedClickTimeInterval:(float)arg1;
- (void)setAllowedToUseWebGL:(BOOL)arg1;
- (void)setContinueLabelForExitDialog:(id)arg1;
- (void)setCancelLabelForExitDialog:(id)arg1;
- (void)setMessageForExitDialog:(id)arg1;
- (void)setTitleForExitDialog:(id)arg1;
- (BOOL)hasSuppressesPermissionToExitDialog;
- (BOOL)hasUnbranded;
- (void)setStoryboardInfo:(id)arg1;
- (void)setAdContentWebArchiveURL:(id)arg1;
- (void)setAdContentImages:(id)arg1;
- (void)setAdContentExternalURL:(id)arg1;
- (void)setImpressionCount:(int)arg1;
- (void)setTrackingURLSubstitutionParameter:(id)arg1;
- (void)setTrackingURLs:(id)arg1;
- (int)transitionType;
- (id)cancelLabelForExitDialog;
- (id)messageForExitDialog;
- (id)accessibilityDescription;
- (id)storyboardInfo;
- (id)adContentWebArchiveURL;
- (int)impressionCount;
- (void)setImpressionIdentifierData:(id)arg1;
- (id)impressionIdentifierData;
- (BOOL)hasImpressionIdentifierData;
- (int)trackingURLsCount;
- (id)adContentExternalURL;
- (BOOL)hasExpirationDate;
- (BOOL)hasAllowedToUseWebGL;
- (BOOL)hasCancelLabelForExitDialog;
- (id)continueLabelForExitDialog;
- (BOOL)hasConfirmedClickTimeInterval;
- (float)confirmedClickTimeInterval;
- (id)titleForExitDialog;
- (BOOL)hasMessageForExitDialog;
- (BOOL)hasContinueLabelForExitDialog;
- (BOOL)suppressesPermissionToExitDialog;
- (BOOL)unbranded;
- (BOOL)allowedToUseWebGL;
- (void)setTransitionType:(int)arg1;
- (void)setAccessibilityDescription:(id)arg1;
- (int)adContentImagesCount;
- (id)adContentImages;
- (BOOL)hasUrl;
- (unsigned long long)expirationDate;
- (id)trackingURLSubstitutionParameter;
- (void)setQToken:(id)arg1;
- (id)qToken;
- (BOOL)adManagesPurchaseFlow;
- (void)setAdManagesPurchaseFlow:(BOOL)arg1;
- (BOOL)hasAction;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)dictionaryRepresentation;
- (id)uniqueIdentifier;
- (id)url;
- (int)action;
- (void)setAction:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
