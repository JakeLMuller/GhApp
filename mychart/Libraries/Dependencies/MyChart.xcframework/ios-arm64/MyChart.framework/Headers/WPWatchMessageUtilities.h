//
//  WPWatchMessageUtilities.h
//  MyChart
//
//  Created by Tim Knutson on 5/22/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

// defines messaging strings for Watch Connectivity, messages sent to phone include a message type enum
// and a payload, messages and files coming to the watch contain values to extract.
static NSString * const WPWMessageType = @"EpicWPW.message.WPWMessageKey";
static NSString * const WPWMessagePayload = @"EpicWPW.message.WPWMessagePayload";

#pragma mark - requests enum
typedef NS_ENUM(NSInteger, WPWMessageTypeValue) {
    kWPWMessageInitialRequest        = 1,
    kWPWMessageLoginTokenRequest     = 2,
    kWPWMessageKillTokenRequest      = 3,
    kWPWMessageLoginCompleteRequest  = 4,
    kWPWMessagePatientPhotoRequest   = 5,
    kWPWMessageCustomerListRequest   = 6,
    kWPWMessageUserAgentRequest      = 7,
    kWPWMessageUUIDRequest           = 8
} ;

#pragma mark - message request strings
static NSString * const WPWMessageUserAgentRequest = @"EpicWPW.message.WPWUserAgentRequest";
static NSString * const WPWMessageUUIDRequest = @"EpicWPW.message.WPWUUIDRequest";


#pragma mark - message values
static NSString * const WPWMessageUserAgent = @"EpicWPW.message.WPWUserAgent";
static NSString * const WPWMessagePincode = @"EpicWPW.message.WPWPincode";
static NSString * const WPWMessageServer = @"EpicWPW.message.WPWServer";
static NSString * const WPWMessageLoginToken = @"EpicWPW.message.WPWLoginToken";
static NSString * const WPWMessageUsername = @"EpicWPW.message.WPWUsername";
static NSString * const WPWMessageCustomerList = @"EpicWPW.message.WPWCustomerList";
static NSString * const WPWMessageUUID = @"EpicWPW.message.WPWMessageUUID";
static NSString * const WPWMessageLoginTokenError = @"EpicWPW.message.WPWLoginTokenError";
static NSString * const WPWMessageLoginTokenErrorCode = @"EpicWPW.message.WPWLoginTokenErrorCode";
static NSString * const WPWMessageAttemptsRemaining = @"EpicWPW.message.WPWAttemptsRemaining";
static NSString * const WPWMessagePatientPhotoKey = @"EpicWPW.message.WPWPatientPhotoKey";
static NSString * const WPWMessageNoPatientPhoto = @"EpicWPW.message.WPWNoPatientPhoto";
static NSString * const WPWMessagePatientPhotoData = @"EpicWPW.message.WPWPatientPhotoData";
static NSString * const WPWMessagePatientIndex = @"EpicWPW.message.WPWPatientIndex";
