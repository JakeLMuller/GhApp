//
//  NSDate+Mathematics.h
//  iChart
//
//  Created by Larry Irwin II on 8/23/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 01/2015 338750 Adding isToday/Tomorrow/Yesterday
//  *bdrda 01/2015 351191 adding isToday/Tomorrow/YesterdayInTimeZone

#import <Foundation/Foundation.h>


@interface NSDate (WPMathematics)

//Returns a new NSDate by adding aDays to the receiver
-(NSDate*)dateByAddingDays:(NSInteger)aDays;

//Returns a date stripped of its time components. Returns only Year,Month,Day
-(NSDate*)dateByOnlyTakingYearMonthDayComponentsInTimeZone:(NSTimeZone *)tz;

//Returns a date stripped of its date components. Returns only Hour, MInute,Second
-(NSDate*)dateByOnlyTakingHoursMinuteSecondComponentsInTimeZone:(NSTimeZone *)tz;

/*
 * Returns an NSArray of NSDates between the receiver and aDate. 
 *
 * Should not matter which date is before or after the receiver. However the 
 * return array should be in increasing order.
 */
-(NSArray*)datesBetween:(NSDate*)aDate;
-(NSArray*)datesBetween:(NSDate*)aDate isInclusive:(BOOL)aIsInclusive;

-(BOOL)isBetweenStartDate:(NSDate *)dateStart andEndDate:(NSDate *)dateEnd;

- (BOOL)isToday;
- (BOOL)isTomorrow;
- (BOOL)isYesterday;
- (BOOL)isThisYear;

- (BOOL)isTodayInTimeZone:(NSTimeZone *)tz;
- (BOOL)isTomorrowInTimeZone:(NSTimeZone *)tz;
- (BOOL)isYesterdayInTimeZone:(NSTimeZone *)tz;
- (BOOL)isThisYearInTimeZone:(NSTimeZone *)tz;

- (BOOL)isWeekend;

@end
