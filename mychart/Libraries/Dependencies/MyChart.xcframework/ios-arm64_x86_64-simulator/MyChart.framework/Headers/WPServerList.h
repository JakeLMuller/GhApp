//
//  WPServerList.h
//  MyChart
//
//  Created by Yechan Hong on 12/31/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
//  *yhong   12/2014 342777 A country-state-server layered dictionary that can return flat lists of countries, states, or servers
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <Foundation/Foundation.h>
#import "WPServer.h"

typedef NS_ENUM(NSInteger, WPUserLocation) {
    kWPUserLocationUS,          // United States
    kWPUserLocationUSState,     // A State in the United States
    kWPUserLocationNonUS,		// Non-US Country that has MyChart Mobile
    kWPUserLocationUnknown,		// Neither of the above
} ;

@interface WPServerList : NSObject

- (void) add:(WPServer *)server;
- (NSArray *)getCountryList;
- (NSArray *)getStateListOfCountry:(NSString *)countryCode;
- (NSArray *)getServerListOfCountry:(NSString *)countryCode;
- (NSArray *)getServerListOfState:(NSString *)state inCountry:(NSString *)countryCode;
- (WPUserLocation)classifyState:(NSString *)state inCountry:(NSString *)countryCode;

@end
