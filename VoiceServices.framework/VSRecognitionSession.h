/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class <VSRecognitionSessionDelegate>, VSRecognitionAction, NSString, NSArray, VSSpeechSynthesizer;

@interface VSRecognitionSession : NSObject  {
    NSString *_modelIdentifier;
    void *_keepAlive;
    <VSRecognitionSessionDelegate> *_delegate;
    VSRecognitionAction *_currentAction;
    NSArray *_topLevelKeywords;
    id _handlingThread;
    VSSpeechSynthesizer *_synthesizer;
    NSString *_languageID;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    double _levelInterval;
    unsigned int _keywordPhase;
    struct { 
        unsigned int delegateWillBegin : 1; 
        unsigned int delegateBegin : 1; 
        unsigned int delegateOpenURL : 1; 
        unsigned int delegateFinishedSpeaking : 1; 
        unsigned int delegateComplete : 1; 
        unsigned int debugDumpEnabled : 1; 
        unsigned int preferredEngine : 2; 
        unsigned int performHandlerActions : 1; 
        unsigned int allowSensitiveActions : 1; 
        unsigned int bluetoothAllowed : 1; 
        unsigned int resetNextAction : 1; 
        unsigned int isSpeaking : 1; 
        unsigned int actionBegan : 1; 
        unsigned int actionBeginning : 1; 
        unsigned int actionBeginDeferred : 1; 
        unsigned int invalid : 1; 
        unsigned int observeKeywordChange : 1; 
    } _sessionFlags;
}


- (BOOL)_actionStarted:(id)arg1;
- (void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3;
- (id)spokenFeedbackString;
- (id)spokenFeedbackAttributedString;
- (id)initWithModelIdentifier:(id)arg1;
- (id)beginNextAction;
- (BOOL)isRecognizing;
- (BOOL)isActivelyRecognizing;
- (BOOL)hasDeferredAction;
- (BOOL)nextActionWillTerminateSession;
- (BOOL)nextActionWillRecognize;
- (void)setSensitiveActionsEnabled:(BOOL)arg1;
- (BOOL)sensitiveActionsEnabled;
- (BOOL)setBluetoothInputAllowed:(BOOL)arg1;
- (id)cancelMaintainingKeepAlive:(BOOL)arg1;
- (void)_notifyDelegateActionStarted;
- (id)_notifyDelegateOpenURL:(id)arg1;
- (id)_currentRecognizeAction;
- (id)_recognitionResultHandlingThread;
- (void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3;
- (id)displayResultString;
- (id)displayStatusString;
- (void)setInputLevelUpdateInterval:(double)arg1;
- (float)inputLevel;
- (void)setKeywordPhase:(unsigned int)arg1;
- (id)keywordAtIndex:(int)arg1;
- (int)keywordCount;
- (struct __CFDictionary { }*)_createKeywordIndex;
- (id)_createPhaseSortedKeywordsFromArray:(id)arg1;
- (id)_keywordsForModelIdentifier:(id)arg1;
- (void)_keywordIndexChanged;
- (id)beginSpeakingFeedbackString;
- (id)beginSpeakingString:(id)arg1;
- (id)_beginSpeakingAttributedString:(id)arg1;
- (id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2;
- (void)_notifyDelegateFinishedSpeakingWithError:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2 withError:(id)arg3;
- (BOOL)setDebugDumpEnabled:(BOOL)arg1;
- (id)debugDumpPath;
- (BOOL)setNextRecognitionAudioInputPath:(id)arg1;
- (BOOL)setNextRecognitionRequiresReset:(BOOL)arg1;
- (BOOL)setPreferredEngine:(int)arg1;
- (void)setPerformRecognitionHandlerActions:(BOOL)arg1;
- (id)_topLevelKeywords;
- (BOOL)isValid;
- (id)reset;
- (id)cancel;
- (id)init;
- (void)dealloc;
- (void)_init;
- (void)setDelegate:(id)arg1;
- (BOOL)isFinished;
- (BOOL)isBusy;
- (void)_setAction:(id)arg1;

@end
