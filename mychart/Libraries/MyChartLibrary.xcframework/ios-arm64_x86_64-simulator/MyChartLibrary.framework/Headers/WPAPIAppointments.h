//
//  WPAPIAppointments.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/19/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIAppointments : NSObject

/**
 * Returns an access result, which indicates whether or not the appointments list is allowed in the current context.
 *
 * @return The access result for the appointments list.
 */
+ (WPAPIAccessResult)accessResultForAppointmentsList DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Provides the appointments list view controller instance for the current patient to be pushed on to the navigation stack.
 *
 * @return The appointments list viewcontroller. Returns nil if the appointments list is not allowed in the current context.
 */
+ (nullable UIViewController *)getAppointmentsListController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Returns an access result, which indicates whether or not future appointment details can be loaded in the current context. This method will consider a patient to have access to future appointment details if they have security point 13-Appointment Details and/or 197-Upcoming Preadmission. There is also a more specific server-level security check based on an appointment's type, so a return value of WPAPIAccessResultAccessAllowed from this method does not guarantee a successful load for every future appointment's details.
 *
 * @return The access result for future appointment details.
 */
+ (WPAPIAccessResult)accessResultForFutureAppointment DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Provides the future appointment details view controller instance for a particular appointment to be pushed on to the navigation stack.
 *
 * @param csn the unique contact serial number of the future appointment
 * @return The future appointment details viewcontroller. Returns nil if the future appointment details are not allowed in the current context.
 */
+ (nullable UIViewController *)getFutureAppointmentControllerForCSN:(nonnull NSString *)csn DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Returns an access result, which indicates whether or not scheduling (either native or mobile optimized) is allowed in the current context.
 *
 * @return The access result for scheduling.
 */
+ (WPAPIAccessResult)accessResultForScheduling DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Provides the scheduling view controller instance for the current patient to be presented modally.
 *
 * @warning Make sure this view controller is presented modally.
 * @return The scheduling viewcontroller. Returns nil if scheduling is not allowed in the current context.
 */
+ (nullable UIViewController *)getModalSchedulingController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Returns an access result, which indicates whether or not appointment arrival ("Hello Patient") is allowed in the current context.
 *
 * @param patient The patient who is attempting appointment arrival.
 * @return The access result for appointment arrival.
 */
+ (WPAPIAccessResult)accessResultForAppointmentCheckInForPatient:(nonnull id<IWPPatient>)patient DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Provides a view controller for appointment arrival. When presented to the patient, the view controller  will allow the patient to trigger the arrival process for an appointment. This method should be used in conjunction with the appointment arrival ("Hello Patient") framework.
 *
 * @param appointment the appointment to trigger arrival for
 * @return A view controller that allows the patient to start the arrival process. Returns nil if appointment arrival ("Hello Patient") is not allowed in the current context.
 */
+ (nullable UIViewController *)getCheckInViewControllerForMonitoredAppointment:(nonnull id<IWPAppointment>)appointment DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Provides an view controller for appointment arrival. When presented to the patient, the alert dialog will allow the patient to trigger the arrival process for an appointment. This method should be used in conjunction with the appointment arrival ("Hello Patient") framework.
 *
 * @param csn the unique contact serial number of the appointment to trigger arrival for
 * @param patient the patient being arrived
 * @param appointmentTime the start time of the appointment
 * @param selfArrivalMechanism the self-arrival method used to initiate the arrival workflow for this appointment
 * @return A view controller that allows the patient to start the arrival process. Returns nil if appointment arrival ("Hello Patient") is not allowed in the current context.
 */
+ (nullable UIViewController *)getCheckInViewControllerForCSN:(nonnull NSString *)csn patient:(nonnull id<IWPPatient>)patient appointmentTime:(nonnull NSDate *)startTime selfArrivalMechanism:(WPAPIAppointmentSelfArrivalMechanism)selfArrivalMechanism DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Returns an access result, which indicates whether or not eCheck-in for appointments is allowed in the current context.
 *
 * @return The access result for eCheck-in.
 */
+ (WPAPIAccessResult)accessResultForECheckIn DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Provides the mobile optimized eCheck-in view controller for an appointment, to be presented modally.
 *
 * @param csn the unique contact serial number of the appointment to open eCheck-in for
 * @param isCsnEncrypted whether the passed in CSN is encrypted
 * @return An instance of the mobile optimized eCheck-in view controller. Returns nil if eCheck-in is not allowed in the current context.
 */
+ (nullable UIViewController *)getModalECheckInControllerForCSN:(nonnull NSString *)csn isCsnEncrypted:(BOOL)isCsnEncrypted DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Provides the mobile optimized eCheck-in view controller an appointment, to be presented modally.
 *
 * @param appointment the appointment to open eCheck-in for
 * @return The mobile optimized eCheck-in view controller. Returns nil if eCheck-in is not allowed in the current context.
 */
+ (nullable UIAlertController *)getModalECheckInControllerForAppointment:(nonnull id<IWPAppointment>)appointment DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Returns an access result, which indicates whether or not on-demand video visits are allowed in the current context.
 *
 * @return The access result for on-demand video visits.
 */
+ (WPAPIAccessResult)accessResultForOnDemandVideoVisit DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Provides the mobile optimized on-demand video visit view controller for the current patient, to be presented modally.
 *
 * @return The mobile optimized on-demand video visit view controller. Returns nil if on-demand video visits are not allowed in the current context.
 */
+ (nullable UIViewController *)getModalOnDemandVideoVisitController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Provides the mobile optimized on-demand video visit view controller for the current patient, to be presented modally.
 *
 * @param rfvID the reason for visit
 * @return The mobile optimized on-demand video visit view controller. Returns nil if on-demand video visits are not allowed in the current context.
 */
+ (nullable UIViewController *)getModalOnDemandVideoVisitController:(nonnull NSString *)rfvID DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Returns an access result, which indicates whether or not appointment AVS can be loaded in the current context. This method will consider a patient to have access to future appointment details if they have security point 71-Recent Visits Summary and/or 81-Hospital Visits. There is also a more specific server-level security check based on an appointment's type, so a return value of WPAPIAccessResultAccessAllowed from this method does not guarantee a successful load for every past appointment's AVS.
 *
 * @return The access result for appointment AVS.
 */
+ (WPAPIAccessResult)accessResultForAppointmentAVS DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * Provides the appointment AVS (after visit summary) view controller for an appointment, to be presented modally.
 *
 * @param dat the unique identifier of the appointment to open AVS for
 * @return An instance of the AVS view controller. Returns nil if viewing appointment AVS is not allowed in the current context.
 */
+ (nullable UIViewController *)getModalAppointmentAVSControllerForDAT:(nonnull NSString *)dat DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");
@end
