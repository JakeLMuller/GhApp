//
//  WPAPIServer.h
//  MyChart
//
//  Created by Shawn Zhao on 3/20/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPAPIServer : NSObject

/**
 This is for TESTING ONLY! Call this API to change Interconnect servers. This works only at pre-login.

 @param url Full URL pointing to an Interconnect server. Or empty string to clear the previously set URL.
 */
+(void) setInterconnectTestingUrl:(NSString *)url;

/**
 This is for TESTING ONLY! Call this API to change Interconnect servers. This works only at pre-login.

 @param url Full URL pointing to an Interconnect server. Or empty string to clear the previously set URL.
 @param url Optional identifier for your organization.
 */
+(void) setInterconnectTestingUrl:(NSString *)url andOrganizationId:(NSString *)orgId;

@end
