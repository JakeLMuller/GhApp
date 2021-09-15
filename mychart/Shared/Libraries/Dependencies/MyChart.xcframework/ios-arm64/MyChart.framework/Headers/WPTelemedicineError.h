//
//  WPTelemedicineError.h
//  iChart
//
//  Created by Matthew Flatau on 2/24/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.

typedef NS_ENUM(NSInteger, WPTelemedicineCannotJoinReason) {
    kWPTelemedicineCannotJoinReasonNone = 0, // Patient Can Join
    kWPTelemedicineCannotJoinReasonOutsideWindow = 1, // Outside the Join Window. Too early to join.
    kWPTelemedicineCannotJoinReasonECheckinIncomplete = 2, // eCheck-in required but not completed
    kWPTelemedicineCannotJoinReasonConferenceFull = 3, // Conference is full
    kWPTelemedicineCannotJoinReasonHasDenyJoiningVisitSecurityPoint = 4, //the user has security point 234
    kWPTelemedicineCannotJoinReasonRulePreventingJoiningVideoVisit = 5, //there is a rule preventing the user from joining the video visit
    kWPTelemedicineCannotJoinReasonUndefined = -1    // Reason not defined
} ;

typedef NS_ENUM(NSInteger, WPTelemedicineResponseStatus) {
    kWPTelemedicineResponseStatusUnknown = -1,
    kWPTelemedicineResponseStatusFailed = 0,
    kWPTelemedicineResponseStatusOk = 1
} ;

#import "WPObject.h"

typedef NS_ENUM(NSInteger, WPTelemedicineErrorType) {
    kWPTelemedicineErrorUndefined = -1,
    kWPTelemedicineErrorUnknown = 0, //Unknown error
    kWPTelemedicineErrorTelemed = 1, //Generic telemed exeception
    kWPTelemedicineErrorDeviceNotFound = 2, //Don't have the correct configuration or server (Vidyo)
    kWPTelemedicineErrorSetConnectionStatus = 3, //Set connection status failed
    kWPTelemedicineErrorRoom = 4, //IC server failed to create the room on the vidyo server
    kWPTelemedicineErrorMember = 5, //IC server failed to create the member on the vidyo server
    kWPTelemedicineErrorStreamStatus = 6, //Error setting the streaming status
    kWPTelemedicineErrorPatientAlreadyConnected = 7, //Patient is already signed on with a different device
    kWPTelemedicineErrorAppointmentNotAvailableToJoin = 8, //Either too early or too late to join the appointment
    kWPTelemedicineErrorVideoHangup = 9 //Error deleting room or user
};

@interface WPTelemedicineError : WPObject

@property (nonatomic, strong, nullable) NSString *errorDescription;
@property (nonatomic, assign) WPTelemedicineErrorType errorID;

@end
