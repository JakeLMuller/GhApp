//
//  WPAPIMedications.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/23/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIMedications : NSObject

/**
 * @returns Corresponding MyChart Now feature name for the medications activity
 */
@property (class, nonatomic, readonly, nonnull) NSString* myChartNowFeatureName DEPRECATED_MSG_ATTRIBUTE("Use WPAPIMyChartNow to load feature names for MyChart Now activities. This property will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Determines whether the medications activity can be accessed by the current patient.
 * @return Access result.
 */
+ (WPAPIAccessResult)accessResultForMedications DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the medications view controller instance for the current user.
 *        If the mobile optimized web medications functionality is available (see the isWebMedicationsAvailable API),
 *        then the view controller returned should be presented modally; otherwise it should be pushed on to the navigation stack.
 * @return The medications view controller or nil if access is not allowed
 */
+ (nullable UIViewController *)getMedicationsController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Determines whether the mobile optimized web medications activity is available
 * @return true if the mobile optimized web medications activity is available, false otherwise
 */
+ (BOOL)isWebMedicationsAvailable DEPRECATED_MSG_ATTRIBUTE("Use the shouldPresentViewControllerModally API in WPAPIActivity in order to check the availability of MO features. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");
@end
