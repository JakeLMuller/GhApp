//
//  EFDataSet.h
//  EFGrapher
//
//  Created by Mike Epley on 7/16/14.
//  Copyright © 2014-2021 Epic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EFDataPoint.h"
#import "EFDataMark.h"

@interface EFDataSet : NSObject
typedef NS_ENUM(NSInteger, EFTargetType) {
    EFTargetTypeMinimum  = 1,
    EFTargetTypeMaximum = 2
};

- (id) initWithData:(NSArray *)data decimals:(int)decimals;
- (void) setLowerRangeBound:(NSNumber *)rangeLow upperRangeBound:(NSNumber *)rangeHigh;
- (void) setTarget:(NSNumber *)target withTargetType:(EFTargetType)targetType;
- (void) setExplicitDataLow:(NSNumber *)dataLow explicitDataHigh:(NSNumber *)dataHigh;
- (void) setExplicitInstantLow:(NSDate *)instantLow explicitInstantHigh:(NSDate *)instantHigh;
- (void) setExplicitInstantLow:(NSDate *)instantLow explicitInstantHigh:(NSDate *)instantHigh autoExpand: (BOOL) autoExpand;
- (BOOL) hasRange;
- (EFDataPoint *) getLatestDataPoint;
- (BOOL)showingData;

@property NSArray<EFDataPoint*> *data;
@property int decimals; //number of decimals to display

/// these properties store data/instant low/high for the entire data set
/// and therefore don't change unless data is changed
@property NSNumber *dataLow;
@property NSNumber *dataHigh;
@property NSDate *instantLow;
@property NSDate *instantHigh;

/// explicit instants are used to filter the data set to specific time periods
/// when set, filtered low/high and mean are re-calculated
@property NSDate *explicitInstantLow;
@property NSDate *explicitInstantHigh;
@property EFDataMark *filteredDataLow;
@property EFDataMark *filteredDataHigh;
@property NSNumber *filteredDataMean;

//last data point within explicit instant low/high
@property (readonly) EFDataPoint *lastDataPoint;

/// set these to ignore overall or filtered data lows and highs
@property EFDataMark *explicitDataLow;
@property EFDataMark *explicitDataHigh;

/// calculated properties that return explicit data low/high if set, otherwise return filtered low/high
@property (readonly) EFDataMark* absoluteDataLow;
@property (readonly) EFDataMark* absoluteDataHigh;

@property EFDataMark *rangeLow;
@property EFDataMark *rangeHigh;
@property EFDataMark *target;
@property EFTargetType targetType;

@end
