//
//  WPAPIEducation.h
//  MyChart
//
//  Created by Amit Chowdhary on 8/1/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//


@interface WPAPIEducation : NSObject

/**
 * @returns Corresponding MyChart Now feature name for the Education activity
 */
@property (class, nonatomic, readonly, nonnull) NSString* myChartNowFeatureName DEPRECATED_MSG_ATTRIBUTE("Use WPAPIMyChartNow to load feature names for MyChart Now activities. This property will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Determines whether the Education activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForEducation DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the Education view controller instance for the current user to be pushed on to the navigation stack.
 * @returns The Education viewcontroller. Returns nil if there is no logged in user or if the patient cannot access Education.
 */
+ (nullable UIViewController *)getEducationController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
