//
//  WPAPIUserManager.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/20/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief Interface for managing the user.
 */
@interface WPAPIUserManager : NSObject

/**
 * @deprecated Use getAuthenticationStatus instead
 * @brief Whether a user is logged in
 */
+ (BOOL)isLoggedIn;

/**
 * @brief Returns the currently logged in user
 */
+ (nullable id <IWPUser>)getUser;

/**
 * @brief Returns the authentication status.
 * If the user has not logged in or has timed out, the status is WPAuthenticationStatusNotAuthenticated.
 * If the user has entered the username/passcode but is still in a
 * prelogin workflow, such as terms and conditions or 2FA, the status is
 * WPAuthenticationStatusLimitedAuthentication because the auth ticket is not fully valid.
 * Once the user is fully logged in, the status is WPAuthenticationStatusFullyAuthenticated.
 */
+ (WPAuthenticationStatus)getAuthenticationStatus;

@end
