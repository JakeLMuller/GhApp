//
//  WPAPISpringboard.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/19/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//


__attribute__((deprecated("This API class will soon no longer be available once the new home page is available in your Epic version.")))
@interface WPAPISpringboard : NSObject

/**
 * @brief DEPRECATED: Determines whether the springboard can be accessed by the current user.
 * @return Access result.
 * @deprecated This is replaced by WPAPIHomepage.accessResultForHomepage and will soon no longer be available once the new home page is available in your Epic version.
 */
+ (WPAPIAccessResult)accessResultForSpringboard;

/**
 * @brief DEPRECATED: Provides the springboard view controller instance to be pushed on to the navigation stack.
 * @warning The springboard will always open for the first patient regardless of the currently active patient.
 * @return The springboard viewcontroller. Returns nil if there is no logged in user or if the user cannot access the springboard.
 * @deprecated This is replaced by WPAPIHomepage.getHomepageControllerThatManagesNavbarVisibility and will soon no longer be available once the new home page is available in your Epic version.
 */
+ (nullable UIViewController *)getSpringboardController;

@end

