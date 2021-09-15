//
//  WPAPIDocumentCenter.h
//  MyChart
//
//  Created by Gary Zhuo on 1/21/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIDocumentCenter : NSObject

/**
 * @brief Determines whether the Document Center activity can be accessed by the current patient.
 * @return Access result
 */
+ (WPAPIAccessResult) accessResultForDocumentCenter DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the DocumentCenter view controller instance for the current user to be presented modally.
 * @warning Make sure this view controller is presented modally.
 * @return a view controller used to launch the MO Document Center activity
 */
+ (nullable UIViewController *) getModalDocumentCenterController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
