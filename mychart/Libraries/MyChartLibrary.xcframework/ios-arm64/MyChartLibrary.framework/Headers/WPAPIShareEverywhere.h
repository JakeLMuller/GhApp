//
//  WPAPIShareEverywhere.h
//  MyChart
//
//  Created by Mike Epley on 10/17/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIShareEverywhere : NSObject

/**
 * @brief Determines whether or not the Share Everywhere activity can be accessed in the current context (i.e. the current patient and user).
 *
 * @return Access result.
 */
+ (WPAPIAccessResult)accessResultForShareEverywhere DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides an instance of the Share Everywhere view controller within the current context (i.e. the current patient and user), to be pushed on to the navigation stack.
 *
 * @return An instance of the Share Everywhere view controller. Returns nil if there is no logged in user or if Share Everywhere cannot be accessed in the current context.
 */
+ (nullable UIViewController *)getShareEverywhereController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
