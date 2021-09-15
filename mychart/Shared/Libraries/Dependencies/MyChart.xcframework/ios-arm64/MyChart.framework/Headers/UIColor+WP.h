//
//  UIColor+WP.h
//  iChart
//
//  Created by Chetan Satish on 4/7/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 08/2014 323413 Adding hexString, hexValue
//  *mflatau 02/2015 354336 Fixing 64-bit errors
//  *mflatau 09/2015 379596 Adding colorFromHexString

#import <Foundation/Foundation.h>

@interface UIColor (WP)

- (UIColor *) blendColor:(UIColor *)color withAlpha:(CGFloat)alpha;
+ (UIColor *) blackRGBColor;
+ (UIColor *) whiteRGBColor;
- (NSString *) hexString;
- (int)hexValue;


/*!
 * @brief Parses a hex string into a UIColor.
 *
 * @param hexString A hex string in a variety of formats.
 *      - May start with an optional #
 *      - Can be capitalized or not
 *      - Must be 6 digits (or 7 if the # is included). The exception to this rule
 *          is the optional 7 & 8 digit (not including #) which can be used to specify
 *          an alpha value. i.e. FF = alpha 1 and 00 = alpha 0.
 *
 * @return UIColor matching the given hexstring
 */
+ (UIColor *)colorFromHexString:(NSString *)hexString;

@end
