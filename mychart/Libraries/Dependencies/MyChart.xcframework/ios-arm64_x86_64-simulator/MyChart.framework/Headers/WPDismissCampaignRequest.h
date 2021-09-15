//
//  WPDismissCampaignRequest.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 10/13/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPDismissCampaignResponse.h"

/**
 * Represents the request object for web service that dismisses a campaign
 */
@interface WPDismissCampaignRequest : WPRequest

/**
 * initializes the request with the campaign ID to dismiss
 * @param campaignID of the campaign to be dismissed
 */
- (instancetype)initWithCampaignID:(NSString *)campaignID;

/**
 * allocates the response class for this request class
 */
- (WPDismissCampaignResponse *)allocResponse;

@end
