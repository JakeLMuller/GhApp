//
//  WPAppointmentDisplayManager.h
//  MyChart
//
//  Created by Yechan Hong on 4/14/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRespondToOfferResult.h"
#import "WPGenericAlertInfo.h"

@class WPAppointment;

typedef NS_ENUM(NSInteger, WPAppointmentCancelRescheduleStatus) {
    kWPAppointmentCancelRescheduleStatusCanCancelAndReschedule,
    kWPAppointmentCancelRescheduleStatusCanCancel,
    kWPAppointmentCancelRescheduleStatusCanReschedule,
    kWPAppointmentCancelRescheduleStatusCannotCancelOrReschedule,
};

typedef NS_ENUM(NSInteger, WPChangeAppointmentType) {
    kWPChangeAppointmentTypeReschedule,
    kWPChangeAppointmentTypeCancel,
    kWPChangeAppointmentTypeNone
};

typedef NS_ENUM(NSInteger, WPAppointmentCancellationType) {
    WPAppointmentCancellationTypeDirect = 1,
    WPAppointmentCancellationTypeRequest,
    WPAppointmentCancellationTypePhone,
    WPAppointmentCancellationTypeNone,
};

@interface WPAppointmentTimeStrings : NSObject

@property (nonatomic, strong) NSString * _Nullable timeString;
@property (nonatomic, strong) NSString * _Nullable arriveByString;
@property (nonatomic, strong) NSString * _Nullable durationString;

@end


@interface WPAppointmentDisplayManager : NSObject


+ (nullable NSString *)timeStringFromAppointment:(nonnull WPAppointment *)appt;

+ (nullable WPAppointmentTimeStrings *)timeStringsFromAppointment:(nonnull WPAppointment *)appt;
+ (nullable NSString *) getDurationStringForAppointment:(nonnull WPAppointment *)appointment;


/**
 This is a convenient method returns the appointment time string and prepend it with "Start at:"
 */
+ (nullable WPAppointmentTimeStrings *)timeStringsFromAppointmentIncludingStartLabel:(nonnull WPAppointment *)appt;

/**
 Determine if we need to display the arrival time string for a given appointment. This should match Android in the same manner.
 */
+ (BOOL)shouldDisplayArrivalTime:(nonnull WPAppointment*)appointment;

/**
 Determine if we need to display the add to calendar button for a given appointment.
 */
+ (BOOL)shouldDisplayAddToCalendar:(nonnull WPAppointment*)appointment NS_SWIFT_NAME(shouldDisplayAddToCalendar(appointment:));

/**
 Determine if we need to display the date for a given appointment.
 */
+ (BOOL)shouldDisplayDate:(nonnull WPAppointment*)appointment;

/**
 Determine if we need to display the department name and location for a given appointment.
 */
+ (BOOL)shouldDisplayDepartmentNameAndLocation:(nonnull WPAppointment*)appointment;



/**
 The standalone function to get the arrival by string for a given appointment.
 */
+ (nullable NSString*)getArrivalByString:(nonnull WPAppointment*)appointment;

// used in future appointment details to get the date string for the header view
+ (nullable NSString *)formattedDateLabelTextForDate:(nullable NSDate *)date;
+ (nullable NSString *)formattedDateLabelTextForDate:(nullable NSDate *)date andTimeZone:(nullable NSTimeZone *)timeZone;
+ (nullable NSString *)formattedDateLabelTextForDate:(nullable NSDate *)date andTimeZone:(nullable NSTimeZone *)timeZone andTimeFormat:(nullable NSString *)timeFormat;
+ (nullable NSString *)formattedDateLabelTextForAppointment:(nonnull WPAppointment *)appointment;

+ (nullable NSString *)getVisitTitleStringForAppointment:(nonnull WPAppointment *)appointment;
+ (BOOL) shouldDisplayUnviewedIndicatorForAppointment:(nonnull WPAppointment *)appointment;
+ (BOOL) shouldDisplayNotesForAppointment:(nonnull WPAppointment *)appointment;
+ (WPAppointmentCancellationType) getCancellationTypeForAppointment:(nonnull WPAppointment *)appointment;
+ (BOOL) echeckinAvailableForAppointment:(nonnull WPAppointment *)appointment;
+ (BOOL) echeckinAvailableForCompositeAppointment:(nonnull WPAppointment *)appointment;
+ (BOOL) echeckinAvailableForSingleAppointment:(nonnull WPAppointment *)appointment;
+ (BOOL) hasIncompleteEcheckinsAvailableInCompositeAppointment:(nonnull WPAppointment *)compositeAppointment;
+ (BOOL) hasEcheckinStepsAndNoQuestionnaires:(nonnull WPAppointment *)appointment;
+ (BOOL) showBarcodeForAppointment:(nonnull WPAppointment *)appointment;
+ (BOOL) showBarcodeForSingleAppointment:(nonnull WPAppointment *)appointment;
+ (nullable WPGenericAlertInfo *) alertInfoFromOfferResult:(nonnull WPRespondToOfferResult *)result accept:(BOOL)accept;
+ (WPAppointmentCancelRescheduleStatus) getCancelRescheduleStatusForAppointment:(nonnull WPAppointment *)appt;
+ (BOOL)isRescheduleAvailable:(nonnull WPAppointment *)appt;
+ (BOOL)isCancelAvailable:(nonnull WPAppointment *)appt;
+ (nullable NSAttributedString *)formattedWaitListOfferPromptStringWithDate:(nonnull NSDate *)date isStandAloneAppt:(BOOL)standAlone;
+ (nullable NSString *)formattedWaitListOfferExpirationStringWithDate:(nonnull NSDate *)date;
+ (nullable NSString *)getArrivalLocationString:(nonnull WPAppointment *)appointment;
+ (nullable NSString *)getArrivalInstructionsString:(nonnull WPAppointment*)appointment;
+ (nullable NSString *) getInpatientLocationDisplayAddress:(nonnull WPAppointment *)appointment;
+ (nullable NSString *) getDepartmentDisplayAddress:(nonnull WPAppointment *)appointment;
+ (NSString *_Nullable)getVisitTitleForAdmissions;
+ (BOOL) showArrivalBannerForAppointment:(nonnull WPAppointment *)appointment;

@end
