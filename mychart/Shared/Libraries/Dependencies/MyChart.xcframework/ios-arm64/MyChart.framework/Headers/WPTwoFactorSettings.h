//
//  WPTwoFactorSettings.h
//  MyChart
//
//  Created by Matthew Flatau on 1/18/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, WPTwoFactorAuthenticationStatus) {
    WPTwoFactorAuthenticationUnknown = 0,
    WPTwoFactorAuthenticationCodeSent = 1,
    WPTwoFactorAuthenticationNotRequired = 2,
    WPTwoFactorAuthenticationNoDestinations = 3,
    WPTwoFactorAuthenticationInvalidDestination = 4,
    WPTwoFactorAuthenticationDisabled = 5,
    WPTwoFactorAuthenticationMustChooseDestination = 6,
    WPTwoFactorAuthenticationCouldNotObtainLock = 7,
    WPTwoFactorAuthenticationEnrollmentRequired = 8
};

@interface WPTwoFactorSettings : NSObject

@property (nonatomic, assign) BOOL canTrustDevice;
@property (nonatomic, assign) WPTwoFactorAuthenticationStatus authenticationStatus;
@property (nonatomic, strong) NSArray *destinationArray;

- (instancetype)initWithAllowedDestinations:(NSString *)destinations;

@end
