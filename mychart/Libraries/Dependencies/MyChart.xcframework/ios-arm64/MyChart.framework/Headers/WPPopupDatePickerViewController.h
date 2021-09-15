//
//  WPPopupDatePickerViewController.h
//  MyChart
//
//  Created by Matthew Flatau on 2/4/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPPopupViewController.h"

typedef NS_ENUM(NSInteger, WPDateRange) {
    kWPShowFutureDates,
    kWPShowPastDates,
    kWPShowAllDates,
};

@interface WPPopupDatePickerViewController : WPPopupViewController

@property (nonatomic, strong) NSDate *date;
@property (nonatomic, assign) WPDateRange dateRange;
@property (nonatomic, weak) UIDatePicker *datePicker;

-(instancetype)initWithTitle:(NSString *)title andDate:(NSDate *)dateVal andDateRange:(WPDateRange)dateRangeVal;
-(instancetype)initWithAttributedTitle:(NSAttributedString *)title andDate:(NSDate *)dateVal andDateRange:(WPDateRange)dateRangeVal;

@end
