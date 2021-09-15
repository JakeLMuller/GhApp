//
//  WPGetCampaignDetailResponse.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/24/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"

/**
 * Represents the result object for web service to get details about a given campaign
 */
@interface WPGetCampaignDetailResult : WPObject

@property (nonatomic,strong) NSString* campaignDetail;

@end

/**
 * Represents the response object for web service to get details about a given campaign
 */
@interface WPGetCampaignDetailResponse : WPResponse

@property (nonatomic,strong) WPGetCampaignDetailResult* result;

-(void)loadFromXMLData:(NSData*)xml;

@end

