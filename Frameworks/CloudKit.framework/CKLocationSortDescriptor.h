/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CLLocation;

@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding> {
    CLLocation *_relativeLocation;
}

@property(copy) CLLocation * relativeLocation;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDPQuerySort;
- (id)CKPropertiesDescription;
- (int)compareObject:(id)arg1 toObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 relativeLocation:(id)arg2;
- (id)relativeLocation;
- (void)setRelativeLocation:(id)arg1;

@end
