/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@class NSString;

@interface SPSpotlightManager : NSObject  {
    NSString *_displayID;
}

+ (id)sharedManager;

- (void)appModifiedRecordIDs:(id)arg1 forCategory:(id)arg2;
- (void)_processIdentifiers:(id)arg1 forApplication:(id)arg2 andCategory:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)eraseIndexForApplication:(id)arg1 category:(id)arg2;
- (void)application:(id)arg1 modifiedRecordIDs:(id)arg2 forCategory:(id)arg3;

@end
