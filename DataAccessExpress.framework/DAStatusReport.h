/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSNumber, NSString, NSDate;

@interface DAStatusReport : NSObject  {
    NSString *_persistentUUID;
    NSString *_displayName;
    NSString *_accountType;
    NSNumber *_timeSpan;
    NSNumber *_timeInNetworking;
    NSNumber *_averageHBI;
    NSNumber *_successfulRequests;
    NSNumber *_failedNetworkRequests;
    NSNumber *_failedProtocolRequests;
    NSNumber *_downloadedElements;
    NSNumber *_falseMoreAvailableCount;
    NSDate *_creationDate;
    int _numHBIDataPoints;
}

@property(retain) NSNumber * falseMoreAvailableCount;
@property(retain) NSNumber * downloadedElements;
@property(retain) NSNumber * failedProtocolRequests;
@property(retain) NSNumber * failedNetworkRequests;
@property(retain) NSNumber * successfulRequests;
@property(retain) NSNumber * averageHBI;
@property(retain) NSNumber * timeInNetworking;
@property(retain) NSNumber * timeSpan;
@property(retain) NSString * accountType;
@property(retain) NSString * displayName;
@property(retain) NSString * persistentUUID;


- (id)accountType;
- (id)persistentUUID;
- (void)setPersistentUUID:(id)arg1;
- (void)setAccountType:(id)arg1;
- (id)displayName;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)timeInNetworking;
- (id)falseMoreAvailableCount;
- (id)timeSpan;
- (void)setFalseMoreAvailableCount:(id)arg1;
- (id)downloadedElements;
- (void)setDownloadedElements:(id)arg1;
- (id)failedProtocolRequests;
- (void)setFailedProtocolRequests:(id)arg1;
- (id)failedNetworkRequests;
- (void)setFailedNetworkRequests:(id)arg1;
- (id)successfulRequests;
- (void)setSuccessfulRequests:(id)arg1;
- (id)averageHBI;
- (void)setAverageHBI:(id)arg1;
- (void)setTimeInNetworking:(id)arg1;
- (void)setTimeSpan:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)mergeStatusReport:(id)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteNewHBIDataPoint:(int)arg1;
- (void)noteFalseMoreAvailableResponse;

@end
