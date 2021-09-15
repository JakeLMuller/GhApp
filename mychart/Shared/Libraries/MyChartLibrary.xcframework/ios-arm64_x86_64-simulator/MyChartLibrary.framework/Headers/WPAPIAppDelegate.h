//
//  WPAPIAppDelegate.h
//  MyChart
//
//  Created by Matthew Flatau on 9/10/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@import UserNotifications;

/*!
 * @brief While not a true UIApplicationDelegate this class provides hooks that
 * your own app delegate must call into for Track My Health HealthKit integration
 * and URLs to work correctly.
 */
@interface WPAPIAppDelegate : NSObject

/*!
 * @brief Call this when the application is first launched, among other things sets up HealthKit
 * services and performs an initial sync if anything was not synced while in the background.
 *
 * @param application   The application
 * @param launchOptions Dictionary of launch options that were received when this app was launched
 */
+ (void)application:(nonnull UIApplication *)application didFinishLaunchingWithOptions:(nullable NSDictionary *)launchOptions;


/*!
 * @brief Handles a given URL launching activities as necessary.
 *
 * @param application   The application
 * @param url           The URL to handle
 * @return Yes if the URL was handled
 */
+ (BOOL)application:(nonnull UIApplication *)app openURL:(nonnull NSURL *)url options:(nullable NSDictionary <UIApplicationOpenURLOptionsKey, id> *)options;

#pragma mark - Notifications
/*!
 * @brief Call back for registering for remote notifications. Should be called by similarly named function.
 *
 * @param application   The application
 * @param deviceToken   Token returned by matching UIAppDelegate function
 */
+ (void)application:(nonnull UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(nonnull NSData *)deviceToken;

/*!
 * @brief Call back for failing to register for remote notifications. Should be called by similarly named function.
 *
 * @param application   The application
 * @param deviceToken   Token registration error from matching UIAppDelegate function
 */
+ (void)application:(nonnull UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(nullable NSError *)error;

/*!
 * @brief Call back for receiving a notification when the app is in foreground. Should be called by similarly named function.
 * Your implementation of UNUserNotificationCenterDelegate.willPresentNotification should call that completionHandler after calling this function.
 *
 * @param center   The shared user notification center object that received the notification
 * @param notification   The notification
 */
+ (void)userNotificationCenter:(nonnull UNUserNotificationCenter *)center willPresentNotification:(nonnull UNNotification *)notification;

/*!
 * @brief Call back for receiving a notification when the app is in foreground. Should be called by similarly named function.
 * If a completionHandler is passed in, the notification will be displayed with a UNNotificationPresentationOptionAlert style
 *
 * @param center   The shared user notification center object that received the notification
 * @param notification   The notification
 * @param completionHandler The block to execute with the presentation option for the notification
 */
+ (void)userNotificationCenter:(nonnull UNUserNotificationCenter *)center willPresentNotification:(nonnull UNNotification *)notification withCompletionHandler:(void (^)(UNNotificationPresentationOptions))completionHandler;

/*!
 * @brief Call back for when a user responds to a notification action. Should be called by similarly named function.
 *
 * @param center   The shared user notification center object that received the notification
 * @param response   The user’s response to the notification.
 * @param completionHandler The block to execute with the presentation option for the notification
 */
+ (void)userNotificationCenter:(nonnull UNUserNotificationCenter *)center didReceiveNotificationResponse:(nonnull UNNotificationResponse *)response withCompletionHandler:(void(^_Nullable)(void))completionHandler;

@end
