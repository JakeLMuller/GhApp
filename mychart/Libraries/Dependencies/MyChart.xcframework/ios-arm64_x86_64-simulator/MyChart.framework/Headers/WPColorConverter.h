//
//  WPColorConverter.h
//  MyChart
//
//  This object encapsulates all of the logic necessary to convert UIColor objects to WPHUSLColor objects and back again.
//  It's specificallty used in deriving customer-specific colors for the login activity and all of the post-login activities from a single "seed" color.
//
//  Created by Mike Epley on 7/8/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPHUSLColor.h"

@interface WPColorConverter : NSObject

/**
 * Converts a HUSL color into a UIColor object.
 *
 * @param huslColor The HUSL color to be converted.
 * @return The specified HUSL color as a UIColor object.
 */
+ (UIColor *)convertHUSLColorToColor:(WPHUSLColor *)huslColor;

/**
 * Converts a HUSLp(astel) color into a UIColor object.
 *
 * @param huslpColor The HUSLp color to be converted.
 * @return The specified HUSLp color as a UIColor object.
 */
+ (UIColor *)convertHUSLpColorToColor:(WPHUSLColor *)huslpColor;

/**
 * Converts a UIColor object into a HUSL color.
 *
 * @param color The UIColor object to converted.
 * @return The specified UIColor object as a HUSL color.
 */
+ (WPHUSLColor *)convertColorToHUSLColor:(UIColor *)color;

/**
 * Converts a UIColor object into a HUSLp(astel) color.
 *
 * @param color The UIColor object to converted.
 * @return The specified UIColor object as a HUSLp color.
 */
+ (WPHUSLColor *)convertColortoHUSLpColor:(UIColor *)color;

/**
 * Makes the lightness of the given color closer to white by the given factor e.g.
 * a factor of 0.5 makes the color 50% closer to white
 *
 * @param color the color to change
 * @param factor the factor by which to modify the lightness
 * @return the new color with it's lightness multiplied
 */
+ (UIColor *)colorWithLightnessMultiplied:(UIColor *)color factor:(CGFloat)factor;

@end
