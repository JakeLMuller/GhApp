//
//  WPAPIInfectionControl.h
//  MyChart
//
//  Created by David Schanker on 5/3/20.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//



@interface WPAPIInfectionControl : NSObject

/**
 * @brief Determines whether or not the Infection Control (COVID status) fragment can be accessed in the current context (i.e.
 * the current patient and user).
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForCovidStatus DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the Covid Status view controller instance for the current user to be pushed on to the navigation stack.
 * @returns The Covid Status viewcontroller. Returns nil if there is no logged in user or if the patient cannot access Covid Status.
 */
+ (nullable UIViewController *)getCovidStatusController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
