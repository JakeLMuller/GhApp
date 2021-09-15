//
//  WPAPISymptomChecker.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 5/18/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPISymptomChecker : NSObject

/**
 * @brief Determines whether the Symptom Checker activity can be accessed by the current patient
 * @returns an access result indicating whether the activity can be accessed
 */
+ (WPAPIAccessResult) accessResultForSymptomChecker DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Create a view ontroller to display the mobile optimized symptom checker activity
 * @returns a view controller used to launch the MO symptom checker activity
 */
+ (nullable UIViewController *)getSymptomCheckerController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
