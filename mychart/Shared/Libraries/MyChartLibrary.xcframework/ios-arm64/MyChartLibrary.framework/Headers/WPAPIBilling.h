//
//  WPAPIBilling.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/20/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIBilling : NSObject

/**
 * @brief Determine whether web/mobile optimized billing is available
 * @returns whether Web Billing is available.
 */
+ (BOOL)isWebBillingAvailable DEPRECATED_MSG_ATTRIBUTE("Use the shouldPresentViewControllerModally API in WPAPIActivity in order to check the availability of MO features. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the web billing view controller instance to be presented modally for the current user.
 * @warning Make sure to present the view controller modally.
 * @returns The web billing viewcontroller. Returns nil if there is no logged in user or if the patient cannot access MO billing.
 */
+ (nullable UIViewController *)getModalWebBillingController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Determines whether the billing account list activity can be accessed by the current user.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForBillingAccountList DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Determines whether the billing estimates activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForBillingEstimates DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the billing account list view controller instance for the current user to be pushed on to the navigation stack.
 * @returns The billing account list viewcontroller. Returns nil if there is no logged in user or if the user cannot access billing accounts.
 */
+ (nullable UIViewController *)getBillingAccountListController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the billing estimates view controller instance for the current patient to be pushed on to the navigation stack.
 * @returns The billing estimates viewcontroller. Returns nil if there is no logged in user or if the user cannot access billing estimates.
 */
+ (nullable UIViewController *)getBillingEstimatesController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");


@end
