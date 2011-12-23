/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL, <CoreDAVLocalDBInfoProvider>, NSMutableArray, NSString, NSMutableSet, NSMutableDictionary, NSArray;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetTaskDelegate, CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate> {
    int _phase;
    NSURL *_folderURL;
    NSString *_previousCTag;
    NSString *_nextCTag;
    BOOL _useSyncCollection;
    NSString *_previousSyncToken;
    NSString *_nextSyncToken;
    NSArray *_actions;
    void *_context;
    unsigned int _multiGetBatchSize;
    NSMutableArray *_unsubmittedTasks;
    unsigned int _maxIndependentTasks;
    NSURL *_addMemberURL;
    BOOL _useMultiGet;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_urlToETag;
    Class _appSpecificDataItemClass;
    BOOL _syncItemOrder;
    NSMutableArray *_localItemURLOrder;
}

@property <CoreDAVLocalDBInfoProvider> * delegate;
@property(readonly) NSArray * localItemURLOrder;
@property(readonly) void* context;
@property BOOL useSyncCollection;
@property(retain) NSString * previousSyncToken;
@property(readonly) NSString * previousCTag;
@property(readonly) NSURL * folderURL;
@property BOOL useMultiGet;
@property unsigned int maxIndependentTasks;
@property unsigned int multiGetBatchSize;
@property(retain) NSURL * addMemberURL;


- (void*)context;
- (void)dealloc;
- (id)description;
- (BOOL)useMultiGet;
- (void)syncAway;
- (void)startTaskGroup;
- (unsigned int)multiGetBatchSize;
- (id)previousSyncToken;
- (void)_tearDownAllUnsubmittedTasks;
- (unsigned int)_submitTasks;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)dataContentType;
- (void)setUseSyncCollection:(BOOL)arg1;
- (id)folderURL;
- (void)setMaxIndependentTasks:(unsigned int)arg1;
- (void)getTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (unsigned int)maxIndependentTasks;
- (BOOL)useSyncCollection;
- (id)localItemURLOrder;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(BOOL)arg5 context:(void*)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 context:(void*)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (id)copyAdditionalResourcePropertiesToFetch;
- (BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (void)cancelTasks;
- (void)_pushActions;
- (void)_getCTag;
- (void)_getETags;
- (void)_getOrder;
- (void)_getDataPayloads;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (void)containerMultiGetTask:(id)arg1 parsedContents:(id)arg2 error:(id)arg3;
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 error:(id)arg3;
- (void)setPreviousSyncToken:(id)arg1;
- (id)previousCTag;
- (void)setUseMultiGet:(BOOL)arg1;
- (void)setMultiGetBatchSize:(unsigned int)arg1;
- (id)copyGetTaskWithURL:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)addMemberURL;
- (void)setAddMemberURL:(id)arg1;

@end
