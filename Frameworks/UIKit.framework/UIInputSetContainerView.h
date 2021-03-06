/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBRenderConfig;

@interface UIInputSetContainerView : UIInputSetHostView {
    BOOL _disableGeometryObserverNotifications;
    UIKBRenderConfig *_renderConfig;
}

+ (BOOL)_notifyOnExplicitLayout;
+ (BOOL)_shouldHitTestInputViewFirst;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessoryViewFrame;
- (BOOL)_disableGeometryObserverNotification;
- (id)_inheritedRenderConfig;
- (id)_inputWindowController;
- (void)_setAccessoryViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)performWithoutGeometryObserverNotifications:(id)arg1;
- (int)textEffectsVisibilityLevel;

@end
