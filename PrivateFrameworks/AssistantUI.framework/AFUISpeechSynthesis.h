/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class <AFUISpeechSynthesisDelegate>, <AFUISpeechSynthesisLocalDelegate>, AFUIQueue, AFVoiceInfo, NSMutableArray, NSString, VSSpeechSynthesizer;

@interface AFUISpeechSynthesis : NSObject <AFUIQueueDelegate, AFUISpeechSynthesis, AFUISpeechSynthesisElementDelegate, VSSpeechSynthesizerDelegate> {
    NSMutableArray *_activeElements;
    <AFUISpeechSynthesisDelegate> *_delegate;
    AFUIQueue *_elementQueue;
    <AFUISpeechSynthesisLocalDelegate> *_localDelegate;
    AFVoiceInfo *_outputVoice;
    unsigned int _sessionID;
    BOOL _sessionIDIsValid;
    VSSpeechSynthesizer *_synthesizer;
}

@property(getter=_activeElements,readonly) NSMutableArray * activeElements;
@property(copy,readonly) NSString * debugDescription;
@property(retain) <AFUISpeechSynthesisDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(getter=_elementQueue,readonly) AFUIQueue * elementQueue;
@property(readonly) unsigned int hash;
@property <AFUISpeechSynthesisLocalDelegate> * localDelegate;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeElements;
- (void)_cancelByCancellingActiveElementsOnly:(BOOL)arg1;
- (id)_elementQueue;
- (void)_processElementQueue;
- (void)_processProvisionalElements;
- (id)_synthesizer;
- (void)_updateSynthesizerWithSessionID:(unsigned int)arg1;
- (void)_updateSynthesizerWithVoice:(id)arg1;
- (void)cancel;
- (id)delegate;
- (void)enqueueText:(id)arg1 completion:(id)arg2;
- (void)enqueueText:(id)arg1 isPhonetic:(BOOL)arg2 provisionally:(BOOL)arg3 preparationIdentifier:(id)arg4 completion:(id)arg5 animationIdentifier:(id)arg6;
- (id)init;
- (void)invalidate;
- (BOOL)isSpeaking;
- (BOOL)isSynthesisQueueEmpty;
- (id)localDelegate;
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalDelegate:(id)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)skipCurrentSynthesis;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;

@end
