//
//  WPAuthenticateResult.h 
//  MyChart
//
//  Created by Chetan on 8/17/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"
#import "WPTwoFactorSettings.h"
#import "WPLoginErrors.h"

@class WPFeatures;
/**
 *	Result holder for the Authetication webservice
 */
@interface WPAuthenticateResult : WPObject

@property (nonatomic, strong) NSString *legalName;
@property (nonatomic, strong) NSString *ticket; // Encrypted authentication ticket
@property (nonatomic, strong) NSString *accountID; // MyChart Account ID
@property (nonatomic, strong) NSString *isPatient; // YES if patient, No if non-patient
@property (nonatomic, strong) UIImage *photo;
@property (nonatomic) NSInteger colorIndex;
@property (nonatomic, strong) WPFeatures *featureInformation; // Feature stuff
@property (nonatomic) EpicServicesAvailable2011 available2011Features;
@property (nonatomic) EpicServicesAvailable2012 available2012Features;
@property (nonatomic) EpicServicesAvailable2013 available2013Features;
@property (nonatomic) EpicServicesAvailable2014 available2014Features;
@property (nonatomic) EpicServicesAvailable2015 available2015Features;
@property (nonatomic) EpicServicesAvailable2016 available2016Features;
@property (nonatomic) EpicServicesAvailable2017 available2017Features;
@property (nonatomic) EpicServicesAvailable2018 available2018Features;
@property (nonatomic) EpicServicesAvailable2019 available2019Features;
@property (nonatomic) EpicServicesAvailable2020 available2020Features;
@property (nonatomic) EpicServicesAvailable2021 available2021Features;
@property (nonatomic, assign) WPShowTerms showTerms;
@property (nonatomic, strong) NSString *termsConditions; // Terms and condition
@property (nonatomic, strong) NSString *status;
@property (nonatomic) BOOL readOnlyServer;
@property (nonatomic) NSInteger ticketTimeout;
@property (nonatomic) NSInteger deviceTimeout;
@property (nonatomic, strong) NSString *homeURL;
@property (nonatomic) BOOL isAdmitted;
@property (nonatomic) BOOL isInED;
@property (nonatomic) BOOL isCareCompanionEnrolled;
@property (nonatomic, strong) NSString* nowContextID;
@property (nonatomic) WPEncryptionMethod method; // Selected Encryption method to encrypt the ticket
@property (nonatomic, strong) NSString *twoFactorAllowedDestinations;
@property (nonatomic) WPTwoFactorAuthenticationStatus twoFactorStatus;
@property (nonatomic) BOOL allowTrustedDevices;
@property (nonatomic, assign) NSNumber* communityConsentStatus;
@property (nonatomic) BOOL showNonProductionWarning;
@property (strong, nonatomic) NSMutableArray *allowedServiceAreas;
@property (nonatomic) BOOL isFinlandEnv;
@property (nonatomic, strong) NSMutableArray *allowedHosts;
@property (nonatomic, strong) NSString *ssoUsernameForCache;
@property (nonatomic, strong) NSString *myChartBrandingConfigurationUrl;
@property (nonatomic, strong) NSString *bannerLogoFileName;
@property (nonatomic) BOOL canRedirectToPasswordReset;  // whether the user can be redirected to password recovery if they reached the max number of password attempts
@property (nonatomic) BOOL maxPasswordResetTriesReached;    // whether user has exhausted the max number of password reset attempts
@property (nonatomic, strong) NSMutableArray *educationContentSourceFlags;
@property (nonatomic) BOOL isUsingBluetoothBeacons;

@property (nonatomic, strong) NSString *authUsername; // Username that was logged into


@end
