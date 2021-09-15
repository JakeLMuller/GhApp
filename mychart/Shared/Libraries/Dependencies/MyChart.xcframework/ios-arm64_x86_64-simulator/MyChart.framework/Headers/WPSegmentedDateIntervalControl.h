//
//  WPSegmentedDateIntervalControl.h
//  iChart
//
//  Created by Matthew Flatau on 8/26/14.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WPSegmentedDateIntervalControlDelegate <NSObject>

- (void)selectedStartDate:(NSDate *)startDate andEndDate:(NSDate *)endDate;

@end

@interface WPSegmentedDateIntervalControl : UIView

/**
 * Sets the max time interval and intializes the items for the range picker. the max date is always set to 11:59:59 PM of today.
 *
 * @param minDate - The minimum date that can be selected
 */
- (void)setMinDate:(NSDate *)minDate;

@property (nonatomic, strong) NSDate *startDate; //The currently selected start date
@property (nonatomic, strong) NSDate *lastDate; //The most current date
@property (nonatomic, readonly) NSDate *earliestDate; //The earliest possible date to select
@property (nonatomic, weak) IBOutlet id <WPSegmentedDateIntervalControlDelegate> delegate;
@property (nonatomic, weak) UILabel *dateRangeLabel;
@property (nonatomic, readonly) BOOL isShowingYear;
@property (nonatomic, weak) UISegmentedControl *rangePickerControl;

- (void)hide;
- (void)setSpacingBetweenElements:(CGFloat)spacing;
- (void)viewWillAppear;
- (NSDate *)dateAtIndex:(NSInteger)index;
- (void)rangePickerSelected:(id)sender;
+ (NSInteger)currentSelectedIndex;

@end
