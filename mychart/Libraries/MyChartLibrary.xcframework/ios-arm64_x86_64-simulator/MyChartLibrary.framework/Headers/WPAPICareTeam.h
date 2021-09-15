//
//  WPAPICareTeam.h
//  MyChart
//
//  Created by Matthew Flatau on 3/10/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@protocol WPAPICareTeamDelegate;

/**
 * @brief The name of the notification that is posted whenever the care team providers' status has been changed.
 * Callers should observe this notification and reload the care team widget to reflect the new status
 */
extern NSString *_Nonnull const WPAPINotificationCareTeamWidgetNeedReloaded;

@interface WPAPICareTeam : NSObject

/**
 * @returns Corresponding MyChart Now feature name for the care team widget
 */
@property (class, nonatomic, readonly, nonnull) NSString* myChartNowFeatureName DEPRECATED_MSG_ATTRIBUTE("Use WPAPIMyChartNow to load feature names for MyChart Now activities. This property will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/*!
 * @brief Determines whether the care team activity can be accessed by the current user.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForCareTeam;

/*!
 * @brief Asynchronously retrieve the care team controller. This controller is intended
 *        to be displayed within a container view but can be launched without one.
 * @param delegate - delegate used to retrieve controller or error
 */
+ (void)getCareTeamControllerWithDelegate:(nonnull id <WPAPICareTeamDelegate>)delegate;

@end


#pragma mark -


@protocol WPAPICareTeamDelegate <NSObject>

/*!
 * @brief Callback when the care team controller was successfully generated.
 * @param careTeamController
 */
- (void)didGetCareTeamController:(nonnull UIViewController *)careTeamController;

@optional
/*!
 * @brief Callback when the care team controller could not be generated. This could be because 
 *        the patient does not have access or could be because they have noone in their care team.
 * @param error - Error with error codes defined in WPAPIRequestControllerErrorCodes
 */
- (void)didFailToGetCareTeamWithError:(nonnull NSError *)error;

@end
