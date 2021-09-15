//
//  WPAPIApplication.h
//  MyChart
//
//  Created by Matthew Flatau on 11/15/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPAPIApplication : NSObject

/**
 * @brief This helper function is intended to be called in an implementation of
 *        -[UIApplication sendEvent:]. Pass the event to this function and it will
 *        check if the event was recent and will check the status of a touch in
 *        this event. Based off the status it will then reset the idle timer.
 *
 * @param event - The UIEvent sent in a call of [UIApplication sendEvent:]
 */
+ (void)resetIdleTimerFromEvent:(UIEvent *)event;


/**
 * @brief Set the language locale for the application to use.  Set to null to revert to default MyChart Mobile logic.  Note, this will not retroactively change the locale for existing views.
 * @param languageLocale - A string of the language locale such as "ar" or "en"
 */
+ (void)setLanguageLocaleOverride:(NSString *)languageLocale;

/**
 * @brief Set the formatter locale for the application to use.  Set to null to revert to default MyChart Mobile logic.  Note, this will not retroactively change the locale for existing views.
 * @param formatterLocale - A string of the formatter locale such as "en-US" or "en-GB" to be used for date/number format
 */
+ (void)setFormatterLocaleOverride:(NSString *)formatterLocale;

/**
 * Get the current override language locale for the application to use.  This is different than getMyChartLanguageLocale(),
 * as getMyChartLanguageLocale gets the language locale MyChart is using.  If language override is set, the MyChart language locale is equal to the override.
 */
+ (NSString *)getLangagueLocaleOverride;

/**
 * Get the current override formatter locale for the application to use.  This is different than getMyChartFormatterLocale(),
 * as getMyChartFormatterLocale gets the formatter locale MyChart is using.  If formatter override is set, the MyChart formatter locale is equal to the override.
 */
+ (NSString *)getFormatterLocaleOverride;

/**
 * Get the current language locale that the MyChart library is using.
 */
+ (NSString *)getMyChartLangagueLocale;

/**
 * Get the current formatter locale that the MyChart library is using.
 */
+ (NSString *)getMyChartFormatterLocale;


@end
