//
//  WPAPIGoals.h
//  MyChart
//
//  Created by Matthew Flatau on 3/10/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@protocol WPAPIGoalsDelegate;


@interface WPAPIGoals : NSObject

/*!
 * @brief Determines whether the goals activity can be accessed by the current user.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForGoals;

/*!
 * @brief Asynchronously retrieve the goals controller. This controller is intended to be
 *        displayed within a container view but can be launched without one.
 * @param delegate - delegate used to retrieve controller or error
 */
+ (void)getGoalsControllerWithDelegate:(nonnull id <WPAPIGoalsDelegate>)delegate;

@end


#pragma mark -


@protocol WPAPIGoalsDelegate <NSObject>

/*!
 * @brief Callback when the goals controller was successfully generated.
 * @param careTeamController
 */
- (void)didGetGoalsController:(nonnull UIViewController *)goalsController;

@optional
/*!
 * @brief Callback when the goals controller could not be generated. This could be because
 *        the patient does not have access or could be because they have noone in their care team.
 * @param error - Error with error codes defined in WPAPIRequestControllerErrorCodes
 */
- (void)didFailToGetGoalsControllerWithError:(nonnull NSError *)error;

@end
