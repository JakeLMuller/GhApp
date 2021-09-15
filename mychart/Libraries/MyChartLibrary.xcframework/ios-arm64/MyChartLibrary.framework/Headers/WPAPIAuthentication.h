//
//  WPAPIAuthentication.h
//  MyChart
//
//  Created by Matthew Flatau on 2/7/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>


/*!
 * @enum WPAPILoginErrorCode
 * @brief Login error codes to indicate possible failures states after attempt to login.
 *
 * @constant WPAPILoginErrorCodeFailed - Wrong username or password
 * @constant WPAPILoginErrorCodePasswordExpired - The user's password expired and needs to be reset via the website.
 * @constant WPAPILoginErrorCodeAccountInactive - The user's MyChart account is inactive
 * @constant WPAPILoginErrorCodeAccountDeleted - The user's MyChart account has been deleted
 * @constant WPAPILoginErrorCodeAccountExpired - The user's MyChart account has expired
 * @constant WPAPILoginErrorCodeProxyOnly - The user has a MyChart account but it is only enable to be access via proxy (i.e. someone's else account has access but the user does not).
 * @constant WPAPILoginErrorCodeMaxAttemptsExceeded - The user has tried to login with the wrong credentials to many times and their account has been deactivated.
 * @constant WPAPILoginErrorCodeServerError - Something went wrong on the server/
 * @constant WPAPILoginErrorCodeAppVersionTooLow - User needs to update to a newer version of the app to log in.
 * @constant WPAPILoginErrorCodeReadOnlyServer - The server is undergoing maintenance and has been set to read only mode.
 * @constant WPAPILoginErrorCodeSecurityException - There was an SSL issue connecting to the server
 *
 * The following 2 errors occur during passcode/Touch ID login and the user needs to log in with
 * username and reset their token.
 *
 * @constant WPAPILoginErrorCodeSecondaryLoginInvalidAuthToken - The token stored on the user's device for authentication is no longer valid or cannot be found on the server.
 * @constant WPAPILoginErrorCodeSecondaryPasswordChange - The user's password has changed so their current login token has be deactivated.
 
 * @constant WPAPILoginErrorCodeNoPatientAccess - The user does not have access to his or any proxy MyChart accounts.
 * @constant WPAPILoginErrorCodePatientsLoadFailed - There was a server error when trying to load the patient access list
 * @constant WPAPILoginErrorCodeTermsConditionsLoadFailed - There was an error loading the terms and conditions
 * @constant WPAPILoginErrorCodeTermsConditionsDeclined - The user failed to accept the terms and conditions
 * @constant WPAPILoginErrorCodeTestLibraryExpired - This is a test library and has expired
 * @constant WPAPILoginErrorCodeWrongPasscode - The user entered an incorrect passcode
 * @constant WPAPILoginErrorCodePasscodeNotSet - User tried to login with a passcode when one was not set on this device
 * @constant WPAPILoginErrorCodeTouchIDFailed - System was unable to validate the user's fingerprint
 * @constant WPAPILoginErrorCodeTouchIDNotAvailable - The user tried to login with touch ID and either the device is not enabled for touch ID or they do not have a token set up on this device.
 * @constant WPAPILoginErrorCodeUserCanceled - Currently only occurs during touch ID authentication when the user cancels touch ID authentication.
 * @constant WPAPILoginErrorCodeMustUsePassword - Called when the patient attempts to login using touchid/passcodew when their password has expired. Called only when the server has the password change functionality
 * @constant WPAPILoginErrorCodeMaxAttemptsExceededCanResetPassword - This is returned when user has exhausted the maximum number of password attempts but can still reset their password since the account was not disabled. You can use this to launch password recovery after user enters their password.
 * @constant WPAPILoginErrorCodeMaxAttemptsExceededCannotResetPassword - This is returned when user has exhausted the maximum number of password attempts but can not reset their password since the the password recovery URL was not specified in branding settings so we can not jump them to the reset password workflow.
 * @constant WPAPILoginErrorCodeIncorrectPasswordCannotResetPassword - This is returned when user enters the wrong password and they do not have the ability to reset their password and so this can be used to warn users ahead of time that their account will be disabled after they exhaust the max number of password attempts.
 * @constant WPAPILoginErrorCodeServerOverload - The authentication service returned a HTTP status code of 429 indicating that the server is under heavy load. The user should attempt to login later.
 */
