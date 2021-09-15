//
//  WPAPIQuestionnaires.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/23/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//



@interface WPAPIQuestionnaires : NSObject

/**
 * @returns Corresponding MyChart Now feature name for the questionnaires activity
 */
@property (class, nonatomic, readonly, nonnull) NSString* myChartNowFeatureName DEPRECATED_MSG_ATTRIBUTE("Use WPAPIMyChartNow to load feature names for MyChart Now activities. This property will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Determines whether the questionnaires activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForQuestionnaires DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the questionnaires view controller instance for the current user to be presented modally.
 * @warning Make sure this view controller is presented modally.
 * @returns The questionnaires viewcontroller. Returns nil if there is no logged in user or if the patient cannot access questionnaires.
 */
+ (nullable UIViewController *)getModalQuestionnairesController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
