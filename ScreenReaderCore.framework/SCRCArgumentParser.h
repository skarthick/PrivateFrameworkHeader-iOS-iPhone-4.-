/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCArgumentSubcommand, NSMutableArray, NSString;

@interface SCRCArgumentParser : SCRCArgumentSubcommand  {
    int _argc;
    char **_argv;
    NSMutableArray *_subcommandArray;
    NSMutableArray *_argumentArray;
    NSString *_appName;
    SCRCArgumentSubcommand *_subcommand;
    BOOL _isLaunchedAtLogin;
}

+ (id)commandPath;
+ (id)processIdentifier;
+ (id)versionString;

- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;
- (char **)argv;
- (int)argc;
- (BOOL)isLaunchedAtLogin;
- (void)addSubcommand:(id)arg1;
- (id)_displayVersion:(id)arg1;
- (id)_displayHelp:(id)arg1;
- (id)setRunningAtStartup:(id)arg1;
- (int)run;
- (void)dealloc;
- (id)appName;
- (void)setAppName:(id)arg1;
- (BOOL)parse;
- (void)stop;

@end
