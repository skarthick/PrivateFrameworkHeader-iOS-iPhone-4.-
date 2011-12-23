/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface MLEQPreset : NSObject  {
    NSString *_name;
    NSString *_localizedName;
    int _builtInPresetType;
}

+ (id)eqPresetForName:(id)arg1;
+ (id)eqPresetForBuiltInPresetType:(int)arg1;

- (id)localizedName;
- (id)name;
- (void)dealloc;
- (id)initWithBuiltInPresetType:(int)arg1;
- (int)builtInPresetType;
- (int)typeForAVController;

@end
