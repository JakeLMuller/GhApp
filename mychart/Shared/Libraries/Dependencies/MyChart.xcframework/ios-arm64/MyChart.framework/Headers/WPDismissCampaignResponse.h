//
//  WPDismissCampaignResponse.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 10/13/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"

/**
 * Represents the response object for web service that dismisses a campaign
 */
@interface WPDismissCampaignResponse : WPResponse

-(void)loadFromXMLData:(NSData*)xml;

@end
