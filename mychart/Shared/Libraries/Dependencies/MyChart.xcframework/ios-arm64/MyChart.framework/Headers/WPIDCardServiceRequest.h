//
//  IDCardServiceRequest.h
//  iChart
//
//  Created by Sanders Baik on 3/27/14.
//  Copyright © 2014-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPIDCardServiceResponse;

/**
 * \brief Requests the users ID card
 *
 * Service: 
 */
@interface WPIDCardServiceRequest : WPRequest

/**
 * Initialize this object
 * By default this request:
 * <ul>
 * <li>Can persist data</li>
 * <li>Is Mostly Static</li>
 * <li>Does not need live data</li>
 * </ul>
 */
-(instancetype)initWithCoverage:(NSString *)cvgId;

/**
 * Allocate a new Response object for this request
 *
 * @return A WebServerResponse
 */
-(WPIDCardServiceResponse*)allocResponse;

@end
