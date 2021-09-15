//
//  WPCalendarDayView.h
//  iChart
//
//  Created by Larry Irwin II on 8/4/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *csatish 4/14 309966 Update to iOS 7 UI
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <UIKit/UIKit.h>

@class WPCalendarDayView;

@protocol WPCalendarDayViewDelegate <NSObject>

@required
- (void) WPCalendarDayViewDidSelectDay:(WPCalendarDayView*)day;

@end

typedef NS_ENUM(NSInteger, WPDataState) {
	WPDataStateUnknown,
	WPDataStateInProgress,
	WPDataStateAvailable,
	WPDataStateUnavailable,
} ;

@interface WPCalendarDayView : UIView 
{
	NSDate*						date_;
	UILabel*					dayOfWeekNameLabel_;
	UILabel*					dayOfMonthNumberLabel_;
	UILabel*					iconLabel_;
	UIActivityIndicatorView*	activityIndicatorView_;
    UIView*                     dayOfMonthNumberBackground_;
	
	UIButton*					actionButton_;
	
	WPDataState					dataState_;
	UIControlState				controlState_;
	NSInteger					monthNumber_;
	
	BOOL						isWeekendDay_;
	
	id<WPCalendarDayViewDelegate>	__weak delegate_;
    
    UIColor*                    selectedColor_;
    UIColor*                    selectedTintColor_;

}

@property (nonatomic, strong) NSDate*						date;
@property (nonatomic, strong) UIActivityIndicatorView*		activityIndicatorView;

@property (nonatomic, weak) id<WPCalendarDayViewDelegate>	delegate;
@property (nonatomic, assign) WPDataState					dataState;
@property (nonatomic, assign) UIControlState				controlState;  

- (id)initWithFrame:(CGRect)frame andDate:(NSDate*)aDate;

@end
