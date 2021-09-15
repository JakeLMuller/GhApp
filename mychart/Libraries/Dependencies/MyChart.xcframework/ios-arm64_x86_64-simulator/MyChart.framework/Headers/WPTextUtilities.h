//
//  WPTextUtilities.h
//  MyChart
//
//  Created by Mohammed Rangwala on 11/2/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPTextUtilities : NSObject

+ (CGSize)sizeForText:(NSString *)text withFont:(UIFont *)font andMaxSize:(CGSize)maxSize;
+ (CGSize)sizeForText:(NSString *)text withFont:(UIFont *)font maxSize:(CGSize)maxSize andLineBreakMode:(NSLineBreakMode)lineBreakMode;

/*!
 * @brief Get the truncated version of a string with a default max length.
 * @return The truncated version of the string or nil if the string didn't need to be truncated
 */
+ (NSString *)getTruncatedString:(NSString *)displayString;

/*!
 * @brief Get the truncated version of a string with a certain max length.
 * @return The truncated version of the string or nil if the string didn't need to be truncated
 */
+ (NSString *)getTruncatedString:(NSString *)displayString andMaxLength:(CGFloat)maxLength;

@end
