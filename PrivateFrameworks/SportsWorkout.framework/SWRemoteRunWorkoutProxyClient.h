/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSDictionary, NSTimer, NSString;



@interface SWRemoteRunWorkoutProxyClient : SWRunWorkoutProxy 
{
    NSTimer *_updateTimer;
    NSString *_goalType;
    NSString *_presetGoal;
    float _goal;
    NSString *_sensorSearchState;
    NSString *_workoutState;
    NSDictionary *_workoutData;
    BOOL _hasEverStarted;
    BOOL _hasPowerSong;
    NSString *_powerSongName;
    BOOL _shouldControlMusic;
    NSInteger _musicSelection;
    NSString *_currentSongName;
}

@property(readonly) NSString *currentSongName;
@property(readonly) NSInteger musicSelection;
@property(readonly) BOOL shouldControlMusic;
@property(readonly) NSString *powerSongName;
@property(readonly) BOOL hasPowerSong;
@property(readonly) NSDictionary *workoutData;
@property(readonly) NSString *workoutState;
@property(readonly) NSString *sensorSearchState;
@property(readonly) float goal;
@property(readonly) NSString *presetGoal;
@property(readonly) NSString *goalType;


- (void)_handlePropertyUpdateNotification:(id)arg1;
- (void)_checkinWithServer;
- (void)_sensorSearchStateChanged:(id)arg1;
- (void)_workoutStateChanged:(id)arg1;
- (void)_nowPlayingChanged:(id)arg1;
- (id)sensorSearchState;
- (NSInteger)musicSelection;
- (id)currentSongName;
- (void)goToNowPlaying;
- (void)pauseMusic;
- (void)playMusic;
- (id)presetGoal;
- (BOOL)shouldControlMusic;
- (void)selectNextSong;
- (void)selectPreviousSong;
- (id)goalType;
- (float)goal;
- (void)prepareToActivateWorkout;
- (void)endWorkout;
- (void)playOnDemandPrompt;
- (BOOL)hasPowerSong;
- (id)powerSongName;
- (void)playPowerSong;
- (id)workoutState;
- (id)workoutData;
- (void)activateWorkout;
- (void)pauseWorkout;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)endSeeking;
- (id)init;
- (void)dealloc;

@end