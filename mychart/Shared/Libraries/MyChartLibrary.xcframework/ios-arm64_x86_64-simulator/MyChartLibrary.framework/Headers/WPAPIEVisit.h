//
//  WPAPIEVisit.h
//  MyChart
//
//  Created by Kyle Wu on 8/3/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIEVisit : NSObject

/**
 * @brief Determines whether the E-Visit activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForEvisit DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");


/**
 * @brief Provides the E-Visit view controller instance for the current user to be presented modally.
 * @warning Make sure this view controller is presented modally.
 * @returns The E-Visit viewcontroller. Returns nil if there is no logged in user or if the patient cannot access E-Visit.
 */
+ (nullable UIViewController *)getModalEVisitController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
