
//
//  WPMonitoredForArrivalAppointment.h
//  MyChart
//
//  Created by Landon Sykora on 8/16/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@protocol WPArrivalDelegate;

@interface WPMonitoredForArrivalAppointment : NSObject <IWPAppointment>

@property (nonatomic, strong) NSString *CSN;
@property (nonatomic, strong) NSString *orgID;
@property (nonatomic, strong) NSString *firstUserID;
@property (nonatomic) NSInteger patientIndex;

@property (nonatomic, strong) NSDate *arrivalWindowStartTime;
@property (nonatomic, strong) NSDate *arrivalWindowEndTime;
@property (nonatomic, strong) NSDate *appointmentStartDate;
@property (nonatomic, strong) NSDate *displayDate;
@property (nonatomic) BOOL isInitiatedWithBeacons;
@property (nonatomic) CLLocationDegrees latitude;
@property (nonatomic) CLLocationDegrees longitude;
@property (nonatomic) CLLocationDistance radius;

@property (nonatomic) NSUUID * iBeaconUUID;
@property (nonatomic) NSString * iBeaconMajorValue;
@property (nonatomic) NSString * iBeaconMinorValue;

extern NSString *const CSN;
extern NSString *const ORG_ID;
extern NSString *const FIRST_USER_ID;
extern NSString *const PATIENT_INDEX;
extern NSString *const ARRIVAL_WINDOW_START_TIME;
extern NSString *const ARRIVAL_WINDOW_END_TIME;
extern NSString *const APPOINTMENT_START_DATE;
extern NSString *const DISPLAY_DATE;

extern CLLocationDistance const DEFAULT_RADIUS;


/**
* Convert this object to a CLRegion to be passed to Apple's location/bluetooth frameworks
*
* @return a CLRegion
*/
- (CLRegion *)getCLRegion;

/**
* Initialize with our WPAppointment object.
*
* @param appt The appt
* @param patientIndex patient index
*/
- (instancetype)initWithAppointment:(WPAppointment *)appt andPatientIndex: (NSInteger) patientIndex;

/**
 * Initialize with CLRegion.
 *
 * @param region The region
 */
- (instancetype)initWithRegion:(CLRegion *)region;

/**
 * Check whether the current date/time is within the arrival window for this appointment.
 *
 * @return YES if current date/time within arrival window, otherwise NO
 */
- (BOOL) isCurrentDateWithinArrivalWindow;

/**
* Get the number of seconds until the arrival window begins.
* Could be negative if arrival window begins in the past.
*
* @return A double indicating number of seconds until the arrival window begins
*/
- (double) getSecondsUntilArrivalWindowFromCurrentDate;

/**
* Convert this object to a JSON Mutable Dictionary
*
* @return an NSMutableDictionary
*/
- (NSMutableDictionary *)getRegionMetadataDictionary;

/**
 * Helper to get the display time for an appoiontment arrival
 */
+ (NSDate *)getDisplayTimeForAppointment:(WPAppointment *)appointment;

@end

@protocol WPArrivalDelegate <NSObject>

@required
- (void)didEnterRegion:(WPMonitoredForArrivalAppointment *)region;

@end
