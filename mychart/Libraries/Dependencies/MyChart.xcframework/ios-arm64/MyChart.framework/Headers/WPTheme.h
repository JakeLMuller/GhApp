//
//  WPTheme.h
//  MyChart
//
//  Created by Epic on 8/21/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

@class WPServer;

@protocol PEPersonProtocol;

// TODO: Make sure these are deleted with Huntsman's Apple Watch project
/// DEPRECATED.  If you want to reference  color defined here, you should probably use the concrete implementation of PEThemeProtocol instead.  Do not add to this class - instead reach out to Mike Epley and discuss the changes you think you need to make in order to find an alternative path forward.
@interface WPTheme : NSObject { }

extern NSDictionary* WPCustomStrings;

/**
 * Get the stanard theme object.
 */
+ (NSDictionary *)standardWPTheme;

/**
 * Get a given theme value
 * @param key name of the value
 */
+ (id)valueForWPThemeKey:(NSString *)key;

/**
 * Get a value and load the given image.
 * @param key to the image name
 */
+ (UIImage *)imageForWPThemeKey:(NSString *)key;

/**
 * Get a given theme color.
 * @param key to the color name
 */
+ (UIColor *)colorForWPThemeKey:(NSString *)key;

// Proxy colors for the legacy Home Screen (aka Springboard)
+ (NSArray *)proxyColors;
+ (UIColor *)proxyColorAtIndex:(NSUInteger)index;
+ (NSInteger)indexForProxyColor:(UIColor *)color;

// Colors for the login screen
+ (UIColor *)deriveBarTintColorFromLoginColor:(UIColor *)loginColor;

@end
