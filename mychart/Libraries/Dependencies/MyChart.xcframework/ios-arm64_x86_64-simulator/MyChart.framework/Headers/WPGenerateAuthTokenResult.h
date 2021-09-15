//
//  WPGenerateAuthTokenResult.h
//  MyChart
//
//  Created by Alex J White on 4/3/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"

typedef NS_ENUM(NSInteger, WPAddDeviceStatus) {
    
    kWPAddDeviceStatusUnknown = 0,
    kWPAddDeviceStatusAuthenticationSucceeded = 1,            // Login Successful
    kWPAddDeviceStatusAuthenticationFailed = 2,               // Login failed
    kWPAddDeviceStatusPasswordExpired = 3,                    // password expired
    kWPAddDeviceStatusAccountDeactivated = 4,                 // disabled
    kWPAddDeviceStatusAccountDoesNotExist = 5,                // login Deleted
    kWPAddDeviceStatusAccountExpired = 6,                     // Login/Account expired (past mychart expiration date WPR - 350)
    kWPAddDeviceStatusUnauthorizedWebsite = 7,                // Login to unauthorized website
    kWPAddDeviceStatusNonHomeAccess = 8,                      // MyChart CM - Not patient,//s logical home deployment
    kWPAddDeviceStatusReHomeOrMergeInProgress = 9,            // MyChart CM - ReHome or Merge is in progress
    kWPAddDeviceStatusPointerMismatch = 14,
    kWPAddDeviceStatusProxyOnly = 15,
    kWPAddDeviceStatusMaxAttemptsExceeded = 16,
    kWPAddDeviceStatusAppVersionTooLow = 60,
    
    kWPAddDeviceStatusAddDeviceSucceeded = 300,               // Login Successful and Device addition successful
    kWPAddDeviceStatusAddDeviceFailed = 301,                  // Error adding the device
    kWPAddDeviceStatusInvalidInput = 302,                     // Invalid inputs
    kWPAddDeviceStatusUserMismatch = 303,                     // User is not the same as the one from the authorization ticket
};

@interface WPGenerateAuthTokenResult : WPObject

@property (nonatomic,strong) NSString* authenticationToken;
@property (nonatomic,assign) WPAddDeviceStatus status;


@end
