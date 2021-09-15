//
//  WPDepartment.h
//  iChart
//
//  Created by Chetan Satish on 8/4/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPHoursOfOperation.h"
#import "WPCategory.h"
#import "WPAddress.h"
#import "WPCoordinates.h"

typedef NS_ENUM(NSUInteger, WPDepartmentAvailability) {
    kWPDepartmentAvailabilityOpen,
    kWPDepartmentAvailabilityClosingSoon,
    kWPDepartmentAvailabilityClosed,
};

@interface WPDepartment : WPObject

@property (nonatomic, strong, nullable) WPCategory*	specialty;
@property (nonatomic, strong, nullable) WPCategory*	center;
@property (nonatomic, strong, nullable) NSString* schedulingInstructions;
@property (nonatomic, strong, nullable) NSString* arrivalInstructions;
@property (nonatomic, strong, nullable) WPAddress* address;
@property (nonatomic, strong, nullable) NSString* phone;
@property (nonatomic, strong, nullable) NSString* schedulingPhone;
@property (nonatomic, assign) BOOL hasBeenFilled;

/*
 * This is a special case to handle the XML returned from the list of avaialble providers.
 * The provider list returns complete XML for department, center and provider individually
 * and then has links using IDs between the objects. So coders will have to be aware of this 
 * and know if the Center or department object is a shell with just the ID or a complete one.
 *
 */
@property (nonatomic, weak, nullable) NSString* centerValue;

@property (nonatomic) NSInteger timeTillCareMinutes;
@property (nonatomic) WPDepartmentAvailability availability;
@property (nonatomic) NSInteger waitTimeMinutes;
@property (nonatomic) NSInteger driveTimeMinutes;

@property (nonatomic, assign) BOOL appointmentArrivalDisabled;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat longitude;
@property (nonatomic) CGFloat radius;
@property (nonatomic, strong, nullable) NSUUID* iBeaconUUID;
@property (nonatomic, strong, nullable) NSString *iBeaconMajorValue;
@property (nonatomic, strong, nullable) NSString *iBeaconMinorValue;
@property (nonatomic) BOOL beaconsAppointmentArrivalExcluded;
@property (nonatomic) BOOL geolocationAppointmentArrivalExcluded;

@property (nonatomic) BOOL waitTimeDefined;
@property (nonatomic, strong, nullable) NSString* displayAddress;
@property (nonatomic, strong, nullable) WPCoordinates* coordinates;
@property (nonatomic, strong, nullable) NSTimeZone* timeZone;
@property (nonatomic, strong, nullable) WPHoursOfOperation* hoursOfOperation;
@property (nonatomic, strong, nullable) NSString* arrivalLocation;

@end
