/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class WLBarcode, UIImageView, UILabel, NSMutableArray;

@interface WLBarCodeStickerView : UIView  {
    WLBarcode *_barcode;
    UIImageView *_matteView;
    UIImageView *_barCodeView;
    NSMutableArray *_stickerConstraints;
    NSMutableArray *_matteConstraints;
    UILabel *_altTextLabel;
}

+ (struct CGSize { float x1; float x2; })_sizeForBarcode:(id)arg1;

- (void)_generateMatteRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 barcodeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 altTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 boundingSize:(struct CGSize { float x1; float x2; })arg4;
- (id)initWithBarCode:(id)arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end