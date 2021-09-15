//
//  IWPUpcomingAppointmentsAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/1/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//


/**
 * @brief Represents an interface for an upcoming appointments alert.
 */
@protocol IWPUpcomingAppointmentsAlert <IWPAlert>

/**
 * @brief Date for the upcoming appointment. This is present only if the alert is for a single upcoming appointment. If there are multiple appointments in the alert, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSDate *appointmentDate;

/**
 * @brief Name of the provider for the upcoming appointment. This is present only if the alert is for a single upcoming appointment. If there are multiple appointments in the alert, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *providerName;

/**
 * @brief ID (CSN) of the appointment. This is present only if the alert is for a single upcoming appointment. If there are multiple appointments in the alert, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *appointmentID;

/**
 * @brief Is eligible for user-initiated appointment self-arrival
 */
@property (nonatomic, readonly) BOOL isUserInitiatedArrivalAllowed;

@end
