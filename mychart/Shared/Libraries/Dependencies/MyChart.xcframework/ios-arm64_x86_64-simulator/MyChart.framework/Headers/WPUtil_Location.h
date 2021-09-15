//
//  WPUtil_Location.h
//  MyChart
//
//  Created by Joe Soultanis on 12/27/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPUtil_Location : NSObject

extern int const DEFAULT_NUM_DAYS;

/**
* Convert the region identifier to a JSON metadata dictionary.
*
* @param regionIdentifier Identifier of region to convert
* @return The JSON metadata dictionary
*/
+ (NSMutableDictionary *)changeRegionIdentifierStringToJSONDictionary:(NSString *)regionIdentifier;

/**
* Convert the JSON metadata dictionary to a region identifier.
*
* @param jsonDict The JSON metadata dictionary
* @return The region identifier
*/
+ (NSString *)changeJSONDictionaryToRegionIdentifierString:(NSMutableDictionary *)jsonDict;

/**
* Get whether this appointment will use geolocation-based appointment arrival.
* Note that this does not check patient security or device settings, only build for this appointment and department.
*
* @return YES if this appointment has the proper build for geolocation-based appointment arrival and will use it, otherwise NO
*/
+ (BOOL)willUseGeolocationAppointmentArrival: (WPAppointment * ) appointment;

/**
* Get whether this appointment will use Bluetooth beacon-based appointment arrival.
* Note that this does not check patient security or device settings, only build for this appointment and department.
*
* @return YES if this appointment has the proper build for Bluetooth beacon-based appointment arrival and will use it, otherwise NO
*/
+ (BOOL)willUseBluetoothBeaconAppointmentArrival: (WPAppointment * ) appointment;

/**
* Get whether this appointment will use Bluetooth beacon-based appointment arrival.
* Note that this does not check patient security or device settings, only build for this appointment and department.
*
* @return YES if this appointment has the proper build for Bluetooth beacon-based appointment arrival and will use it, otherwise NO
*/
+ (BOOL)willUseBluetoothBeaconAppointmentArrivalForMonitoredAppointment: (WPMonitoredForArrivalAppointment * ) appointment;

/**
 * Get whether this device supports Bluetooth.
 *
 * @return whether it supports Bluetooth
 */
+ (BOOL)isBluetoothSupportedOnDevice;

/**
* Get whether this user has necessary security for Appointment Arrival feature.
* This is the case if and only if one of the patients does.
*
* @return YES if has security, NO otherwise
*/
+ (BOOL)isAppointmentArrivalSecurityPresent;

/**
* Get whether this patient has necessary security for Appointment Arrival feature.
*
* @param patient The patient to check
* @return YES if has security, NO otherwise
*/
+ (BOOL)isAppointmentArrivalSecurityPresentForPatient:(WPPatientContext*) patient;

/**
* Get whether this appointment is currently being monitored by the Appointment Arrival framework.
*
* @param apptToCheck The appointment to check
* @return YES if being monitored, NO otherwise
*/
+ (BOOL)isMonitoringAppointment:(WPAppointment *)nextAppt;

/**
* Get whether this appointment is eligible to be monitored by the Appointment Arrival framework.
*
* @param apptToCheck The appointment to check
* @return YES if eligible, NO otherwise
*/
+ (BOOL)isEligibleAppointment:(WPAppointment *)appt;


/// Returns whether or not onboarding for Appointment Arrival has already been seen by the user.
+ (BOOL)hasSeenAppointmentArrivalOnboarding;

/// Sets onboarding for Appointment Arrival  as seen by the user.
+ (void)setAppointmentArrivalOnboardingSeen;

/**
* Get whether the appointment arrival feature has been enabled by the user.
* Note that, subsequently, the user could revoke certain permissions or setup, such that though this returns true, Appointment Arrival won't work
*
* @return YES if enabled by the user, NO otherwise
*/
+ (BOOL)isAppointmentArrivalFeatureEnabledByUser;

/**
* Set whether the appointment arrival feature has been enabled by the user.
*
* @param enabled whether it has been enabled
*/
+ (void)setAppointmentArrivalFeatureEnabledByUser:(BOOL) enabled;

/**
* Get whether the appointment arrival feature has the basic setup it needs to be able to work.
* Note that, despite this returning true, some appointments may still not work, namely those using Bluetooth beacons, if that setup isn't all in place.
*
* @return YES if enabled, NO otherwise
*/
+ (BOOL)isAppointmentArrivalBaseSetupEnabled;

/**
* Get whether "Always" location permissions have been requested before
*
* @return YES if requested before, NO otherwise
*/
+ (BOOL)hasPreviouslyRequestedAlwaysLocationPermissions;

/**
* Set whether "Always" location permissions have been requested before
*
* @param hasRequested whether it has been requested before
*/
+ (void)setHasPreviouslyRequestedAlwaysLocationPermissions:(BOOL) hasRequested;
@end
