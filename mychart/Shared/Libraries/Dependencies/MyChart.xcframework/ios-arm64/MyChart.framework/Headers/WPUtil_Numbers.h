//
//  WPUtil_Numbers.h
//  iChart
//
//  Created by Ben Drda on 07/19/11.
//  Copyright © 2011-2021 Epic Systems. All rights reserved.
/*  Change History:
 *   *bdrda 11/2011 220335 Created
 *   *bdrda 12/2011 221800 added localizeMetric and localizeNumberInString
 *   *jdumke 09/2012 242239 added currencyStringFromFloat and floatFromCurrencyString
 */

#import <Foundation/Foundation.h>

@interface WPUtil_Numbers : NSObject {

}

+ (nullable NSString*) localizeMetric: (nullable NSString *)str;
+ (nullable NSString*) localizeNumberInString: (nullable NSString *) str inRange: (NSRange) rangeOfNumber;
+ (nullable NSString*) localizedStringFromNumberString:(nullable NSString*)number;
+ (nullable NSString*) stringFromInteger:(NSInteger)intValue;
+ (nullable NSString *)currencyStringFromDecimalNumber: (nullable NSDecimalNumber *)number;
+ (nullable NSDecimalNumber *)decimalNumberFromCurrencyString: (nullable NSString *)amount;
+ (nullable NSString *)localizedStringFromFahrenheitString: (nullable NSString *)temperature;

@end
