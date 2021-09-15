//
//  WPAPIPersonalize.h
//  MyChart
//
//  Created by Mike Epley on 9/14/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

/**
 API to access the Personalize activity, which allows the user to manage nicknames, colors, and photos for the people they have access to.
 */
@interface WPAPIPersonalize : NSObject

/**
 Returns an access result indicating whether or not the Personalize activity can be accessed by the current user.

 @return An access result indicating access to the Personalize activity.
 */
+ (WPAPIAccessResult)accessResultForPersonalize DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 Returns a view controller for the Personalize activity, which let's the user personalize colors, nicknames, and photos for all of the people they can access (including the user themselves. This view controller should be pushed onto the navigation stack of an existing UINavigationController or wrapped in a new one before being presented.

 @return An instance of a view controller for the Personalize activity
 */
+ (nullable UIViewController *)getPersonalizeController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
