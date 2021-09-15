//
//  WPReachability.h
//  iChart
//
//  Created by Chetan Satish on 3/8/13.
//  Copyright © 2013-2021 Epic Systems Corporation. All rights reserved.
//
//  Utility functions to check Internet connection, URL reachability
//
//  *mflatau 03/2015 354336 Adding notification and start and stop notifier for loss of internet

#import <Foundation/Foundation.h>

extern NSString * const WPNotificationReachabilityInternetLost;
extern NSString * const WPNotificationReachabilityWifiLost;

@interface WPReachability : NSObject

/**
 * Returns whether an Internet connection exists.
 */
+ (BOOL)InternetConnectionExists;

/**
 * Returns whether a Wifi connection exists.
 */
+ (BOOL)WifiConnectionExists;

/**
 * Returns whether the host name is reachable
 * @param hostName - eg. "www.epic.com", "epic14153.dhcp.epic.com"
 */
+ (BOOL)pingHostName: (NSString*) hostName;

/**
 * Returns whether the host name in the URL string is reachable
 * @param URLString - eg. "http://www.epic.com"
 */
+ (BOOL)pingHostFromURLString: (NSString*) URLString;

/*
 * Start listening for reachability notifications on the current run loop.
 */
+ (BOOL)startNotifier;
+ (void)stopNotifier;

@end
