//
//  WPAPIAccountSettings.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/20/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIAccountSettings : NSObject

/**
 * @brief Determines whether the account settings activity can be accessed by the current user.
 * @return Access result.
 */
+ (WPAPIAccessResult)accessResultForAccountSettings DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the account settings view controller instance to be pushed on to the navigation stack.
 * @return The account settings viewcontroller. Returns nil if there is no logged in user or if the current user cannot access account settings.
 */
+ (nullable UIViewController *)getAccountSettingsController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Toggles Push Notifications on or off
 * @param delegate – delegate to handle the result of Push Notifications toggling
 * @param enable – YES if push notifications need to be enabled, NO otherwise
 */
+ (void)setPushNotificationsStatusWithDelegate:(nonnull id<WPAPIPushNotificationsDelegate>)delegate enable:(BOOL)enable;

/**
 * @brief Checks whether Push Notifications are enabled or not
 * @param delegate – delegate to handle the result of getting the Push Notifications status
 */
+ (void)getPushNotificationsStatusWithDelegate:(nonnull id<WPAPIPushNotificationsDelegate>)delegate;

@end
