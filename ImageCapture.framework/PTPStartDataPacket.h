/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPStartDataPacket : NSObject  {
    unsigned int _transactionID;
    unsigned int _totalDataSize;
}


- (id)initWithTransactionID:(unsigned long)arg1 totalDataSize:(unsigned long)arg2;
- (void)setTotalDataSize:(unsigned long)arg1;
- (id)contentForTCP;
- (unsigned long)transactionID;
- (void)setTransactionID:(unsigned long)arg1;
- (id)initWithTCPBuffer:(void*)arg1;
- (unsigned long)totalDataSize;
- (id)description;

@end
