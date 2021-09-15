//
//  WPSetPasswordResponse.h
//  MyChart
//
//  Created by Yash Vaka on 2/21/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"

typedef NS_ENUM(NSInteger, WPPasswordStatus)
{
    WPPasswordStatusUnknown = 0,                    // Unkown error code, should never be returned
    WPPasswordStatusSuccess = 1,                    // Password Change Success
    WPPasswordStatusErrorIncorrectOld = 2,          // Incorrect old password
    WPPasswordStatusErrorIncorrectLength = 3,       // Incorrect Password Length
    WPPasswordStatusErrorAlphanumeric = 4,          // Password must contain one letter and number
    WPPasswordStatusErrorCase = 5,                  // The password must require both an uppercase letter and lower case letter
    WPPasswordStatusErrorSpecialCharacters = 6,     // The password must contain a special character
    WPPasswordStatusErrorID = 7,                    // The password cannot be the same as the username
    WPPasswordStatusErrorTooManyAttempts = 8,       // The user tried to change to password incorrectly too many times.
    WPPasswordStatusExpired = 9,                    // The user tried to change their password to the expired password
    WPPasswordStatusErrorReusedTooSoon = 10          // Reuse a previous password too soon (d ^%ZeUSTBL -> Security -> Password options -> Password Expiration and Reuse options -> Minimum reuse period)
};

@interface WPResetPasswordResult : WPObject

@property (nonatomic, assign) WPPasswordStatus passwordStatus;

//Following properties only set if passwordStatus is WPPasswordStatusErrorIncorrectLength
@property (nonatomic, strong) NSString *minPasswordLength;
@property (nonatomic, strong) NSString *maxPasswordLength;

@end


@interface WPResetPasswordResponse : WPResponse

@property (nonatomic, strong) WPResetPasswordResult *passwordResult;

@end
