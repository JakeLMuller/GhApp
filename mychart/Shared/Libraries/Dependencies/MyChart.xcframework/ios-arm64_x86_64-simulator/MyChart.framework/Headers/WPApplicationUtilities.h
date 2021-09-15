//
//  WPApplicationUtilities.h
//  MyChart
//
//  Created by Mohammed Rangwala on 10/19/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPApplicationUtilities : NSObject

/**
 * Get the name of this app (matches the category value)
 * @return The application name string
 */
+ (NSString *)getAppName;

/**
 * Get the display name of the app, i.e. MyChart.
 * @return The applciation display name string
 */
+ (NSString *)appDisplayName;

/**
 * Get the App Store ID for the app.
 * If no App Store ID is found, 382952264 will be returned, which is the ID of the standard MyChart app
 * @return The App Store ID
*/
+ (NSString *)appStoreID;

/*
 * @brief Returns if this application is a development or production build
 *        based on presence of embedded.mobileprovision and the value contained
 *        in it for aps-environment
 */
+ (BOOL)isSignedForDevelopmentPushNotifications;

// Returns true if Video is allowed in the app (used as an accessor to the preprocessor command #if VIDEO_ALLOWED
+ (BOOL) isVideoAllowed;

@end
