//
//  WPLocationManager.h
//  MyChart
//
//  Created by Joe Soultanis on 11/17/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>


@interface WPLocationManager : NSObject <CLLocationManagerDelegate>

@property (nonatomic, strong) CLLocation *currentLocation;
@property (nonatomic, strong) id <WPArrivalDelegate> apptDelegate;

+ (instancetype)sharedInstance;

/**
* Get whether our app has a location authorization status of "Always".
*
* @return YES if authorization status of Always, NO otherwise
*/
+ (BOOL)isAuthorizationStatusAlways;

/**
 * Get whether our app has full accuracy location permissions (iOS 14+)
 *
 * @return YES if accuracy authorization status of Full, NO otherwise
 */
- (BOOL)isAccuracyAuthorizationFull;

/**
* Request always authorization. locationManager is a private property, so expose the Apple function through this
*/
- (void)requestAlwaysAuthorization;

/**
* Start  updating location. locationManager is a private property, so expose the Apple function through this
*/
- (void)startUpdatingLocation;

/**
* Stop updating location. locationManager is a private property, so expose the Apple function through this
*/
- (void)stopUpdatingLocation;

/**
 * If user has location services disabled at the device level, prompt them to turn it on.
 * Useful as a workaround for a variety of iOS-imposed location issues and deficiencies..
 */
- (void)promptUserForLocationServices;

/**
* Add given region to be monitored. Then request its state.
*
* @param newRegion region to add
*/
- (void)addMonitoredRegion:(CLRegion *)newRegion;

/**
* Request state of the given region
*
* @param region region for which to request state
*/
- (void)requestStateForRegion:(CLRegion *)region;

/**
* Remove the region from being monitored
*
* @param region The region to remove
*/
- (void)removeMonitoredRegion:(CLRegion *)region;

/**
* Remove all regions, across all orgs, from being monitored
*/
- (void)removeAllMonitoredRegions;

/**
* Get all regions currently being monitored
*
* @return An array of the regions currently being monitored
*/
- (NSArray *)getMonitoredRegions;

/**
* Get the CLRegion currently being monitored for the logged-in org.
*
* @return The region, or nil if none
*/
- (CLRegion *)getMonitoredCLRegionForCurrentOrg;

/**
* Get the WPMonitoredForArrivalAppointment  currently being monitored for the logged-in org.
*
* @return The region, or nil if none
*/
- (WPMonitoredForArrivalAppointment *)getMonitoredWPRegionForCurrentOrg;

/**
 *  Get the currently monitored CSN.  If there is none, it will be an empty string
*/
- (NSString *) getMonitoredAppointmentCSN;

@end
