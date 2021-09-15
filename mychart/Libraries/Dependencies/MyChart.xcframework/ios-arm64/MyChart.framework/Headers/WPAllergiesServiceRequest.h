//
//  WPAllergiesServiceRequest.h
//  iChart
//
//  Created by Epic on 6/16/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPAllergiesServiceResponse;

/**
 * \brief Requests the users allergies
 *
 * Service: allergies
 */
@interface WPAllergiesServiceRequest : WPRequest {

}

/**
 * Initialize this object
 * By deafult this request:
 * <ul>
 * <li>Can persist data</li>
 * <li>Is Mostly Static</li>
 * <li>Does not need live data</li>
 * </ul>
 */
-(id)init;

/**
 * There is no body for this request
 *
 * @return nil
 */
-(NSData *)XMLData;

/**
 * Allocate a new Response object for this request
 * 
 * @return A WebServerResponse 
 */
-(WPAllergiesServiceResponse*)allocResponse;

@end
