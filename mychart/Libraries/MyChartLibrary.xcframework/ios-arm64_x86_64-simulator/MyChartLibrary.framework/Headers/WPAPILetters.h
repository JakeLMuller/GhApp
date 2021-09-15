//
//  WPAPILetters.h
//  MyChart
//
//  Created by Zac Ling on 4/24/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPILetters : NSObject

/**
 * @brief Determines whether the letters activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForLetters DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the letters view controller instance for the current user to be presented modally.
 * @warning Make sure this view controller is presented modally.
 * @returns The letters view controller. Returns nil if there is no logged in user or if the patient cannot access letters.
 */
+ (nullable UIViewController *)getModalLettersController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
