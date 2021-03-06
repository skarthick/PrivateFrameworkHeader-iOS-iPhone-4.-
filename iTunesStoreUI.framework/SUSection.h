/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUPageSectionGroup, NSArray, NSString, UIImage, SUSearchFieldConfiguration, NSURL;

@interface SUSection : NSObject  {
    NSString *_identifier;
    UIImage *_image;
    NSString *_imageBaseName;
    BOOL _isDefaultSection;
    BOOL _isLocationSection;
    NSArray *_itemImages;
    int _minimumNetworkType;
    UIImage *_moreListImage;
    SUPageSectionGroup *_pageSectionGroup;
    NSString *_partnerHeader;
    SUSearchFieldConfiguration *_searchFieldConfiguration;
    UIImage *_selectedImage;
    UIImage *_selectedMoreListImage;
    NSString *_title;
    int _type;
    NSURL *_url;
    NSString *_urlBagKey;
}

@property(getter=isTransient,readonly) BOOL transient;
@property(getter=isUsingLocalArtwork,readonly) BOOL usingLocalArtwork;
@property(retain) NSString * urlBagKey;
@property(retain) NSURL * url;
@property int type;
@property(retain) NSString * title;
@property(retain) UIImage * selectedMoreListImage;
@property(retain) UIImage * selectedImage;
@property(retain) SUSearchFieldConfiguration * searchFieldConfiguration;
@property(retain) NSString * partnerHeader;
@property(copy) SUPageSectionGroup * pageSectionGroup;
@property(retain) UIImage * moreListImage;
@property int minimumNetworkType;
@property(getter=isLocationSection) BOOL locationSection;
@property(retain) NSArray * itemImages;
@property(retain) UIImage * image;
@property(retain) NSString * identifier;
@property(getter=isDefaultSection) BOOL defaultSection;


- (void)setUrl:(id)arg1;
- (id)identifier;
- (void)setSelectedImage:(id)arg1;
- (id)url;
- (int)type;
- (void)setType:(int)arg1;
- (id)selectedImage;
- (id)moreListImage;
- (id)image;
- (void)setIdentifier:(id)arg1;
- (id)title;
- (void)dealloc;
- (id)description;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (BOOL)isTransient;
- (id)itemImages;
- (void)setMoreListImage:(id)arg1;
- (void)setSelectedMoreListImage:(id)arg1;
- (void)setSearchFieldConfiguration:(id)arg1;
- (BOOL)isUsingLocalArtwork;
- (id)urlBagKey;
- (BOOL)loadFromDictionary:(id)arg1 searchField:(id)arg2;
- (id)selectedMoreListImage;
- (int)_minimumNetworkTypeFromDictionary:(id)arg1;
- (int)_typeForString:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (id)searchFieldConfiguration;
- (void)setPartnerHeader:(id)arg1;
- (id)pageSectionGroup;
- (void)setPageSectionGroup:(id)arg1;
- (void)setMinimumNetworkType:(int)arg1;
- (BOOL)isLocationSection;
- (void)setLocationSection:(BOOL)arg1;
- (void)setItemImages:(id)arg1;
- (void)setDefaultSection:(BOOL)arg1;
- (BOOL)isDefaultSection;
- (id)partnerHeader;
- (int)minimumNetworkType;

@end
