//
//  WPAPITrackMyHealth.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/23/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPITrackMyHealth : NSObject

/**
 * @brief Determines whether the Track My Health activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForTrackMyHealth DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the Track My Health view controller instance for the current user to be pushed on to the navigation stack.
 * @returns The Track My Health viewcontroller. Returns nil if there is no logged in user or if the patient cannot access Track My Health.
 */
+ (nullable UIViewController *)getTrackMyHealthController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
