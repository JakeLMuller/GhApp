//
//  WPAPIToDo.h
//  MyChart
//
//  Created by Jessica Perng on 5/11/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIToDo : NSObject

/**
 * @brief Determines whether the To Do activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForToDo DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the To Do view controller instance for the current user to be pushed on to the navigation stack.
 * @returns The To Do viewcontroller. Returns nil if there is no logged in user or if the patient cannot access To Do.
 */
+ (nullable UIViewController *)getToDoController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
