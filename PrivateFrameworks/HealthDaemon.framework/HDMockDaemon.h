/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class <HDDaemonDeviceManager>, <HDHealthDataCollectionManager>, <HDHealthDataManager>, <HDHealthDatabase>, <HDHealthMetadataManager>, <HDHealthSourceManager>, <HDSyncEngine>, HDBackgroundTaskScheduler, HDContentProtectionManager, HDProcessStateManager, HDUserCharacteristicsManager, NSString;

@interface HDMockDaemon : NSObject <HDHealthDaemon> {
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    HDContentProtectionManager *_contentProtectionManager;
    <HDHealthDataCollectionManager> *_healthDataCollectionManager;
    <HDHealthDataManager> *_healthDataManager;
    <HDHealthDatabase> *_healthDatabase;
    <HDDaemonDeviceManager> *_healthDeviceManager;
    <HDHealthMetadataManager> *_healthMetadataManager;
    <HDHealthSourceManager> *_healthSourceManager;
    <HDSyncEngine> *_syncEngine;
    HDUserCharacteristicsManager *_userCharacteristicsManager;
    HDProcessStateManager *processStateManager;
}

@property(retain) HDBackgroundTaskScheduler * backgroundTaskScheduler;
@property(retain) HDContentProtectionManager * contentProtectionManager;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) <HDHealthDataCollectionManager> * healthDataCollectionManager;
@property(retain) <HDHealthDataManager> * healthDataManager;
@property(retain) <HDHealthDatabase> * healthDatabase;
@property(retain) <HDDaemonDeviceManager> * healthDeviceManager;
@property(retain) <HDHealthMetadataManager> * healthMetadataManager;
@property(retain) <HDHealthSourceManager> * healthSourceManager;
@property(readonly) NSString * homeDirectoryPath;
@property(readonly) HDProcessStateManager * processStateManager;
@property(readonly) Class superclass;
@property(retain) <HDSyncEngine> * syncEngine;
@property(retain) HDUserCharacteristicsManager * userCharacteristicsManager;

- (void).cxx_destruct;
- (id)backgroundTaskScheduler;
- (void)beginTransaction:(id)arg1;
- (BOOL)containsActiveWorkouts;
- (id)contentProtectionManager;
- (void)endTransaction:(id)arg1;
- (id)healthDataCollectionManager;
- (id)healthDataManager;
- (id)healthDatabase;
- (id)healthDeviceManager;
- (id)healthMetadataManager;
- (id)healthSourceManager;
- (id)homeDirectoryPath;
- (void)invalidateActivityAlertSuppressionForBundleIdentifier:(id)arg1;
- (void)pauseActiveWorkoutsWithCompletion:(id)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(id)arg4;
- (BOOL)persistAndNotifyDataObject:(id)arg1 error:(id*)arg2;
- (id)processStateManager;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)setBackgroundTaskScheduler:(id)arg1;
- (void)setContentProtectionManager:(id)arg1;
- (void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
- (void)setHealthDataCollectionManager:(id)arg1;
- (void)setHealthDataManager:(id)arg1;
- (void)setHealthDatabase:(id)arg1;
- (void)setHealthDeviceManager:(id)arg1;
- (void)setHealthMetadataManager:(id)arg1;
- (void)setHealthSourceManager:(id)arg1;
- (void)setPairedWatchBundleIdentifierProvider:(id)arg1;
- (void)setSyncEngine:(id)arg1;
- (void)setUserCharacteristicsManager:(id)arg1;
- (void)suppressActivityAlertsForBundleIdentifier:(id)arg1 reason:(int)arg2;
- (id)syncEngine;
- (void)terminate;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (id)userCharacteristicsManager;

@end
