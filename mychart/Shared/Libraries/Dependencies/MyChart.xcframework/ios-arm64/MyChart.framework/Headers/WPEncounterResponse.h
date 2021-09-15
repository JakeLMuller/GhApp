//
//  WPEncounterResponse.h
//  iChart
//
//  Created by Adam on 7/7/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 01/2015 338750 Cleaning up

#import <Foundation/Foundation.h>

#import "WPResponse.h"

@class WPEncounter;

/**
 * \brief Returns an encounter
 */
@interface WPEncounterResponse : WPResponse

@property (nonatomic, strong) WPEncounter* encounter;

/**
 * A WPEncounter is created
 *
 * @param xml The XML server data
 */
-(void)loadFromXMLData:(NSData*)xml;

@end
