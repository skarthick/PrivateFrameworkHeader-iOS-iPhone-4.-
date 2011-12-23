/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVACLTaskDelegate>, NSArray;

@interface CoreDAVACLTask : CoreDAVTask  {
    NSArray *_accessControlEntities;
}

@property(retain) NSArray * accessControlEntities;
@property <CoreDAVACLTaskDelegate> * delegate;


- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;
- (id)accessControlEntities;
- (void)setAccessControlEntities:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)requestBody;

@end
