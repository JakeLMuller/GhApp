//
//  WPUtil_Library.h
//  MyChart
//
//  Created by Chetan Satish on 11/25/14.
//  Copyright (c) 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@class WPServer;
@class WPPatientContext;
@class WPUser;
@class WPLUser;

/*!
 * @brief Library Utility used for shared functions that should be hidden from library header files.
 */
@interface WPUtil_Library : NSObject

/*
 * @brief Returns whether or not this build is being used for a library
 */
+ (BOOL)isBrandedApp;

/*
 * @brief Returns whether or not this build is a vanilla app
 */
+ (BOOL)isVanillaApp;

/*
 * @brief Returns whether or not this build is an Epic-submitted app
 */
+ (BOOL)isEpicSubmittedApp;

/*
 * @brief Returns whether or not this build is a self-submitted app
 */
+ (BOOL)isSelfSubmittedApp;

/*
 * @brief Returns whether the logout Button needs to be enabled
 */
+ (BOOL)shouldEnableLogoutButton;

/*
 * @brief Set this build to be self-submitted app or not
 * @param selfSubmitted whether this build should be self-submitted app or not
 */
+ (void)setSelfSubmittedApp:(BOOL)selfSubmitted;

/*
 * @brief Returns if this is a library build whether to use our internal idle timer
 */
+ (BOOL)isIdleTimerEnabled;

/*
 * @brief Returns the name of the keychain group to use to communicate between App and Apple Watch.
 */
+ (NSString *)brandedKeychainGroup;

/*!
 * @brief Returns a server with the specifications set in the SettingsForLibraryBuilds.plist
 */
+(WPServer *)serverFromLibrarySettings;


#pragma mark - helpers

/*!
 * @brief Returns whether or not this build is a branded app that supports push notifications
 */
+ (BOOL)supportsBrandedAppPushNotifications;

/*!
 * @brief Returns whether or not the homepage menus should be loaded upon library login
 */
+ (BOOL)shouldLoadHomepageMenus;

/**
 * @brief Returns the internal index for the interface patient object
 */
+ (NSInteger)indexForPatient:(id <IWPPatient>)patient;

/**
* @brief Returns the internal index for the interface person object
*/
+ (NSInteger)indexForPerson:(id <IWPPerson>)person;

/// Is this a test library
+ (BOOL)isTestLibrary;

/*!
 * @brief: Checks if this is configured as a test library and if so if it has expired
 */
+ (BOOL)isTestLibraryAndExpired;

/*!
 * @brief: If library is a test lib expired returns the error message to display
 */
+ (NSString *)testLibraryExpiryMessage;

/*!
 * @brief Get custom webview configuration
 */
+ (WKWebViewConfiguration *)getCustomConfiguration;

/*!
 * @brief Set custom webview configuration
 */
+ (void) setCustomConfiguration:(WKWebViewConfiguration *)config;

/*!
 * @brief Allow orgs to turn off the To Do theme in their branded apps
 */
+ (BOOL)shouldTurnOffToDoTheme;

/*!
 * @brief Allow orgs to suppress homepage onboarding in their self-submitted apps
 */
+ (BOOL)shouldSuppressHomepageOnboarding;

/*!
 * @brief Allow orgs to turn off the Mobile App Review health feed card
 */
+ (BOOL)isAppReviewCardTurnedOff;

/*!
 * @brief Check if this is a self submitted build and if the new homepage is being implemented
 */
+ (BOOL)isSelfSubmittedCustomerUsingHomePage;
/**
 Setting the testing URL pointing to an Interconnect server
 This is testing only.
 
 @param url full URL pointing to an Interconnect server
 @param orgId optional organizaiton identifier
 */
+ (void)setInterconnectTestingUrl:(NSString *)url andOrganizationId:(NSString *)orgId;


@end
