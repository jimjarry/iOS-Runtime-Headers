/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString, PKPrintSettings, NSDate, NSData;



@interface PKJob : NSObject 
{
    NSInteger number;
    NSInteger mediaProgress;
    NSInteger mediaSheets;
    NSInteger mediaSheetsCompleted;
    NSString *printerDisplayName;
    NSInteger printerKind;
    NSString *printerLocation;
    PKPrintSettings *settings;
    NSInteger state;
    NSDate *timeAtCompleted;
    NSDate *timeAtCreation;
    NSDate *timeAtProcessing;
    NSData *thumbnailImage;
}

@property(retain) NSData *thumbnailImage;
@property(retain) NSDate *timeAtProcessing;
@property(retain) NSDate *timeAtCreation;
@property(retain) NSDate *timeAtCompleted;
@property NSInteger state;
@property(retain) PKPrintSettings *settings;
@property(retain) NSString *printerLocation;
@property NSInteger printerKind;
@property(retain) NSString *printerDisplayName;
@property NSInteger mediaSheetsCompleted;
@property NSInteger mediaSheets;
@property NSInteger mediaProgress;
@property NSInteger number;

+ (id)jobs;
+ (id)currentJob;

- (void)setNumber:(NSInteger)arg1;
- (NSInteger)number;
- (id)thumbnailImage;
- (NSInteger)mediaSheetsCompleted;
- (NSInteger)mediaSheets;
- (id)settings;
- (id)printerDisplayName;
- (id)printerLocation;
- (NSInteger)printerKind;
- (id)timeAtCreation;
- (id)timeAtProcessing;
- (id)timeAtCompleted;
- (NSInteger)update;
- (NSInteger)cancel;
- (void)setState:(NSInteger)arg1;
- (NSInteger)state;
- (void)setTimeAtProcessing:(id)arg1;
- (void)setTimeAtCreation:(id)arg1;
- (void)setTimeAtCompleted:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setPrinterLocation:(id)arg1;
- (void)setPrinterKind:(NSInteger)arg1;
- (void)setPrinterDisplayName:(id)arg1;
- (void)setMediaSheetsCompleted:(NSInteger)arg1;
- (void)setMediaSheets:(NSInteger)arg1;
- (void)setMediaProgress:(NSInteger)arg1;
- (NSInteger)mediaProgress;
- (void)setThumbnailImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end