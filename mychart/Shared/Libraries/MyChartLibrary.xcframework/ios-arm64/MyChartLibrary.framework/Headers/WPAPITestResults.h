//
//  WPAPITestResults.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/23/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

/// API class for test results.
@interface WPAPITestResults : NSObject

/// Returns the corresponding MyChart Now feature name for the test results activity.
@property (class, nonatomic, readonly, nonnull) NSString* myChartNowFeatureName DEPRECATED_MSG_ATTRIBUTE("Use WPAPIMyChartNow to load feature names for MyChart Now activities. This property will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/// Determines whether or not the test results activity can be accessed by the current patient.
+ (WPAPIAccessResult)accessResultForTestResultsList DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/// Provides the test results view controller instance for the current user, to be pushed on to the navigation stack. Returns nil if there is no logged in user or if the patient cannot access test results.
+ (nullable UIViewController *)getTestResultsListController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/// Determines whether or not the test result details activity can be accessed by the current patient.
+ (WPAPIAccessResult)accessResultForTestResultDetails DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/// Provides the test result details view controller instance for the current user, to be pushed on to the navigation stack. Returns nil if there is no logged in user or if the patient cannot access test result details.
/// @param orderID the ID (order ID) for a test result to display the details for
+ (nullable UIViewController *)getTestResultDetailsControllerForResultID:(nonnull NSString *)orderID DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

@end
