//
//  WPLoginErrors.h
//  MyChart
//
//  Created by Matthew Flatau on 2/3/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

//The key in the user info dictionary that contains the number of attempts left to try logging in with a secondary token
static NSString * const WPLoginPasscodeErrorNumberOfAttemptsRemainingKey = @"WPLoginPasscodeErrorNumberOfAttemptsRemaining";

typedef NS_ENUM(NSInteger, WPLoginErrorCode) {
    WPLoginErrorCodeSuccess = 1,
    WPLoginErrorCodeFailed = 2,
    WPLoginErrorCodePasswordExpired = 3,
    WPLoginErrorCodeAccountInactive = 4,
    WPLoginErrorCodeAccountDeleted = 5,
    WPLoginErrorCodeAccountExpired = 6,
    WPLoginErrorCodeUnauthorizedWebsite = 7,        //Should only happen on web
    WPLoginErrorCodeNonHomeAccess = 8,              //Logging into wrong instance of organization
    WPLoginErrorCodeReHomeOrMergeInProgress = 9,    //Temporarily inactive account because they are being re-homed
    WPLoginErrorCodeRemotelyAuthorized = 10,        //
    WPLoginErrorCodeRemoteAuthorizationFailed = 11,
    WPLoginErrorCodeRemoteProxyLogin = 12,
    WPLoginErrorCodeRemoteProxySelfLogin = 13,
    WPLoginErrorCodePointerMisMatch = 14,
    WPLoginErrorCodeProxyOnly = 15,
    WPLoginErrorCodeMaxAttemptsExceeded = 16,
    WPLoginErrorCodeRedirectToHomeError = 40, //Deprecated. EMPI servers will now call a web service against the home deployment
    WPLoginErrorCodeServerError = 50,
    WPLoginErrorCodeAppVersionTooLow = 60,
    WPLoginErrorCodeServerOverload = 70,
    
    //Computed Errors
    WPLoginErrorCodeReadOnlyServer = 1000,
    WPLoginErrorCodeSecurityException = 1001,
    
    //Secondary login errors
    WPLoginErrorCodeSecondaryLoginUnknownError = 4001,
    //For the following 3 errors need to log in with username and reset Passcode
    WPLoginErrorCodeSecondaryLoginInvalidAuthToken = 4002,//Keychain gave an unknown auth token
    WPLoginErrorCodeSecondaryPasswordChange = 4003,
    WPLoginErrorCodeSecondaryDeviceInactive = 4004,
    WPLoginErrorCodeSecondaryDeviceNotFound = 4005,

    //Errors not populated from Interconnect
    WPLoginErrorCodeInvalidTicket = 5001, //401 response
    WPLoginErrorCodeNoPatientAccess = 5002,    //User is not a patient and cannot access any patients
    WPLoginErrorCodePatientsLoadFailed = 5003,
    
    //New error codes
    WPLoginErrorCodeTermsConditionsLoadFailed = 6001,
    WPLoginErrorCodeTermsConditionsDeclined = 6002,
    WPLoginErrorCodeTestLibraryExpired = 6003, //Should only ever occur for expired test libraries
	WPLoginErrorCodeTwoFactorNotSupported = 6004, //Two factor authentication is required but not supported (i.e. on watch)
    WPLoginErrorCodeTwoFactorNotPossible = 6005, //Two factor authentication is required but not possible (i.e. on watch and we can't remember the device)
    
    //More secondary login errors
    WPLoginErrorCodeWrongPasscode = 7001,
    WPLoginErrorCodePasscodeNotSet = 7002,
    WPLoginErrorCodePasscodeKeychainError = 7003,
    WPLoginErrorCodeTouchIDFailed = 7004,          //Unable to validate the user's touch ID
    WPLoginErrorCodeTouchIDNotAvailable = 7005,        //Either the device is not set up to use touch ID or it has not been enabled for this device/server
    WPLoginErrorCodeUserCanceled = 7006,     //Currently only occurs for touch ID, two factor cancelation, or terms and conditions declined
    WPLoginErrorCodeMustUsePassword = 7007, // Called when the patient attempts to login using touchid/passcodew when their password has expired. Called only when the server has the password change functionality.
    
    WPLoginErrorCodeMaxAttemptsExceededCanResetPassword = 8001, // Used when a user can be redirected to password recovery when they exceed max password attempts
    WPLoginErrorCodeMaxAttemptsExceededCannotResetPassword = 8002, // Used when a user exceeds max password attempts but can't reset their password because the Password recovery URL is not configured by the organization so we can not jump them to the reset password workflow.
    WPLoginErrorCodeIncorrectPasswordCannotResetPassword = 8003, // Used when failed password attempt occurs and the user does not have the abillity to reset their password.
} ;

typedef NS_ENUM(NSInteger, WPLoginMethod) {
    WPLoginMethodNone,
    WPLoginMethodPassword,
    WPLoginMethodBiometric,
    WPLoginMethodPasscode,
    WPLoginMethodAuthenticationToken,
};

typedef NS_ENUM(NSInteger, WPShowTerms) {
    WPShowTermsDoNotShow = 0,
    WPShowTermsNew,
    WPShowTermsUpdated,
    WPShowTermsProxyDisclaimer,
};

typedef NS_ENUM (NSInteger, WPTermsType) {
    WPTermsTypeNone = -1,                  //Matches WPShowTermsDoNotShow
    WPTermsTypeConditions = 0,              //Matches WPShowTermsNew and WPShowTermsUpdated
    WPTermsTypeProxyDisclaimer = 1,         //Matches WPShowTermsProxyDisclaimer
    WPTermsTypeEULA = 2,                    //Does not match anything in showterms
};

@interface WPLoginErrors : NSObject

+ (WPLoginErrorCode)loginErrorCodeFromString:(NSString *)status;

+ (NSError *)getErrorFromLoginErrorCode:(WPLoginErrorCode)code forServer:(WPServer *)server loginMethod:(WPLoginMethod)loginMethod;  
+ (NSError *)getErrorFromLoginErrorCode:(WPLoginErrorCode)code forServer:(WPServer *)server originalError:(NSError *)error loginMethod:(WPLoginMethod)loginMethod;
+ (NSError *)getErrorFromLoginErrorCode:(WPLoginErrorCode)code forServer:(WPServer *)server originalError:(NSError *)originalError loginMethod:(WPLoginMethod)loginMethod checkAttempts:(BOOL)checkAttempts attempts:(NSUInteger)attempts;

@end
