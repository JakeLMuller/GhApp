//
//  WPAPILinkMyAccounts.h
//  MyChart
//
//  Created by David Huntsman on 1/07/20.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPILinkMyAccounts : NSObject

/**
 * @brief Determines whether the Link My Accounts activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForLinkMyAccounts DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the Link My Accounts view controller instance for the current user to be pushed on to the navigation stack.
 * @returns The Link My Accounts viewcontroller. Returns nil if there is no logged in user or if the patient cannot access Link My Accounts.
 */
+ (nullable UIViewController *)getLinkMyAccountsController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
