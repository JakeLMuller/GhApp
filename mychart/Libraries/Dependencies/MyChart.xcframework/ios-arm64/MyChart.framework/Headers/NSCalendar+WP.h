//
//  NSCalendar+WP.h
//  iChart
//
//  Created by Matthew Flatau on 9/8/14.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//
//  *bdrda   01/2015 351191 make calendar with time zone.

#import <Foundation/Foundation.h>

extern const NSCalendarUnit TIME_COMPS;
extern const NSCalendarUnit DAY_COMPS;

@interface NSCalendar (WP)

- (NSDate *)date:(NSDate *)date withComponents:(NSCalendarUnit)units;
- (BOOL)isDate:(NSDate *)first theSameAs:(NSDate *)second withUnits:(NSCalendarUnit)units;
- (NSDate *)dateFromDate:(NSDate *)date withTimeFromDate:(NSDate *)time;
- (NSDate *)dateWithMinutePrecision:(NSDate *)date;


+ (NSDate *)date:(NSDate *)date withComponents:(NSCalendarUnit)units;
+ (BOOL)isDate:(NSDate *)first theSameAs:(NSDate *)second withUnits:(NSCalendarUnit)units;
+ (NSDate *)dateFromDate:(NSDate *)date withTimeFromDate:(NSDate *)time;
+ (NSDate *)dateWithMinutePrecision:(NSDate *)date;
+ (NSCalendar *)currentCalendarInTimeZone:(NSTimeZone *)tz;

+ (BOOL)isDate:(NSDate *)date withinNumDays:(NSInteger)days;

@end
