//
//  WPAPIPremiumBilling.h
//  MyChart
//
//  Created by Tim Knutson on 10/1/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIPremiumBilling : NSObject

/**
 * @brief Determines whether the Premium Billing activity can be accessed by the current patient.
 * @returns Access result
 */
+ (WPAPIAccessResult) accessResultForPremiumBilling DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the letters view controller instance for the current user to be presented modally.
 * @warning Make sure this view controller is presented modally.
 * @returns The Premium Billing view controller. Returns nil if there is no logged in user or if the patient cannot access Premium Billing.
 */
+ (nullable UIViewController *) getModalPremiumBillingController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
