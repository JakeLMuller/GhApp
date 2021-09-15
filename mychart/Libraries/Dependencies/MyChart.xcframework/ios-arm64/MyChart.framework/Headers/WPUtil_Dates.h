//
//  WPUtil_Dates.h
//  iChart
//
//  Created by Larry Irwin II on 7/8/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.

#import <Foundation/Foundation.h>

extern NSString * _Nonnull const kDayAbbrMonthDateFormat;
extern NSString * _Nonnull const kDayMonthDateFormat;
extern NSString * _Nonnull const kDayAbbrMonthYearDateFormat;
extern NSString * _Nonnull const kAbbrDayAbbrMonthYearDateFormat;
extern NSString * _Nonnull const kDayMonthYearDateFormat;
extern NSString * _Nonnull const kMonthDateYearFormat;
extern NSString * _Nonnull const kMonthDateYearTimeFormat;
extern NSString * _Nonnull const kAbbrMonthDateFormat;
extern NSString * _Nonnull const kAbbrMonthDateYearFormat;
extern NSString * _Nonnull const kAbbrMonthDateYearTimeFormat;
extern NSString * _Nonnull const kMonthDateYearFormat;
extern NSString * _Nonnull const kDayFormat;
extern NSString * _Nonnull const kYearMonthDateFormat;
extern NSString * _Nonnull const kShortDateFormat;
extern NSString * _Nonnull const kDayAndShortDateFormat;
extern NSString * _Nonnull const kMonthAbbrFormat;
extern NSString * _Nonnull const kDateFormat;
extern NSString * _Nonnull const kYearFormat;
extern NSString * _Nonnull const kTimeFormat;
extern NSString * _Nonnull const kMonthDayFormat;
extern NSString * _Nonnull const kMonthYearFormat;
extern NSString * _Nonnull const kDayMonthYearDateAbbrFormat;
extern NSString * _Nonnull const kMonthDayYearAbbrTimeFormat;

@interface WPUtil_Dates : NSObject

/**
 * @brief calculate the date between two dates, rounding up
 * @param startDate the starting date, inclusive
 * @param endDate the ending date, inclusive
 *
 * @return The date between the two dates
 */
+(nullable NSDate*)getDateBetween:(nonnull NSDate*)startDate and:(nonnull NSDate*)endDate;

/**
 * Convert a date  to a "relative date"
 * such as:
 * Today
 * Tomorrow
 * Monday - Friday
 *
 * If past a week it will output as mm/dd/yyy
 *
 * @param date the string to convert (must be in the format: "mm/dd/yyyy"
 *
 * @return a converted string
 */
+(nonnull NSString*)dateToRelativeDate:(nonnull NSDate*)date;

/**
 * Convert a date  to a "relative date"
 * such as:
 * Today
 * Tomorrow
 * Monday - Friday
 *
 * If past a week it will output a localized date with the given format
 *
 * @param date the date to convert
 * @param defaultFormat the default format string to use
 * @param capitalize whether or not to capitalize Today/Tomorrow/Yesterday
 *
 * @return a converted string
 */
+(nonnull NSString*)dateToRelativeDate:(nonnull NSDate*)date withDefaultFormat:(nullable NSString *)defaultFormat capitalize:(BOOL)capitalize andTimeZone:(nullable NSTimeZone *)tz;

/**
 * Create a displayable string from a given date
 *
 * @param date the date to use a the source
 * @return the string representation of the date
 */
+(nonnull NSString*)stringFromDate:(nonnull NSDate*)date;

+(nonnull NSString*)stringFromDate:(nonnull NSDate*)date isTimeNull:(BOOL)isTimeNull;

/**
 * Generic function to obtain a formatted date string given a date and dateformat
 *
 * @param date the date to use as the source of information
 * @param format the date format to use when returning information about the date
 * @return string representation of the date using the given date format string
 */
+(nonnull NSString*)stringFromDate:(nonnull NSDate*)date withDateFormat:(nonnull NSString*)format;

/**
 * Generic function to obtain a formatted date string given a date and dateformat
 *
 * @param date the date to use as the source of information
 * @param format the date format to use when returning information about the date
 * @param timeZone the timezone to format the date in
 * @return string representation of the date using the given date format string
 */
+(nonnull NSString*)stringFromDate:(nonnull NSDate*)date withDateFormat:(nonnull NSString*)format andTimeZone:(nullable NSTimeZone *)timeZone;

/**
 * Converts the date object to a human readable string displaying the time
 *
 * @param date the date to use as the source of information
 * @return string representation of the time of the given date.
 */
+(nonnull NSString*)stringFromTime:(nonnull NSDate*)date;

/**
 * Create a displayable string from a given time. en-US version is "8:26 AM"
 *
 * @param date the date to use as the source
 * @param tz zone the date should be displayed in
 * @return the string representation of the time
 */
+(nonnull NSString*)stringFromTime:(nonnull NSDate*)date andTimeZone:(nullable NSTimeZone *)tz;

/**
 * Create a displayable string from a given time. For example en-us version could be "8:26 AM PST." Time zone param should be valid for this to work.
 *
 * @param date the date to use as the source
 * @param andTimeZoneWithAbbreviation the date should be displayed in
 * @return the string representation of the time
 */
+(nonnull NSString*)stringFromTime:(nonnull NSDate*)date andTimeZoneWithAbbreviation:(nullable NSTimeZone *)tz;

/**
 * Create a displayable string from a given date and time
 *
 * @param date the date to use a the source
 * @return the string representation of the date
 */
+(nonnull NSString*)stringFromDateAndTime:(nonnull NSDate*)date;

+(nonnull NSString*)stringFromDateDayAndTime:(nonnull NSDate*)date;
+(nonnull NSString*)stringFromDayAndMonth:(nonnull NSDate*)date;

+(nonnull NSDate*)dateFromISODateString:(nonnull NSString*)dateString;
+(nonnull NSDate*)dateFromDateString:(nonnull NSString*)dateString withFormat:(nonnull NSString*)format;

+(nonnull NSDate*)dateFromISOTimeString:(nonnull NSString*)timeString;
+(nonnull NSDate*)referenceDate;// 1/1/1841 (Earliest Epic date

+(NSInteger)secondsSinceMidnightFromDate:(nonnull NSDate *)date;

@end
