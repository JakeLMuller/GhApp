//
//  WPEncounterRequest.h
//  iChart
//
//  Created by Epic on 7/7/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPEncounterResponse;

/**
 * \brief Request detailed information about an encounter
 *
 * Gets vitals, discharge instructions, etc.
 */
@interface WPEncounterRequest : WPRequest {
	NSString* dat;			/**< DAT for the encounter to get */
}

@property (nonatomic,strong) NSString* dat;

/**
 * Initialize this object
 * By deafult this request:
 * <ul>
 * <li>CAN persist data</li>
 * <li>IS Mostly Static</li>
 * <li>Does NOT need live data</li>
 * </ul>
 */
-(id)initWithDAT:(NSString *)DAT;

/**
 * There is no outgoing data for this query
 *
 * @return nil
 */
-(NSData *)XMLData;

/**
 * Allocates a new response object
 *
 * @return a new allocated WPEncounterResponse
 */
-(WPEncounterResponse*)allocResponse;


@end
