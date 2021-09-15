//
//  WPAppointmentLocationManager.h
//  MyChart
//
//  Created by Joe Soultanis on 2/3/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//
#import "WPAppointment.h"
#import "WPMonitoredForArrivalAppointment.h"

// Enum for "Hello Patient" status
typedef NS_ENUM(NSInteger, WPAppointmentArrivalFeatureStatus) {
    WPAppointmentArrivalFeatureStatusDisabled = 1,
    WPAppointmentArrivalFeatureStatusOnboardingNotShown = 2,
    WPAppointmentArrivalFeatureStatusMissingSetupRequirement = 3,
    WPAppointmentArrivalFeatureStatusEnabled = 4
};

@class WPMonitoredForArrivalAppointment;

@protocol WPMonitoredAppointmentUpdateDelegate <NSObject>

@required
- (void)didFinishUpdateWithMonitoredAppointment:(WPMonitoredForArrivalAppointment *)appointment;

@end

@protocol IWPAppointmentArrivalCheckInDelegate <NSObject>

@required
- (void)didFinishCheckInWorkflowWithStatus:(WPAPIAppointmentArrivalStatus)status;

@required
- (void)didCancelCheckInWorkflow;

@end


/**
 * @brief A manager responsible for making future appointment web service requests and updating the monitored appointment regions inside WPLocationManager.
 */
@interface WPAppointmentLocationManager : NSObject <WPArrivalDelegate>

@property (nonatomic, strong) WPRequest *request;

/**
 * This stores a reference to userInfo from a notification that the user arrived to an appointment. Will be cleared out once consumed in updateRegion.
 */
@property (nonatomic, strong) NSDictionary *userInfo;

@property (nonatomic, weak) id <WPMonitoredAppointmentUpdateDelegate> updateDelegate;

//returns the instance of this class, which is a singleton
+ (instancetype)sharedInstance;

/**
* Entry point from throughout the app for the flow to update the monitored appointment.
*/
- (void)updateRegion;

/**
* Called on logout to clean up state of singleton
*/
- (void)cleanupOnLogout;

/**
 * Called when the user marks themself as not here yet. Schedules the appointment to be reprompted after a time
 */
- (void)snoozeArrival:(NSDictionary *)userInfo;
    
/**
 * Called when a user selects that they no longer want to be reminded about an appointment
 */
- (void)cancelSnoozingForPatient:(NSInteger)patIndex andCSN:CSN;

/**
* Prompts the user about hello patient
 @param userInfo Dictionary of information about the visit that is being prompted
 */
+ (void)promptUserAfterArrival:(NSDictionary *)userInfo;

/**
* Get appointment arrival view controller to be displayed to user once they've arrived to appt and logged in. This view controller will not support appt snoozing
*
* @param CSN CSN of appt for which they've arrived.
* @param dateTime Date/time of appt for which they've arrived.
* @param index Index of patient
* @param initiatedWithBeacons Whether the workflow was initiated with Bluetooth beacons.
* @param initiatedFromUser Whether the workflow was initiated with locationless self-arrival.
* @return The view controller
*/
+ (UIViewController *)getArrivalViewControllerWithCSN:(NSString *)CSN appointmentTime:(NSDate *)dateTime andPatientIndex:(NSInteger)index andInitiatedWithBeacons:(BOOL)initiatedWithBeacons andInitiatedFromUser:(BOOL)initiatedFromUser;


/**
* Get appointment arrival view controller to be displayed to user once they've arrived to appt and logged in. This view controller supports appt snoozing
*
* @param CSN CSN of appt for which they've arrived.
* @param dateTime Date/time of appt for which they've arrived.
* @param index Index of patient
* @param initiatedWithBeacons Whether the workflow was initiated with Bluetooth beacons.
* @param enableSnooze Whether appointment snoozing should be enabled
* @param initiatedFromSnooze Whether the workflow was initiated from a snooze
* @param arrivedApptOrganizationID The organization ID for the appt
* @param firstUserID The ID of the user associated with the appt
* @return The view controller
*/
+ (UIViewController *)getArrivalViewControllerWithCSN:(NSString *)CSN appointmentTime:(NSDate *)dateTime andPatientIndex:(NSInteger)index andInitiatedWithBeacons:(BOOL)initiatedWithBeacons andEnableSnooze:(BOOL)enableSnooze andInitiatedFromSnooze:(BOOL)initiatedFromSnooze  andInitiatedFromUser:(BOOL)initiatedFromUser andOrgID:(NSString*)arrivedApptOrganizationID andFirstUserID:(NSString*)firstUserID;

/**
 * Cancels the scheduled local notification for snooze
 */
+ (void)cancelScheduledSnoozeArrivalLocalNotification;

/**
 * Display alert indicating check in failed.
 */
- (void)showCheckInFailedAlert;

/**
* Get alert displayed to user if they arrive for an appointment and are on the login screen
*
* @return The alert controller
*/
+ (UIAlertController *)getArrivalAlertForLoginScreen;

/**
* Show an alert to the patient to begin the arrival workflow.
*
* @param userInfo userInfo dictionary from the notification
*/
+ (void)showAppointmentArrivalInAppNotificationWithPayload:(NSDictionary*)userInfo;
    

/**
 * Adds an appt csn to the appt blocklist
 * @param patIndex Patient index for whom to add the appt
 * @param apptCSN Appt to blocklist
 */
- (void)addBlocklistedApptForPatient:(NSInteger)patIndex andCSN:(NSString *)apptCSN;


/**
 * Launch e-Checkin workflow for given CSN
 * @param csn The CSN of the appt they've arrived for.
 * @param index The index of the patient
 */
+ (void)launchECheckInWithCSN:(NSString *)CSN forPatientIndex:(NSInteger)patientIndex;

/**
 * Get the current status of the Appointment Arrival feature
 *
 * @return Enum value describing the current status of the Appointment Arrival feature
 */
+ (WPAppointmentArrivalFeatureStatus)getAppointmentArrivalFeatureStatus;

/**
 * Set a delegate for callback when the "Hello Patient" appointment check-in workflow is finished/canceled
 *
 * @param delegate Delegate for callbacks
 */
+ (void) setAppointmentArrivalCheckInDelegate:(id <IWPAppointmentArrivalCheckInDelegate>) delegate;

/**
 * Get the current delegate for when the "Hello Patient" appointment check-in workflow is finished/canceled
 *
 * @return Current delegate, if one has been set
 */
+ (id <IWPAppointmentArrivalCheckInDelegate>) appointmentArrivalCheckInDelegate;

/**
 * Remove the current delegate for when the "Hello Patient" appointment check-in workflow is finished/canceled
 */
+ (void) removeAppointmentArrivalCheckInDelegate;


@end



