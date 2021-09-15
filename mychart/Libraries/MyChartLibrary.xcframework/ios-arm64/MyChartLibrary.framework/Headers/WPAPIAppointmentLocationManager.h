//
//  WPAPIAppointmentLocationManager.h
//  MyChart
//
//  Created by Joe Soultanis on 4/11/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Name of the notification posted when the status of the Appointment Arrival feature changes
 */
extern NSString* _Nonnull const WPAPINotificationAppointmentArrivalSettingChanged;

@protocol WPAPIMonitoredAppointmentArrivalDelegate, WPAPIMonitoredAppointmentUpdateDelegate, WPAPIAppointmentArrivalCheckInDelegate;


@interface WPAPIAppointmentLocationManager : NSObject

/**
 * @brief Get the access result for the Appointment Arrival feature.
 * Here is an explanation of some of the commonly-returned values:
 *
 * WPAPIAccessResult.accessAllowed: the feature is ready to be used.  Note that this value can be returned even if a user has Bluetooth turned off at the device level,
 * in which case appointments utilizing Bluetooth beacons would not work.
 *
 * WPAPIAccessResult.missingAppPermissions: The user has turned the feature on, but has since turned off location services or permissions. The feature is not
 * available unless the user re-enables these.
 *
 * WPAPIAccessResult.userDisabledSetting: The user opted out of the feature.
 *
 * Any other return value should be considered to mean the feature is not available for this
 * user + environment + device combination.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForAppointmentMonitoring;

/**
 * @brief Registers a delegate to be notified when the device arrives at the location of the monitored appointment. If you do so, you will forfeit the default handling for this event supplied by the library, which is to display an alert dialog if the user has the app in the foreground, or a local notification otherwise.
 * @param delegate The delegate to register for this event.
 * @warning Do not deallocate this delegate if you still need it.
 */
+ (void)registerArrivalDelegate:(nonnull id <WPAPIMonitoredAppointmentArrivalDelegate>)delegate;


/**
 * @brief Call the Appointment Arrival framework to manually trigger an update loop that will look for the next valid upcoming appointment and begin monitoring that appointment for arrival. This method should be used in any custom activities containing logic that may require the app to recheck for the latest appointment (e.g. a custom springboard).
 * This method shows the Appointment Arrival onboarding activity if the user hasn't seen it before. This activity prompts  the user to turn on Location Services and permissions, as well as Bluetooth if your organization uses Bluetooth beacons for this functionality. Once these are enabled, the user can confirm to turn on the Appointment Arrival feature as a whole. The user can toggle this setting later from Account Settings or Appointment Details.
 * If you provide a delegate, the delegate method didFinishUpdateWithMonitoredAppointment will be called using the delegate. Otherwise, the update will happen with no callback.
 * Note that consecutive calls to this delegate may supply the same appointment. In addition, the appointment may be nil if no appointment is being monitored.
 * @param delegate The delegate to register for this event.
 * @warning Appointments with configuration that makes them unusable for the region monitoring system will not be used for determining the soonest upcoming appointment.
 */
+ (void)requestUpdateForMonitoredAppointmentWithDelegate:(nullable id <WPAPIMonitoredAppointmentUpdateDelegate>)delegate;

/**
 * @brief Returns the current appointment being monitored.
 * @returns The appointment object that is currently being monitored or nil if there is no appointment.
 */
+ (nullable id <IWPAppointment>)getCurrentMonitoredAppointment;

/**
 * Get the current status of the Appointment Arrival feature.
 * Here is an explanation of the returned values:
 *
 * WPAPIAppointmentArrivalFeatureStatusEnabled - the feature is completely turned on and appointments can be monitored for arrival.
 *
 * WPAPIAppointmentArrivalFeatureStatusOnboardingNotShown - the feature is currently turned off, and the Appointment Arrival onboarding has not been shown to the user yet.
 *
 * WPAPIAppointmentArrivalFeatureStatusMissingSetupRequirement - the feature has been enabled by the user, but is not fully functional yet due to missing setup (i.e. granting app permissions).
 *
 * WPAPIAppointmentArrivalFeatureStatusDisabled - the feature is completely turned off.
 *
 * @return Enum value describing the current status of the Appointment Arrival feature
 */
+ (WPAPIAppointmentArrivalFeatureStatus)getAppointmentArrivalFeatureStatus;

/**
 * Turn off the Appointment Arrival feature. This method will disable the feature but will not undo any existing setup (i.e. granting app permissions). When the setting has been changed, a WPAPINotificationAppointmentArrivalSettingChanged notification will be posted.
 */
+ (void)disableAppointmentArrivalFeature;

/**
 * Register a delegate for callback when the "Hello Patient" appointment check-in workflow is finished/canceled.
 *
 * @param delegate Delegate for callbacks
 */
+ (void)registerAppointmentArrivalCheckInDelegate: (id <WPAPIAppointmentArrivalCheckInDelegate> _Nonnull) delegate NS_SWIFT_NAME( registerAppointmentArrivalCheckInDelegate(delegate:));
/**
 * Remove the current delegate for when the "Hello Patient" appointment check-in workflow is finished/canceled.
 */
+ (void)unregisterAppointmentArrivalCheckInDelegate;

@end


/**
 * @brief Delegate protocol for responding to appointment arrival events.
 */
@protocol WPAPIMonitoredAppointmentArrivalDelegate <NSObject>

@required
/**
 * Callback upon patient arrival at a monitored appointment.
 * @param appointment The appointment for which the patient arrived.
 */
- (void)didArriveForMonitoredAppointment:(nonnull id <IWPAppointment>)appointment;

@end


/**
 * @brief Delegate protocol for responding to monitored appointment updates.
 */
@protocol WPAPIMonitoredAppointmentUpdateDelegate <NSObject>

@required
/**
 * Callback upon completion of updates for current monitored appointment.
 * @param appointment The appointment that is currently being monitored. Can be nil if no appointment is being monitored.
 */
- (void)didFinishUpdateWithMonitoredAppointment:(nullable id <IWPAppointment>)appointment;

@end

/**
 * @brief Delegate protocol used to notify a listener when the "Hello Patient" appointment check-in workflow is finished/canceled.
 */
@protocol WPAPIAppointmentArrivalCheckInDelegate <NSObject>

@required
/**
 * Callback upon completion of the appointment check-in workflow.
 * @param status Enum value describing the status of the appointment
 */
- (void)didFinishCheckInWorkflowWithStatus:(WPAPIAppointmentArrivalStatus)status;

@required
/**
 * Callback upon cancellation of the appointment check-in workflow.
 */
- (void)didCancelCheckInWorkflow;

@end


