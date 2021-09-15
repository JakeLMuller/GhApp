//
//  WPApplication.h
//  MyChart
//
//  Created by Mike on 7/21/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.

#import <Foundation/Foundation.h>


@interface WPApplication : UIApplication

+ (nonnull WPApplication *)sharedWPApplication;
/**
 * @brief If the event is recent this checks the event for touches and
 *        if the touch wasn't canceled it will reset the idle timer.
 */
+ (void)resetIdleTimerFromEvent:(nonnull UIEvent *)event;

/// get the date for beta library expiration
+ (nullable NSDate *)getLibraryExpirationDate;

/// Set the expiration date for a library; can only be set once.
/// @param date the date to set, or nil to just retrieve what has already been set
/// @return the finalized date set for library expiration
+ (nullable NSDate *)trySetLibraryExpirationDate:(nullable NSDate *)date;
@end
