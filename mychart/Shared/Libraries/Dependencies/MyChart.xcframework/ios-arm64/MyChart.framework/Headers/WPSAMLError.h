//
//  WPSAMLError.h
//  MyChart
//
//  Created by Matt Flatau on 10/10/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"

typedef NS_ENUM(NSInteger, WPSAMLLoginStatus) {
    WPSAMLLoginStatusSuccess = 0,
    //The following enum values map to SAMLLoginStatus in interconnect
    WPSAMLLoginStatusPending = 1,
    WPSAMLLoginStatusInvalidConfiguration = 2,
    WPSAMLLoginStatusConfigurationAbsent = 3,
    WPSAMLLoginStatusInvalidCredential = 4,
    WPSAMLLoginStatusSessionExpired = 5,
    WPSAMLLoginStatusReplayAttack = 6,
    WPSAMLLoginStatusUnknownError = 7,
    //The following enum values map to SAMLPatientLoginStatus in interconnect
    WPSAMLLoginStatusNoPatientAccount = 8,
    WPSAMLLoginStatusNoMyChartAccount = 9,
    WPSAMLLoginStatusNoLoginToken = 10,
    WPSAMLLoginStatusInvalidIdP = 11,
    WPSAMLLoginStatusPatientOnOtherDeployment = 12,
    WPSAMLLoginStatusDatabaseIsReadOnly = 13,
    //The following enum values map to ValidationStatus having error strings in patient engagement
    WPSAMLLoginStatusLoginFailure = 14,
    WPSAMLLoginStatusPasswordExpired = 15,
    WPSAMLLoginStatusLoginInactive = 16,
    WPSAMLLoginStatusLoginDeleted = 17,
    WPSAMLLoginStatusLoginExpired = 18,
    WPSAMLLoginStatusUnauthorizedWebSite = 19,
    WPSAMLLoginStatusNonHomeAccess = 20,
    WPSAMLLoginStatusRehomeOrMergeInProgress = 21,
    WPSAMLLoginStatusRemotelyAuthorized = 22,
    WPSAMLLoginStatusRemoteAuthorizationFailed = 23,
    WPSAMLLoginStatusProxyAccountOnly = 24,
    WPSAMLLoginStatusMaximumAttemptsExceeded = 25,
    WPSAMLLoginStatusSameDeploymentProxyLogin = 26
};

@interface WPSAMLError : WPObject

+ (WPSAMLLoginStatus)loginStatusFromString:(NSString *)string;
+ (NSString *)errorMessageStringFromLoginStatus:(WPSAMLLoginStatus)status;

@end
