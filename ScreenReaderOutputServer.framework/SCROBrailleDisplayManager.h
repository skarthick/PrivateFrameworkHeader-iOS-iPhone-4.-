/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSAttributedString, NSData, SCROBrailleDisplay, NSLock, SCROBrailleEventDispatcher, NSMutableSet, <SCROSBrailleDisplayManagerDelegate>, SCROBrailleDisplayManagedQueue, SCROBrailleFormatter, NSMutableDictionary, NSMutableArray, SCROBrailleDisplayHistory;

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate> {
    NSLock *_contentLock;
    SCROBrailleDisplayManagedQueue *_managedDisplayQueue;
    SCROBrailleDisplay *_bluetoothBrailleDisplay;
    SCROBrailleDisplay *_stealthBrailleDisplay;
    NSMutableDictionary *_detectedIOElementsDict;
    SCROBrailleFormatter *_currentBrailleFormatter;
    NSMutableSet *_loadedIOElements;
    struct __CFDictionary { } *_displayConfigurationDict;
    <SCROSBrailleDisplayManagerDelegate> *_delegate;
    BOOL _showDotsSevenAndEight;
    BOOL _lineDescriptorDisplayCallbackEnabled;
    int _contractionMode;
    BOOL _showEightDot;
    BOOL _shouldBatchUpdates;
    NSMutableArray *_displayModeStack;
    SCROBrailleDisplayHistory *_history;
    NSAttributedString *_mainString;
    NSAttributedString *_lineString;
    NSAttributedString *_statusString;
    struct { 
        NSData *aggregatedData; 
        int virtualAlignment; 
        int masterStatusCellIndex; 
        BOOL currentAnnouncementUnread; 
        BOOL anyUnreadAnnouncements; 
    } _status;
    SCROBrailleEventDispatcher *_eventDispatcher;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopTimer { } *_alertTimer;
    double _alertTimeout;
    int _alertPriority;
    BOOL _isValid;
    int _inputAccessMode;
    NSAttributedString *_blankUIString;
}

+ (void)initialize;

- (void)endUpdates;
- (BOOL)isValid;
- (void)invalidate;
- (void)beginUpdates;
- (id)init;
- (void)dealloc;
- (void)handleEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)hasActiveDisplays;
- (void)setVirtualStatusAlignment:(int)arg1;
- (void)setLineDescriptorDisplayCallbackEnabled:(BOOL)arg1;
- (void)simulateKeypress:(id)arg1;
- (void)panDisplayRight:(long)arg1;
- (void)setPrimaryBrailleDisplay:(long)arg1;
- (id)aggregatedStatus;
- (id)tableIdentifier;
- (int)virtualStatusAlignment;
- (int)displayMode;
- (int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3 forDisplayWithToken:(long)arg4;
- (void)setAnnouncementsDisplayMode;
- (void)_mainDisplayHandler:(id)arg1;
- (void)_setAggregatedStatusHandler:(id)arg1;
- (void)_setVirtualStatusAlignmentHandler:(id)arg1;
- (void)_setMasterStatusCellIndexHandler:(id)arg1;
- (void)_showDotsSevenAndEightHandler:(id)arg1;
- (void)_contractionModeHandler:(id)arg1;
- (void)_showEightDotHandler:(id)arg1;
- (void)_exitCurrentDisplayMode;
- (void)_displayModeHandler:(id)arg1;
- (void)_setLineDescriptorCallbackEnabledHandler:(id)arg1;
- (void)_panHandler:(id)arg1;
- (void)_announcementHandler:(id)arg1;
- (void)_simulateKeypressHandler:(id)arg1;
- (void)_prepareToMemorizeNextKeyHandler:(id)arg1;
- (void)_setPrimaryDisplayKeyHandler:(id)arg1;
- (void)_setDisplayInputAccessMode:(id)arg1;
- (void)_setTableHandler:(id)arg1;
- (void)_setBatchUpdates:(id)arg1;
- (void)_enableAutoDetect;
- (void)_disableAutoDetect;
- (void)_deviceConnectedHandler:(id)arg1;
- (void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2;
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
- (void)_loadNextDriverForIOElement:(id)arg1;
- (void)configurationChangedForBrailleDisplay:(id)arg1;
- (void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2;
- (void)loadBluetoothDriverWithAddress:(id)arg1;
- (void)removeBluetoothDriverWithAddress:(id)arg1;
- (void)_resetBluetoothReconnectionTimer;
- (void)_loadStealthDisplay;
- (void)_unloadStealthDisplay;
- (id)driverConfiguration;
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;
- (void)_blankOutDisplaysInQueue:(id)arg1;
- (BOOL)isConfigured;
- (void)setDisplayInputAccessMode:(int)arg1;
- (int)displayInputAccessMode;
- (id)mainAttributedString;
- (void)setMainAttributedString:(id)arg1;
- (void)setAggregatedStatus:(id)arg1;
- (long)masterStatusCellIndex;
- (void)panDisplayLeft:(long)arg1;
- (void)setUIDisplayMode;
- (void)exitCurrentDisplayMode;
- (void)_alertTimeoutHandler;
- (void)_resetAlertTimer;
- (void)_stopAlertTimer;
- (void)_popDisplayModeStack;
- (id)_cachedMainStringForDisplayMode:(int)arg1;
- (void)_setDisplayMode:(int)arg1;
- (void)configureTableWithIdentifier:(id)arg1;
- (void)setContractionMode:(int)arg1;
- (BOOL)showEightDotBraille;
- (void)setShowEightDotBraille:(BOOL)arg1;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (BOOL)showDotsSevenAndEight;
- (void)showPreviousAnnouncement;
- (void)showNextAnnouncement;
- (BOOL)lineDescriptorDisplayCallbackEnabled;
- (void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(long)arg3;
- (void)brailleDisplay:(id)arg1 driverDidLoad:(BOOL)arg2;
- (void)brailleDisplay:(id)arg1 isSleeping:(BOOL)arg2;
- (void)brailleDriverDisconnected:(id)arg1;
- (int)contractionMode;
- (void)brailleDisplay:(id)arg1 didDisplay:(id)arg2;
- (void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2;
- (void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2;
- (void)setMasterStatusCellIndex:(long)arg1;

@end
