//
//  WPUtil_AppDelegate.h
//  MyChart
//
//  Created by Matthew Flatau on 9/9/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UserNotifications;

@class WPServer;

@interface WPUtil_AppDelegate : NSObject

/*!
 * @brief Provides a shared hook to call when the app delegate didFinishLaunchingWithOptions
 * if called. Is shared by WPAppDelegate and the library functions.
 */
+ (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

/*!
 * @brief Provides a shared hook to handle URL notifications. Posts an Org selection notification
 * if appropriate. Is shared by WPAppDelegate and the library functions.
 */
+ (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey, id> *)options;

#pragma mark - Notifications
/*!
 * @brief Provides a shared hook to handle registering for push notifications.
 *
 * @param application - The current application
 * @param deviceToken - The token received by the UIAppDelegate's didRegisterForRemoteNotificationsWithDeviceToken
 */
+ (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;

+ (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;

+ (void)userNotificationCenter:(UNUserNotificationCenter *)center willPresentNotification:(UNNotification *)notification withCompletionHandler:(void (^)(UNNotificationPresentationOptions))completionHandler;

+ (void)userNotificationCenter:(UNUserNotificationCenter *)center didReceiveNotificationResponse:(UNNotificationResponse *)response withCompletionHandler:(void(^)(void))completionHandler;

+ (void)registerForNotificationsForApplication:(UIApplication *)application;


/*!
 * @brief Create a notification to be display in-app with the provided payload
 *
 * @param userInfo  payload
 * @return YES if it pertains to the current organization, NO otherwise
 */
+ (void) createInAppNotificationWithPayload:(NSDictionary*)userInfo forCurrentOrg:(BOOL) currentOrg;

/*!
 * @brief Selects the organization from URL
 */
+ (void)doOrgSelect:(NSURL *)lowerCaseURL;

+ (void)checkPushNotificationStatusForServer:(WPServer *)server;

/*!
 * @brief Helper to get the organization ID from the userInfo dictionary associated with a notification
 *
 * @param userInfo  the userInfo dictionary associated with a notification
 * @return the organization ID
 */
+ (NSString *) getFullOrgIDWithUserInfo:(NSDictionary *)userInfo;

/// Registers all framework components
+ (void)registerComponentAPIs;


/// Uses a deep link to resolve the correct organization that should be shown in ther preferred orgs upon launching the app
/// @param launchServerID the WPServer ID
/// @param notificationLock Whether, once the org screen is shown, paging away from that screen will result in a warning dialog
+ (void)getLaunchServerAndSelectOrg:(NSString *)launchServerID withNotificationLock:(BOOL)notificationLock;

/// Creates with the specified information where, if the current organization param is true, tapping ok will notify the application that the user has received this push notification pre-login and accepted this message
+ (void) createInAppNotificationWithMessage:(NSString*) message andTitle:(NSString*) title fullOrgId:(NSString*)fullOrgId forCurrentOrg:(BOOL)isForCurrentOrg;

@end
