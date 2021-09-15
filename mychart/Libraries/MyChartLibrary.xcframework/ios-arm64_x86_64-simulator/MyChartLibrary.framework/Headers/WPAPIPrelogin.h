//
//  WPAPIPrelogin.h
//  MyChart
//
//  Created by Yash Vaka on 6/14/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPAPIPrelogin : NSObject

/**
 * @brief Provides the sign up view controller instance to be presented modally. Requires that signupurl be entered in settingsForLibraryBuilds.plist
 * @returns the sign up view controller.
 */
+ (nonnull UIViewController *)getSignUpController;

/**
 * @brief Provides the password recovery controller instance to be presented modally. Requires that passwordrecoveryurl be entered in settingsForLibraryBuilds.plist
 * @returns the recover password view controller.
 */
+ (nonnull UIViewController *)getRecoverPasswordController;

/**
 * @brief Provides the username recovery view controller instance to be presented modally. Requires that usernamerecoveryurl be entered in settingsForLibraryBuilds.plist
 * @returns the recover username view controller.
 */
+ (nonnull UIViewController *)getRecoverUsernameController;

/**
 * @brief Provides the password recovery controller instance to be presented modally when user needs to be redirected to resetting their password on exhausting the maximum number of password attempts. This must only be used if the user has
 * exceeded the maximum number of password attempts. This can be determined based on the WPAPILoginErrorCodeMaxAttemptsExceededCanResetPassword login error code in WPAPIAuthentication. This also requires that passwordrecoveryurl be entered in settingsForLibraryBuilds.plist.
 * @returns the reset password view controller.
 */
+ (nonnull UIViewController *)getResetPasswordControllerOnMaxPasswordAttemptsExceeded;

@end
