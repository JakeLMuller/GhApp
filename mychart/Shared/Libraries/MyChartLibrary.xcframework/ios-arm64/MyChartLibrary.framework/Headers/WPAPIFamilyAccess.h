//
//  WPAPIFamilyAccess.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 11/1/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIFamilyAccess : NSObject

/**
 * @brief Determines whether the Family Access activity can be accessed.
 *        This activity can not be accessed if logged in user is a non-patient
 *        proxy or if they do not have security to send proxy invites.
 * @return the access result.
 */
+ (WPAPIAccessResult)accessResultForFamilyAccess DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Create a view ontroller to display the mobile optimized Family Access activity
 *        for the logged in user
 * @warning Make sure this view controller is presented modally.
 * @return a view controller used to launch the MO symptom checker activity
 */
+ (nullable UIViewController *)getModalFamilyAccessController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