typedef NS_ENUM(NSInteger, WPAPILoginErrorCode) {
    WPAPILoginErrorCodeFailed = 2,
    WPAPILoginErrorCodePasswordExpired = 3,
    WPAPILoginErrorCodeAccountInactive = 4,
    WPAPILoginErrorCodeAccountDeleted = 5,
    WPAPILoginErrorCodeAccountExpired = 6,
    WPAPILoginErrorCodeProxyOnly = 15,
    WPAPILoginErrorCodeMaxAttemptsExceeded = 16,
    WPAPILoginErrorCodeServerError = 50,
    WPAPILoginErrorCodeAppVersionTooLow = 60,
    WPAPILoginErrorCodeServerOverload = 70,
    
    WPAPILoginErrorCodeReadOnlyServer = 1000,
    WPAPILoginErrorCodeSecurityException = 1001,
    
    WPAPILoginErrorCodeSecondaryLoginInvalidAuthToken = 4002,
    WPAPILoginErrorCodeSecondaryPasswordChange = 4003,
    
    WPAPILoginErrorCodeNoPatientAccess = 5002,
    WPAPILoginErrorCodePatientsLoadFailed = 5003,
    
    WPAPILoginErrorCodeTermsConditionsLoadFailed = 6001,
    WPAPILoginErrorCodeTermsConditionsDeclined = 6002,
    WPAPILoginErrorCodeTestLibraryExpired = 6003,
    
    WPAPILoginErrorCodeWrongPasscode = 7001,
    WPAPILoginErrorCodePasscodeNotSet = 7002,
    WPAPILoginErrorCodeTouchIDFailed = 7004,
    WPAPILoginErrorCodeTouchIDNotAvailable = 7005,
    WPAPILoginErrorCodeUserCanceled = 7006,
    WPAPILoginErrorCodeMustUsePassword = 7007,
    
    WPAPILoginErrorCodeMaxAttemptsExceededCanResetPassword = 8001,
    WPAPILoginErrorCodeMaxAttemptsExceededCannotResetPassword = 8002,
    WPAPILoginErrorCodeIncorrectPasswordCannotResetPassword = 8003,
} ;


@protocol WPAPIAuthenticationDelegate <NSObject>

/**
 * @brief Callback for login success
 */
- (void)loginSucceeded;

/**
 * @brief Callback upon login failure.
 *
 * @param error  Error code will map to a WPAPILoginError enum and will also contain a localized reason.
 */
- (void)loginFailedWithError:(nonnull NSError *)error;

/**
 * @brief Callback to request a viewcontroller to display two-factor and terms and conditions controllers
 *
 * @return UIViewController
 */
- (nonnull UIViewController *)getPresentationViewController;

@end

@interface WPAPIAuthentication : NSObject

/**
 * @brief Returns true if the user has a set up a login token to be used to login with touch ID for this device.
 */
+ (BOOL)isTouchIDEnabled DEPRECATED_MSG_ATTRIBUTE("Use BiometricAuthenticationEnabled instead.");

/**
 * @brief Returns true if the user has a set up a login token to be used to login with touch ID or face ID for this device.
 */
+ (BOOL)isBiometricAuthenticationEnabled;

/**
 * @brief Returns true if the user has a set up a passcode for this device.
 */
+ (BOOL)isPasscodeEnabled;

/**
 * @brief If either a passcode or touchID login has been enabled this returns the username for those login methods.
 */
+ (nullable NSString *)usernameForSecondaryLogin;

/**
 * @brief Logs into MyChart with the server specified in SettingsForLibraryBuilds.plist.
 *
 * @param passcode    Four digit passcode that a user has setup for login on this device.
 * @param delegate      The callback delegate that is used for two factor authentication and terms and conditions as well as reporting login success or failure
 */
+ (void)loginWithPasscode:(nonnull NSString *)passcode delegate:(nonnull id <WPAPIAuthenticationDelegate>)delegate;

/**
 * @brief Logs into MyChart with the server specified in SettingsForLibraryBuilds.plist using touchID for verification.
 *
 * @param delegate      The callback delegate that is used for two factor authentication and terms and conditions as well as reporting login success or failure
 */
+ (void)loginUsingTouchIDWithDelegate:(nonnull id <WPAPIAuthenticationDelegate>)delegate DEPRECATED_MSG_ATTRIBUTE("Use loginWithBiometricAuthentication instead.");

/**
 * @brief Logs into MyChart with the server specified in SettingsForLibraryBuilds.plist using face ID or touch ID for verification.
 *
 * @param delegate      The callback delegate that is used for two factor authentication and terms and conditions as well as reporting login success or failure
 */
+ (void)loginWithBiometricAuthentication:(nonnull id <WPAPIAuthenticationDelegate>)delegate;


/**
 * @brief Logs into MyChart with the server specified in SettingsForLibraryBuilds.plist.
 *
 * @param username    the case insensitive username with leading and trailing whitespaces retained. If this is MyChart username, you should make sure leading and trailing whitespaces are trimmed
 * @param password     the case sensitive password
 * @param delegate      The callback delegate that is used for two factor authentication and terms and conditions as well as reporting login success or failure
 */
+ (void)loginWithUsername:(nonnull NSString *)username password:(nonnull NSString *)password delegate:(nonnull id <WPAPIAuthenticationDelegate>)delegate;

/**
 * @brief Logs into the application using the server specified in SettingsForLibraryBuilds.plist.
 * Returns success or failure with an error object.
 * If login is successful the credential is automatically stored.
 *
 * @param username  the case insensitive username with leading and trailing whitespaces retained. If this is MyChart username, you should make sure leading and trailing whitespaces are trimmed
 * @param authenticationToken     A one-time MyChart Authentication Token what will be
 *                                exchanged for a MyChart Mobile Authorization Ticket
 * @param delegate      The callback delegate that is used for two factor authentication and terms and conditions as well as reporting login success or failure
 */
+ (void)loginWithUsername:(nonnull NSString *)username authenticationToken:(nonnull NSString *)authenticationToken delegate:(nonnull id <WPAPIAuthenticationDelegate>)delegate;

/**
 * @brief Logs the user out.
 */
+ (void)logout;
@end
