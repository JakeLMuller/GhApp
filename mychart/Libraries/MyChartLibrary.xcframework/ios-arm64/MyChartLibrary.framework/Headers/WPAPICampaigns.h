//
//  WPAPICampaigns.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 1/15/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//



/*!
 * @brief The name of the NSNotification that is posted whenever the campaigns view controller needs to be recreated.
 *        Callers should observe this notification and replace an existing campaigns view controller with a new instance.
 */
extern NSString * _Nonnull const WPAPINotificationCampaignsRefresh;

/*!
 * @brief Declares a delegate protocol for callers to implement to be notified whether the
 *        campaigns view controller was created.
 */
__attribute__((deprecated("This protocol will soon no longer be available once the new home page is available in your Epic version.")))
@protocol WPAPICreateCampaignsDelegate <NSObject>

/*!
 * @brief Callback when the campaigns controller was successfully generated.
 * @param campaignsController the campaigns view controller that was created
 */
- (void)didGetCampaignsController:(nonnull UIViewController *)campaignsController;

@optional
/*!
 * @brief Callback when the campaigns controller could not be generated. This could be because
 *        the patient does not have access or could be because they have no campaigns.
 * @param error Error with error codes defined in WPAPIRequestControllerErrorCodes
 */
- (void)didFailToGetCampaignsWithError:(nonnull NSError *)error;

@end

/*!
 * @brief Declares a delegate protocol for callers to implement to be notified of campaigns initiated events
 */
__attribute__((deprecated("This protocol will soon no longer be available once the new home page is available in your Epic version.")))
@protocol WPAPICampaignsEventDelegate <NSObject>

/*!
 * @brief Callback when all child campaign view controllers have been dismissed from the campaigns list.
 */
- (void)didRemoveAllCampaigns;
@end

__attribute__((deprecated("This API class will soon no longer be available once the new home page is available in your Epic version.")))
@interface WPAPICampaigns : NSObject

/*!
 * @brief Determines whether campaigns can be accessed by the current user.
 * @returns Access result.
 */

+ (WPAPIAccessResult)accessResultForCampaigns;

/*!
 * @brief Asynchronously retrieve the campaigns controller. This controller is intended
 *        to be displayed within a container view but can be launched without one.
 * @param delegate Delegate used to retrieve controller or error
 * @param view The parent view that will be hosting the campaigns view controller
 */
+ (void)getCampaignsControllerWithDelegate:(nonnull id <WPAPICreateCampaignsDelegate>)delegate parentView:(nonnull UIView *)view;

/*!
* @brief Sets up a listener for a campaigns view controller to listen for any campaigns initiated
* events
*
* @param campaignsController The campaigns view controller
* @param delegate Delegate used to listen to campaigns initiated events
*/
+ (void)setCampaignsEventDelegateForController:(nonnull UIViewController *)campaignsController delegate:(nonnull id <WPAPICampaignsEventDelegate>)delegate;

/*!
 * @brief Audits any campaigns that are currently in the view for the user. This method should be called whenever the
          visibility of individual campaigns may have changed due to user actions like scrolling.
 *
 * @param view Parent view to check visibility within
 */
+ (void)auditVisibleCampaignsForController:(nonnull UIViewController *)campaignsController inParentView:(nonnull UIView *)view;

/**
 * @brief Get the patient associated with the WPAPINotificationCampaignsRefresh notification.
 *
 * @param notification The notification specified by the name WPAPINotificationCampaignsRefresh.
 * @returns The patient whose campaigns need to be refreshed. This is nil if the notification passed in is incorrect.
 */
+ (nullable id <IWPPatient>)getPatientFromCampaignsRefreshNotification:(nonnull NSNotification *)notification;

@end
