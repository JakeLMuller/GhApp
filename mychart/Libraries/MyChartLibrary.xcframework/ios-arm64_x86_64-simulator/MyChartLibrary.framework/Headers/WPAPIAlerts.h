//
//  WPAPIAlerts.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/2/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@protocol WPAPIAlertsDelegate;

/**
 @brief This notification is posted whenever the alerts for a patient have been invalidated. Use the API getPatientFromAlertsInvalidatedNotification: to retrieve the patient whos alerts are invalidated and then use getAlertsForPatient: to retrieve the new alerts.
 */
extern  NSString * _Nonnull  const WPAPINotificationPatientAlertsInvalidated;

/**
 * @enum WPAPIAlertsErrorCode
 * @brief Alerts API error codes
 *
 * @constant WPAPIAlertsErrorCodeAlertsNotAccessible     The patient cannot access alerts
 * @constant WPAPIAlertsErrorCodeRequestServerError      Server error
 */
typedef NS_ENUM(NSInteger, WPAPIAlertsErrorCode) {
    WPAPIAlertsErrorCodeAlertsNotAccessible = 1,
    WPAPIAlertsErrorCodeRequesServerError = 2
};

/**
 * @brief Error domain for the error returned in the WPAPIAlertsDelegate method
 */
extern  NSString * _Nonnull const WPAPIAlertsErrorDomain;



/**
 * @brief Interface for managing patient alerts.
 * @warning This framework is no longer being maintained following the release of the health feed, but has no immediate plans for deprecation.
 */
@interface WPAPIAlerts : NSObject

/**
 * @brief Determines whether alerts for a patient can be accessed.
 * @param patient The patient who's alerts need to be accessed.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForAlertsForPatient:(nonnull id <IWPPatient>)patient;

/**
 * @brief Retrieves the alerts for a particular patient. The delegate method didReceiveAlerts: is called when the alerts are available. The delegate method failedToReceiveAlertsForPatient:withError: is called if the patient's alerts are not retrieved or cannot be accessed.
 * @param patient The patient for which the alerts are needed.
 * @param delegate Delegate to get result of this call. The delegate method didReceiveAlerts: or failedToReceiveAlertsForPatient:withError: will be called corresponding to this.
 * @warning Use the method accessResultForAlertsForPatient: to determine whether you should call getAlerts for a particular patient.
 */
+ (void)getAlertsForPatient:(nonnull id <IWPPatient>)patient withDelegate:(nonnull id <WPAPIAlertsDelegate>)delegate;

/**
 * @brief Retrieves the alerts for a list of patients. The delegate method didReceiveAlerts: is called when the alerts are available. The delegate method failedToReceiveAlertsForPatient:withError: is called if a particular patient's alerts are not retrieved or cannot be accessed.
 * @param patients An array of patients for which the alerts are needed.
 * @param delegate Delegate to get result of this call. The delegate method didReceiveAlerts: or failedToReceiveAlertsForPatient:withError: will be called corresponding to this.
 * @warning Use the method accessResultForAlertsForPatient: to determine whether you should call getAlerts for a particular patient.
 */
+ (void)getAlertsForPatients:(nonnull NSArray <id <IWPPatient>>*)patients withDelegate:(nonnull id <WPAPIAlertsDelegate>)delegate;

/**
 * @brief Get the view controller for the MyChart activity associated with the alert. 
 * @param alert The alert object for which the view controller is to retrieved.
 * @returns The view controller. This is nil if an alert is not associated with a MyChart activity or if the current patient cannot access the activity.
 * @warning If you intend to present an activity view controller for a patient other than the current patient, make sure to set the current patient using setCurrentPatient: in WPAPIPatientManager.  Also use shouldPresentAlertActivityController to determine present or push.
 */
+ (nullable UIViewController *)activityControllerForAlert:(nonnull id <IWPAlert>)alert;

/**
 * @brief Determines if the view controller for the MyChart activity associated with the alert should be presented or pushed
 * @param alert The alert object for which the view controller was retrieved.
 * @returns True if the view controller from activityControllerForAlert for an alert should be presented
 * @warning If this returns true, present the view controller instead of pushing, else navigation may break.
 */
+ (BOOL)shouldPresentAlertActivityController:(nonnull id <IWPAlert>)alert;

/**
 * @brief Get the patient associated with the alerts invalidated notification.
 * @param notification The notification specified by the name WPAPINotificationPatientAlertsInvalidated.
 * @returns The patient whos alerts are invalidated. This is nil if the notification passed in is incorrect.
 */
+ (nullable id <IWPPatient>)getPatientFromAlertsInvalidatedNotification:(nonnull NSNotification *) notification;

@end



/**
 * @brief Delegate protocol for managing patient alerts.
 */
@protocol WPAPIAlertsDelegate <NSObject>

@required

/**
 * @brief Alerts obtained from the server. Called as a return for the method getAlertsForPatients:withDelegate:
 * @param alerts Array of <IWPAlert> objects
 */
- (void) didReceiveAlerts:(nullable NSArray <id <IWPAlert>>*)alerts;

@optional

/**
 * @brief Called when an error occurs with the alerts request.
 * @param patient The patient for which the error occured.
 * @param error Object representing the error.
 */
- (void) failedToReceiveAlertsForPatient:(nonnull id <IWPPatient>)patient withError:(nullable NSError*)error;

@end

