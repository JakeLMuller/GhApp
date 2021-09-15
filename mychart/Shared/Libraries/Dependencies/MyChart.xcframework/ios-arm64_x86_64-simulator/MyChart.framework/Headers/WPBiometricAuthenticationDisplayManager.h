//
//  WPBiometricAuthenticationDisplayManager.h
//  MyChart
//
//  Created by Ben Drda on 4/6/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPServer.h"

static NSString *const kWPBiometricAuthenticationDisplayManagerErrorDomain = @"com.epic.mychart.login.biometricdisplay";

typedef NS_ENUM(NSInteger, WPBiometricAuthenticationDisplayManagerErrorCode) {
    kWPBiometricAuthenticationDisplayManagerErrorNoBiometricAuth,
    kWPBiometricAuthenticationDisplayManagerErrorOSVersion,
    kWPBiometricAuthenticationDisplayManagerErrorOther,
};

typedef NS_ENUM(NSInteger, WPBiometricAuthenticationType) {
    kWPBiometricAuthenticationTypeNone,
    kWPBiometricAuthenticationTypeTouchID,
    kWPBiometricAuthenticationTypeFaceID,
};

@interface WPBiometricAuthenticationDisplayManager : NSObject

+ (void)doAuthenticateToServer:(WPServer *)server withCompletion:(void (^)(NSString *token, NSError *error))block;

+ (WPBiometricAuthenticationType)biometricAuthenticationType;

+ (BOOL)isBiometricAuthenticationAvailable;

/**
 * @brief Determines if a Touch ID error was caused by the user pressing cancel
 **/
+ (BOOL)isErrorUserCanceled:(NSError *)error;

@end
