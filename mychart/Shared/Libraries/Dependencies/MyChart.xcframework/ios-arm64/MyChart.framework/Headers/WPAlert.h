//
//  WPAlert.h
//  iChart
// 
//  Created by Epic on 7/23/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
#import "WPDummyAlert.h"
#import "WPLocaleInfo.h"
#import "WPSpringboardInfo.h"
#import "WPAlertOption.h"
#import "WPActivityIdentifiers.h"
#import "WPAlertType.h"


@interface WPAlert : WPObject <IWPAlert, NSCoding, PEAlertProtocol>

/**
 * @brief Index of the patient associated with the alert
 */
@property (nonatomic, assign) NSInteger patientIndex;

/**
 * @brief Count of the alerts
 */
@property (nonatomic, assign) NSInteger count;

/**
 * @brief Priority of the alert. Currently not implemented.
 */
@property (nonatomic, assign) NSInteger priority;

/**
 * @brief Type of the alert
 */
@property (nonatomic, assign) WPAlertType type;

/**
 * @brief AlertOptionKey associated with 2016 and later alerts. May be nil for alerts with multiple counts.
 */
@property (nonatomic, strong) NSString *alertID;

/**
 * @brief Activity associated with the alert
 */
@property (nonatomic, assign) WPActivity activity;

/**
 * @brief Short user friendly string explaining the alert - can be used with smaller devices/screens like the Apple Watch. Currently not exposed to the library but it can be done later by moving this to IWPAlert.
 */
@property (nonatomic, strong) NSString *shortDisplayString;

- (instancetype) initWithDummyAlert:(WPDummyAlert*)dummyAlert andPatientIndex:(NSInteger)patientIndex;

#pragma mark - Internal use properties

@property (nonatomic, assign) BOOL isWebOnlyAlert;

@property (nonatomic, assign) BOOL isBillingAlert;

@property (nonatomic, assign) BOOL isAppointmentAlert;

@property (nonatomic, assign) BOOL isBadgeWorthyAlert;

@end


