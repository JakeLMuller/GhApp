//
//  WPTicketServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 6/25/10.
//  Copyright © 2010-2021 Epic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPTicketServiceResponse;

@interface WPTicketServiceRequest : WPRequest {

}

/**
 * There is no outgoing data for this query
 *
 * @return nil
 */
-(NSData *)XMLData;

/**
 * Allocates a new response object
 *
 * @return a new allocated TickerServiceResponse
 */
-(WPTicketServiceResponse*)allocResponse;

@end
