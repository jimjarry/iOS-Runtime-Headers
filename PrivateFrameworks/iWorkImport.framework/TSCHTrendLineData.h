/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSCHChartSeries, TSUBezierPath, TSURegressionModel;

@interface TSCHTrendLineData : NSObject <TSCHUnretainedParent> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mCachedChartFrame;
    BOOL mCachedChartVertical;
    TSUBezierPath *mCachedTrendLinePath;
    int mInputAxisType;
    int mLineType;
    double mMaxXValue;
    double mMaxYValue;
    double mMinXValue;
    double mMinYValue;
    double mOffsetInBody;
    int mOutputAxisType;
    TSURegressionModel *mRegression;
    TSCHChartSeries *mSeries;
    BOOL mShowTrendLine;
    BOOL mTrendLineInvalid;
}

@property(readonly) float equationTextOpacity;
@property(readonly) NSString * rSquaredText;
@property(readonly) float rSquaredTextOpacity;
@property(readonly) BOOL showEquation;
@property(readonly) BOOL showRSquared;
@property(readonly) BOOL showTrendLine;
@property(readonly) BOOL showTrendLineLegendText;
@property(readonly) NSString * trendLineLegendText;

- (void)clearParent;
- (void)dealloc;
- (float)equationTextOpacity;
- (id)initWithSeries:(id)arg1;
- (void)invalidateData;
- (double)maxValueForAxisID:(id)arg1;
- (double)minValueForAxisID:(id)arg1;
- (struct __CFAttributedString { }*)newEquationAttributedString;
- (void)p_addPathToTrendLinePathWithPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2 curved:(BOOL)arg3 curveFitter:(id)arg4;
- (void)p_calcBounds;
- (void)p_calcBoundsForMovingAverage;
- (void)p_calcMARegression:(unsigned int)arg1 xData:(id)arg2 yData:(id)arg3;
- (void)p_calcRegression:(unsigned int)arg1 xData:(double*)arg2 yData:(double*)arg3;
- (id)p_dataPointValues;
- (unsigned int)p_fillArrayX:(id)arg1 andY:(id)arg2 fromPoints:(id)arg3;
- (unsigned int)p_fillArrayX:(double*)arg1 andY:(double*)arg2 fromPoints:(id)arg3 hasNegativeX:(BOOL*)arg4;
- (void)p_generateRegression;
- (int)p_getTrendLineType;
- (id)p_linePathFromPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;
- (void)p_releaseCache;
- (struct { double x1; double x2; })p_unitPoint:(struct { double x1; double x2; })arg1 toScreenFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 offset:(double)arg3 vertical:(BOOL)arg4;
- (void)p_updateTrendLineData;
- (id)rSquaredText;
- (float)rSquaredTextOpacity;
- (BOOL)showEquation;
- (BOOL)showRSquared;
- (BOOL)showTrendLine;
- (BOOL)showTrendLineForAxisID:(id)arg1;
- (BOOL)showTrendLineLegendText;
- (id)trendLineLegendText;
- (id)trendLinePathForChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 offsetInBody:(double)arg2 vertical:(BOOL)arg3;
- (void)trendLineUnitSpacePoints:(struct { /* ? */ }**)arg1 count:(unsigned int*)arg2 drawCurve:(BOOL*)arg3 maxPoints:(unsigned int)arg4;
- (void)updateIfNeeded;

@end
