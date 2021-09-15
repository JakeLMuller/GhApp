//
//  WPCampaignAuditResponse.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/12/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"

/**
 * Represents the response object for web service that audits campaign actions
 */
@interface WPCampaignAuditResponse : WPResponse

-(void)loadFromXMLData:(NSData*)xml;

@end
