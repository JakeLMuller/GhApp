//
//  WPCampaignAuditRequest.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/12/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPCampaignAuditResponse.h"

/**
 * enum that defines what type of action is being audited for campaigns
 * this list directly corresponds to category values from I RCH 1400
 */
typedef NS_ENUM(NSInteger, WPCampaignAuditAction){
    kWPCampaignAuditActionCardSeen = 4,
    kWPCampaignAuditActionInfoLinkClick = 5,
    kWPCampaignAuditActionActionLinkClick = 6
};

/**
 * Represents the request object for web service that audits campaign actions
 */
@interface WPCampaignAuditRequest : WPRequest

/**
 * initializes the request with the campaign ID and the campaign action to audit
 * @param campaignID of the campaign to be audited
 * @param auditAction campaign action to audit with
 */
- (instancetype)initWithCampaignID:(NSString *)campaignID action:(WPCampaignAuditAction)auditAction;

/**
 * allocates the response class for this request class
 */
- (WPCampaignAuditResponse *)allocResponse;

@end
