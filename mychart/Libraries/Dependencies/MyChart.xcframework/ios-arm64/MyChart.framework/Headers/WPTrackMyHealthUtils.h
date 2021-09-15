//
//  WPTrackMyHealthUtils.h
//  iChart
//
//  Created by Matthew Flatau on 9/2/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>

@class WPFlowsheetRow;
@class EFDataSet;
@class WPFlowsheetReading;
@class WPFlowsheet;
@class WPFlowsheetRowGroup;

@interface NSNumberFormatter (TMH)

- (double)doubleFromString:(NSString *)string;
- (double)roundNumber:(NSNumber *)num;

@end


@interface WPFlowsheetReadingsLoadCount : NSObject

@property (nonatomic, assign) NSUInteger count;
- (BOOL)canRetrieveMoreReadings;

@end


@interface WPTrackMyHealthUtils : NSObject

+ (UIColor *)abnormalColor;
+ (UIColor *)normalColor;
+ (UIColor *)normalRangeColor;

+ (EFDataSet *)graphDataForRow:(WPFlowsheetRow *)row;
+ (WPFlowsheetReading *)emptyReadingForRow:(WPFlowsheetRow *)row;
+ (void)setDisplayStringForReading:(WPFlowsheetReading *)reading withRow:(WPFlowsheetRow *)row;
+ (BOOL)numericString:(NSString *)text shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)repString;
+ (BOOL)stringValue:(NSString *)text shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)repString;
+ (dispatch_queue_t)getProcessQueue;
+ (void)processReadingsForFlowsheet:(WPFlowsheet *)flowsheet;
+ (void)processGroupsForFlowsheet:(WPFlowsheet *)flowsheet;
+ (void)combineBloodPressureInsulinRowsForFlowsheet:(WPFlowsheet *)flowsheet;
+ (WPFlowsheetRowGroup *)getOtherGroupFromFlowsheet:(WPFlowsheet *)flowsheet;
+ (void)setDisplayStringForRow:(WPFlowsheetRow *)row;
+ (NSString *)outOfBoundsMessageForReading:(WPFlowsheetReading *)reading andRow:(WPFlowsheetRow *)row;
+ (BOOL)numericReading:(WPFlowsheetReading *)reading isInBoundsForRow:(WPFlowsheetRow *)row;
+ (BOOL)numericReading:(WPFlowsheetReading *)reading isAbnormalForRow:(WPFlowsheetRow *)row;
+ (BOOL)numericValue:(double)value isAbnormalForRow:(WPFlowsheetRow *)row;

/// Convert a double to a localized string, e.g. 1,234.56 in en-US or 1.234,56 in some European regions
/// @param value a double value
/// @param decimals the number of decimals
+ (NSString *) localizedNumericString:(double)value withDecimal:(NSInteger)decimals;

@end
#endif
