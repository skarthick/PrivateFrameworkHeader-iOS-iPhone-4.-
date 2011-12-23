/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVTaskDelegate>, NSString;

@interface CoreDAVDeleteTask : CoreDAVTask  {
    NSString *_previousETag;
}

@property(retain) NSString * previousETag;
@property <CoreDAVTaskDelegate> * delegate;


- (void)dealloc;
- (id)description;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)previousETag;
- (void)setPreviousETag:(id)arg1;
- (id)httpMethod;
- (id)requestBody;

@end
