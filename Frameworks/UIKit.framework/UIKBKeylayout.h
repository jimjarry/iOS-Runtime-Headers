/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString, UIKBKeyset;



@interface UIKBKeylayout : UIKBShape <NSCoding>
{
    NSString *m_name;
    UIKBKeyset *m_keyset;
    NSMutableArray *m_refs;
}

@property(readonly) NSArray *references;
@property(retain) UIKBKeyset *keyset;
@property(retain) NSString *name;

+ (id)keylayout;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)setReferenceWithName:(id)arg1 value:(id)arg2 flags:(NSUInteger)arg3;
- (id)referenceWithName:(id)arg1;
- (id)references;
- (void)setRef:(id)arg1;
- (void)layoutInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)keyset;
- (void)setKeyset:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end