//
//  WPViewAuthentication.h
//  MyChart
//
//  Created by Matthew Flatau on 2/2/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol WPViewAuthenticationDelegate
/**
 * @brief Callback upon login success.
 */
- (void)loginSucceeded;

/**
 * @brief Callback upon login failure.
 *
 * @param error - Error code will map to WPLoginErrorCode enum for various error states that can occur on login.
 *                The error will also contain a localizedDescription that can be used for display purposes as a
 *                message and a localizedFailureReason that is intended to be used as a title.
 */
- (void)loginFailedWithError:(nonnull NSError *)error;

/**
 * @brief Callback to request a viewcontroller to display two-factor and terms and conditions controllers
 *
 * @return UIViewController
 */
- (nonnull UIViewController *)getPresentationViewController;
@end



@interface WPViewAuthentication : NSObject

/*!
 @brief init disabled because delegate objects are required
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

- (nullable instancetype)initWithDelegate:(nonnull id <WPViewAuthenticationDelegate>)delegate NS_DESIGNATED_INITIALIZER;

/**
 * @brief Initiates login with username and password. Called by WPOrganizationLoginViewController and WPAPIAuthentication
 *
 * @param username
 * @param password
 * @param deviceID - unique identifier for this device/app installation
 * @param server - server containing URL to log into. On successful login this server can be obtained by [WPServer getCurrentServer]
 */
- (void)loginWithUsername:(nonnull NSString *)username password:(nonnull NSString *)password deviceID:(nonnull NSString *)deviceID server:(nonnull WPServer *)server;

/**
 * @brief Initiates login with username and Lucy Token. Called by WPOrganizationLoginViewController and WPAPIAuthentication
 *
 * @param username
 * @param authenticationToken
 * @param deviceID - unique identifier for this device/app installation
 * @param server - server containing URL to log into. On successful login this server can be obtained by [WPServer getCurrentServer]
 * @param encryptedUsername - THe username is encrypted
 */
- (void)loginWithUsername:(nonnull NSString *)username authenticationToken:(nonnull NSString *)authenticationToken deviceID:(nonnull NSString *)deviceID server:(nonnull WPServer *)server withUsernameEncrypted:(BOOL)encryptedUsername;

/**
 * @brief  Initiates login with a passcode. Called by WPOrganizationLoginViewController and WPAPIAuthentication
 *
 * @param passcode - four digit passcode for server's login token
 * @param server - server containing URL to log into. On successful login this server can be obtained by [WPServer getCurrentServer]
 */
- (void)loginWithPasscode:(nonnull NSString *)passcode server:(nonnull WPServer *)server;

/**
 * @brief Checks if a login token has been setup with a passcode
 *
 * @param server - server containing URL to log into.
 */
+ (BOOL)isPasscodeSetForServer:(nonnull WPServer *)server;

/**
 * @brief  Initiates login with a touchID. Called by WPOrganizationLoginViewController and WPAPIAuthentication
 *
 * @param server - server containing URL to log into. On successful login this server can be obtained by [WPServer getCurrentServer]
 */
- (void)loginWithBiometricAuthenticationToServer:(nonnull WPServer *)server;

/**
 * @brief  Checks if a login token has been setup for touch ID.
 *
 * @param server - server containing URL to log into.
 */
+ (BOOL)isBiometricAuthenticationSetForServer:(nonnull WPServer *)server;

/**
 * @brief Logs the user out.
 */
+ (void)logout;
@end
