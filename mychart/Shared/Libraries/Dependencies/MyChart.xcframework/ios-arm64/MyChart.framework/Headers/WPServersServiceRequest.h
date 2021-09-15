//
//  WPServersServiceRequest.h
//  iChart
//
//  Created by Adam on 6/4/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//
//  *csatish 11/2014 340851 Support phonebooks in custom server settings
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPServer;
@class WPServersServiceResponse;

typedef NS_ENUM(NSInteger, WPPhonebookServerType) {
    kWPPhonebookServerTypeCustom,
    kWPPhonebookServerTypeProd,
    kWPPhonebookServerTypeProdBackup,
    kWPPhonebookServerTypeNotSet,
} ;

/*!
 * @brief Requests a list of MyChart webservers
 *
 * Address: kEpicServiceListHost address <br />
 * Service: EpicListMyChartServers
 */
@interface WPServersServiceRequest : WPRequest

@property (nonatomic) WPPhonebookServerType phonebookServerType;
@property (nonatomic) BOOL usingPhonebookServerType;

- (id) initWithPhonebookServerType:(WPPhonebookServerType)serverType;
- (id) initWithPhonebookURLString:(NSString *)phonebookURLString;

/*!
 * @brief Allocate a new Response object for this request
 * 
 * @return A WebServerResponse 
 */
-(WPServersServiceResponse*)allocResponse;

@end
