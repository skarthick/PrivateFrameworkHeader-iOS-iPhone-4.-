/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface AuthScheme : NSObject  {
}

+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (id)schemeWithName:(id)arg1;
+ (void)initialize;

- (BOOL)hasEncryption;
- (id)humanReadableName;
- (Class)authenticatorClass;
- (unsigned int)defaultPortForAccount:(id)arg1;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (Class)connectionClassForAccountClass:(Class)arg1;
- (void)release;
- (id)name;
- (id)retain;
- (unsigned int)retainCount;
- (BOOL)requiresPassword;

@end
