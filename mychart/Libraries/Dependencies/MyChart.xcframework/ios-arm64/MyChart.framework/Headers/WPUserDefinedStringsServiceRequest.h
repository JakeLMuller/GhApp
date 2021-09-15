//
//  WPUserDefinedStringsServiceRequest.h
//  iChart
//
//  Created by Epic on 5/12/10.
//  Copyright © 2010-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPUserDefinedStringsServiceResponse;

/**
 * This service requests the list of user defined strings from the
 * webserver. When the response is created the global variable WPCustomStrings
 * will be defined
 *
 */
@interface WPUserDefinedStringsServiceRequest : WPRequest {

}

-(id)initWithLocale:(NSString *)locale;

/**
 * Allocate the response object
 *
 */
-(WPUserDefinedStringsServiceResponse*)allocResponse;

@end
