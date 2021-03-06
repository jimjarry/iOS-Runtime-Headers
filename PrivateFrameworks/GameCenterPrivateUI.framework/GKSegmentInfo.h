/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class <GKSegmentInfoDelegagte>, GKCollectionViewDataSource, GKPlaceholderContentStateMachine, NSString;

@interface GKSegmentInfo : NSObject <GKStateMachineDelegate> {
    GKCollectionViewDataSource *_dataSource;
    <GKSegmentInfoDelegagte> *_delegateWeak;
    GKPlaceholderContentStateMachine *_loadingMatchine;
    NSString *_title;
}

@property(retain) GKCollectionViewDataSource * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property <GKSegmentInfoDelegagte> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) GKPlaceholderContentStateMachine * loadingMatchine;
@property(retain) NSString * loadingState;
@property(readonly) Class superclass;
@property(retain) NSString * title;

- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didEnterErrorState;
- (void)didEnterLoadingState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;
- (id)initWithDataSource:(id)arg1;
- (id)loadingMatchine;
- (id)loadingState;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadingMatchine:(id)arg1;
- (void)setLoadingState:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
