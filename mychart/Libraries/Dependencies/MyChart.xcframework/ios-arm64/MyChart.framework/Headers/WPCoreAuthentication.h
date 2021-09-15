//
//  WPCoreAuthentication.h
//  MyChart
//
//  Created by Matthew Flatau on 1/18/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPLoginErrors.h"
#import "WPTwoFactorSettings.h"
#import "WPLogoutRequest.h"

@class WPLoginToken;

typedef NS_ENUM(NSInteger, WPTermsStatus) {
    WPTermsStatusAccepted,
    WPTermsStatusDeclined,
    WPTermsStatusServerError, //For some reason the accept TC request failed
};

@protocol WPCoreAuthenticationDelegate <NSObject> // implemented by WPViewAuthentication, WPWLoginController, WPAPIWatchAuthentication

/**
 Callback invoked when a login attempt is successful.
 */
- (void)loginSucceeded;

/**
 Callback invoked when a login attempt has failed.
 
 @param error error code will map to WPLoginError enum for various error states that can occur on login.
    NOTE: For simplicity and reuse in other classes it will contain error states for 2-factor validation and failure to accept terms and conditions. However, this function will never return those states. The error will also contain a localizedDescription that can be used for display purposes as a message and a localizedFailureReason that is intended to be used as a title.
 */
- (void)loginFailedWithError:(nonnull NSError *)error;

@optional

/**
 Callback invoked when an intial login attempt is successful, but terms and conditions must be accepted before completing the login process.

 @param showTerms enum indicating which type of terms and conditions to display
 @param completion the completion block to execute when the workflow is complete
 */
- (void)loginRequiresTermsAndConditions:(WPShowTerms)showTerms withCompletion:(nonnull void (^)(WPTermsStatus termsStatus))completion;

/**
 Callback invoked when an intial login attempt is successful, but two-factor must be completed before completing the login process.

 @param twoFactorSettings an object containing information regarding various two factor settings
 @param completion the completion block to execute when the workflow is complete
 */
- (void)loginRequiresTwoFactorWorkflow:(nonnull WPTwoFactorSettings *)twoFactorSettings withCompletion:(nonnull void (^)(BOOL authenticated))completion;

/**
 Callback invoked when an intial login attempt is successful, but a user's password must be reset before completing the login process.

  @param completion the completion block to execute when the workflow is complete
 */
- (void)loginRequiresPasswordResetWithCompletion:(nonnull void (^)(BOOL passwordChangedSucceeded, NSString * _Nullable updatedPassword))completion;

@end

@interface WPCoreAuthentication : NSObject

@property (nullable, nonatomic, strong) WPServer *server;
@property (nonatomic, assign) WPLoginMethod loginMethod;

- (nonnull instancetype)init NS_UNAVAILABLE;
- (nullable instancetype)initWithDelegate:(nonnull id <WPCoreAuthenticationDelegate>)delegate NS_DESIGNATED_INITIALIZER;

/**
 Initiates login with username and password. Called by WPViewAuthentication.
 
 @param username the user's username
 @param password the password entered by the user
 @param deviceID unique identifier for this device/app installation
 @param server server containing URL to log into; on successful login this server can be obtained by [WPServer getCurrentServer]
 */
- (void)loginWithUsername:(nonnull NSString *)username password:(nonnull NSString *)password deviceID:(nonnull NSString *)deviceID server:(nonnull WPServer *)server;

/**
 Initiates login with username and a one-time token.. Called by WPViewAuthentication
 
 @param username the user's username
 @param authenticationToken the one-time authentication token
 @param deviceID unique identifier for this device/app installation
 @param server server containing URL to log into; on successful login this server can be obtained by [WPServer getCurrentServer]
 @param withUsernameEncrypted is the username encrypted
 */
- (void)loginWithUsername:(nonnull NSString *)username authenticationToken:(nonnull NSString *)authenticationToken deviceID:(nonnull NSString *)deviceID server:(nonnull WPServer *)server withUsernameEncrypted:(BOOL)encryptedUsername;

/**
 Does the standard login call but for validation only and does not set any internal state
 *
 @param username the user's username
 @param password the password entered by the user
 @param deviceID unique identifier for this device/app installation
 */
- (void)validateUsername:(nonnull NSString *)username password:(nonnull NSString *)password deviceID:(nonnull NSString *)deviceID;



/**
 Initiates login with a passcode. Called by WPWLoginViewController and WPViewAuthentication.

 @param passcode four digit passcode for server's login token
 @param server server containing URL to log into; on successful login this server can be obtained by [WPServer getCurrentServer]
 */
- (void)loginWithPasscode:(nonnull NSString *)passcode server:(nonnull WPServer *)server;

/**
 Checks if a login token has been setup with a passcode.

 @param server server containing URL to log into
 @return A boolean indicating whetrher or not the user has a passcode set for the server.
 */
+ (BOOL)isPasscodeSetForServer:(nonnull WPServer *)server;


/**
 Initiates login with the specified login token object. Called by WPCoreAuthenication after validating PIN, and WPViewAuthentication
 
 @param username
 @param loginToken secondary login token was loaded from the keychain
 @param deviceID unique identifier for this device/app installation
 @param server server containing URL to log into; on successful login this server can be obtained by [WPServer getCurrentServer]
 */
- (void)loginWithUsername:(nonnull NSString *)username secondaryLoginToken:(nonnull NSString *)loginToken deviceID:(nonnull NSString *)deviceID server:(nonnull WPServer *)server;

/**
 Sends the website name to the server
 */
+ (void)setAffiliateBrandingWebsiteInSession;

/**
 Clears out user state, locale, and theme.
 */
+ (void)cleanupSession:(WPLogoutRequest *_Nullable)logoutRequest;

/**
 Logs the user out. After calling, [WPUser getLoggedInUser] will return null and [WPServer getCurrentServer] will return null. Also logs a logout audit.
 */
+ (void)logout;
@end
