//
//  EFGrapher.h
//  EFGrapher
//
//  Created by Mike Epley on 7/18/14.
//  Copyright © 2014-2021 Epic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EFDataSet.h"

@interface EFGrapher : NSObject

extern const float LabelPaddingForGraphYAxis;
extern const float WidthForGraphYAxis;
extern const float PaddingForGraphData;
extern const float RightPaddingForGraphData;

+ (float)calculateYForValue:(float)value minimumValue:(float)minimumValue frameHeight:(float)height minimumY:(float)minimumY denominator:(float)denominator;
+ (float)calculateXForInstant:(NSDate *)instant minimumInstant:(NSDate *)minimumInstant frameWidth:(float)width minimumX:(float)minimumX denominator:(float)denominator;
+ (void) calculateCoordinatesForData:(EFDataSet *)dataSet withinFrame:(CGRect)frame;
+ (void) calculateCoordinatesForData:(EFDataSet *)dataSet withinFrame:(CGRect)frame paddingForData:(CGFloat)paddingForData rightPaddingForData:(CGFloat)rightPaddingForData xAxisHeight:(CGFloat)xAxisHeight yAxisWidth:(CGFloat)yAxisWidth;
+ (float) calculateAbsoluteDataHighFromDataSet:(EFDataSet *)dataSet;
+ (float) calculateAbsoluteDataLowFromDataSet:(EFDataSet *)dataSet;
+ (NSDate *) calculateAbsoluteInstantHighFromDataSet:(EFDataSet *)dataSet;
+ (NSDate *) calculateAbsoluteInstantLowFromDataSet:(EFDataSet *)dataSet;

- (id) initWithDataSet:(EFDataSet *)dataSet;
- (void) graphDataSetWithinFrame:(CGRect)frame;
- (void) drawRange;
- (void) drawRangeWithLabels:(BOOL)drawLabels;
- (void) drawTarget;
- (void) drawLabelForMark:(EFDataMark *)dataMark;
- (void) drawLineForMark:(EFDataMark *)dataMark;
- (CGRect) getRectForGraph;
- (CGRect) getRectForRange;
- (CGRect) getRectForTarget;
- (CGRect) getRectForLabelForMark:(EFDataMark *)dataMark;
- (UIColor *) getColorForDataPoint:(EFDataPoint *)dataPoint;

@property CGRect frame;
@property CGFloat xMin;
@property CGFloat xMax;
@property CGFloat yMin;
@property CGFloat yMax;
@property CGFloat drawableWidth;
@property CGFloat drawableHeight;
@property EFDataSet *dataSet;
@property UIColor *dataColor;
@property UIColor *abnormalDataColor;
@property UIColor *shadingColor;
@property UIColor *labelColor;
@property BOOL showMetadata;

@end
