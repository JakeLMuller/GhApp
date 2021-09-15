//
//  EFGraphingUtilities.h
//  EFGraphingLibrary
//
//  Created by Mike Epley on 8/6/14.
//  Copyright © 2014-2021 Epic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface EFGraphingUtilities : NSObject

+ (UIColor *) colorFromHexString:(NSString *)hexString;

+ (NSString *) formatValue:(NSNumber *)value decimals:(int)decimals;

+ (NSString *) formatInstant:(NSDate *)instant;

+ (NSDate *) makeDateByAddingHours:(NSInteger)hours toDate:(NSDate *)date;

+ (CABasicAnimation *) makeAnimationWithKeyPath:(NSString *)keyPath withDuration:(float)duration withDelay:(float)delay;

+ (NSNumberFormatter *)getNumberFormatterCopy;
+ (void)setNumberFormatter:(NSNumberFormatter *)formatter;
+ (NSDateFormatter *)getDateFormatter;
+ (void)setDateFormatter:(NSDateFormatter *)formatter;
@end
