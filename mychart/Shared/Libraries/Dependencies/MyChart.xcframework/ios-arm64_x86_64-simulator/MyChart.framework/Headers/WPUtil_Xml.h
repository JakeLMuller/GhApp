//
//  WPUtil_Xml.h
//  iChart
//
//  Created by Larry Irwin II on 7/8/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 10/2014 333018 Adding wrapper to get defaultDateFormatter and defaultNumberFormatter and setting locale to always be en_US
//  *mflatau 01/2015 338750 Adding date and time zone decoding
//  *mflatau 01/2015 351073 Adding date and time with timezone truncation
//  *bdrda   01/2015 351191 add time zone methods

#import <Foundation/Foundation.h>

extern NSString * const DateTimeFormat;
extern NSString * const DateOnlyFormat;

@interface WPUtil_Xml : NSObject

/**
 * Convert from a DateTime from C# encoded in xml
 *
 * @param xmlDateString the input date string
 * @return a NSDate obj that represents the input string
 */
+(NSDate*)dateFromXMLDateTimeString:(NSString*)xmlDateString;

/**
 * Convert from a DateTime from C# encoded in xml
 *
 * @param xmlDateString the input date string
 * @return a NSDate obj that represents the input string
 */
+(NSDate*)dateFromXMLDateTimeAndZoneString:(NSString*)xmlDateString;

+(NSTimeZone*)timeZoneFromXMLDateTimeAndZoneString:(NSString *)xmlDateString;

/**
 * Convert from a Date from C# encoded in xml
 *
 * @param xmlDateString the input date string
 * @return a NSDate obj that represents the input string
 */
+(NSDate*)dateFromXMLDateString:(NSString*)xmlDateString;

/**
 * Convert from a NSDate to xml encoded DateTime with given timezone format
 * @param date the input data
 * @return a NSString that represents the input date in xml
 */
+(NSString*)xmlDateTimeandZoneStringFromDate:(NSDate*)date;

/**
 * Convert from a NSDate to xml encoded DateTime for C#
 *
 * @param date the input date
 * @return a NSString that represents the input date in xml
 */
+(NSString*)xmlDateTimeStringFromDate:(NSDate*)date;

/**
 * Convert from a NSDate to xml encoded Date for C#
 *
 * @param date the input date
 * @return a NSString that represents the input date in xml
 */
+(NSString*)xmlDateStringFromDate:(NSDate*)date;

/**
 * Convert from true and false to BOOLs
 *
 * @param s the input string ("true" is evaluated to TRUE, everything else is false)
 * @return BOOL representation of s
 */
+(BOOL)boolFromXMLString:(NSString*)s;

/**
 * Convert BOOLs to true/false
 *
 * @param b the input BOOL
 * @return NSString* representation of b ("true"/"false")
 */
+(NSString*)stringFromBool:(BOOL)b;

/**
 * Convert BOOLs to 1/0
 *
 * @param b the input BOOL
 * @return NSString* representation of b ("1"/"0")
 */
+ (NSString*)stringMFromBool:(BOOL)b;

+ (NSDecimalNumber *)decimalFromXMLDecimalString:(NSString *)xmlDecimalString;
+ (NSNumber *)numberFromXMLString:(NSString *)xmlString;


/**
 * Convert from a NSDate to xml encoded Date for C# with a given format
 *
 * @param date the input date
 * @param format the output format
 * @return a NSString that represents the input date in xml
 */
+(NSString*)xmlStringFromDate:(NSDate*)date withFormat:(NSString *)format;

/**
 * Convert from a base 64 xml string to NSData.
 *
 */
+(NSData *)dataFromBase64XMLString:(NSString *)xmlString;
@end
