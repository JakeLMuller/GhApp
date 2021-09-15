//
//  WPFlowsheetRow.h
//  iChart
//
//  Created by Matthew Flatau on 7/24/14.
//  Copyright © 2014-2021 Epic Systems Corp. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPObject.h"
#import "EFBloodPressureDataSet.h"
#import "EFGraphView.h"
#import "WPFlowsheetEnums.h"

@class WPFlowsheetReading;

@interface EFBloodPressureDataSet (WP)
- (BOOL)showingData;
@end



@interface WPCustomListOption : WPObject

@property (nonatomic, strong) NSString *value;
@property (nonatomic, strong) NSString *abbreviation;
@property (nonatomic, strong) NSString *patientFriendlyName;

- (BOOL)isEqualToCustomListOption:(WPCustomListOption *)option;
- (NSString *)displayName;

@end



@interface WPFlowsheetRowGoal : WPObject

@property (nonatomic, strong) NSString *goalName;
@property (nonatomic, assign) NSInteger highGoalComparator;
@property (nonatomic, assign) CGFloat highGoalTarget;
@property (nonatomic, assign) NSInteger lowGoalComparator;
@property (nonatomic, assign) CGFloat lowGoalTarget;

@end



@interface WPFlowsheetRow : WPObject {
    NSArray *_customListStrings;
}

@property (nonatomic, strong) NSMutableArray *customList;   //Array of customListValues
@property (nonatomic, assign) WPFlowsheetValueType valueType;
@property (nonatomic, strong) NSNumber *warningMinValue;
@property (nonatomic, strong) NSNumber *warningMaxValue;
@property (nonatomic, strong) NSNumber *minValue;
@property (nonatomic, strong) NSNumber *maxValue;
@property (nonatomic, strong) NSString *instructions;
@property (nonatomic, assign) NSUInteger decimals;
@property (nonatomic, assign) WPFlowsheetRowDataType dataType;
@property (nonatomic, strong) NSMutableArray *goals;       //array of RowGoals
@property (nonatomic, strong) NSString *unit;
@property (nonatomic, strong) NSMutableArray *accumulationPeriods;
@property (nonatomic, readonly) NSCalendarUnit accumulationUnit;
@property (nonatomic, readonly) WPAccumulationPeriod defaultAccumulationPeriod;
@property (nonatomic, readonly) NSString *helpText;
@property (nonatomic, readonly) BOOL isInsulin;

//This type returned map to I FLO 32050, which luckily is the same enumeration for EFGraphType, This may change
@property (nonatomic, strong) NSMutableArray *graphTypes;
@property (nonatomic, readonly) EFGraphType graphType;

//Helper property/methods
@property (nonatomic, readonly) NSArray *customListStrings;
- (WPCustomListOption *)listOptionForValue:(NSString *)value;


@property (nonatomic, strong) NSMutableArray *readings;
@property (nonatomic, strong) EFDataSet *graphDataSet;
@property (nonatomic, strong) NSAttributedString *displayString;

- (void)addReading:(WPFlowsheetReading *)reading;
- (void)deleteReading:(WPFlowsheetReading *)reading;
- (void)insertReading:(WPFlowsheetReading *)reading;
- (BOOL)isEqualToRow:(WPFlowsheetRow *)row;

+ (NSCalendarUnit) calendarUnitsFor:(WPAccumulationPeriod)period;
@end
#endif
