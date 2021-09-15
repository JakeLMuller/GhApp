//
//  IWPAppointment.h
//  MyChart
//
//  Created by Joe Soultanis on 4/11/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//
#import "IWPPatient.h"

typedef NS_ENUM(NSInteger, WPAPIAppointmentArrivalStatus)  {
    WPAPIAppointmentArrivalStatusError = 0,
    WPAPIAppointmentArrivalStatusSignedIn = 1,
    WPAPIAppointmentArrivalStatusCheckedIn = 2,
} ;

typedef NS_ENUM(NSInteger, WPAPIAppointmentSelfArrivalMechanism); //forward declaration since this is compiled in swift source files

/**
 * @brief Represents an interface for an individual appointment with an associated patient.
 */
@protocol IWPAppointment <NSObject>

/**
 * @brief The unique CSN (Contact Serial Number) corresponding to the patient encounter.
 */
@property (nonnull, nonatomic, strong, readonly) NSString *CSN;

/**
 * @brief The start time of the appointment. This is also the time the appointment will stop being monitored for arrival.
 */
@property (nonnull, nonatomic, strong, readonly) NSDate *appointmentStartTime;

/**
 * @brief The time this appointment's arrival window begins; in other words, the time the appointment will begin being monitored for arrival.
 */
@property (nonnull, nonatomic, strong, readonly) NSDate *arrivalWindowStartTime;

/**
 * @brief The time this appointment's arrival window ends; in other words, the time the appointment will stop being monitored for arrival.
 */
@property (nonnull, nonatomic, strong, readonly) NSDate *arrivalWindowEndTime;

/**
 * @brief The display time of the appointment being monitored. It is the same as the appointment start time unless we are showing only arrival time, in which case it is the arrival time.
 */
@property (nonnull, nonatomic, strong, readonly) NSDate *displayTime;

/**
 * @brief The patient associated with this appointment.
 */
@property (nonnull, nonatomic, strong, readonly) id <IWPPatient> patient;

/**
 * @brief The self-arrival mechanism by which this arrival workflow for this appointment was initiated
 */
@property (nonatomic, readonly) WPAPIAppointmentSelfArrivalMechanism selfArrivalMechanism;

@end
