//
//  WPCampaignCard.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/7/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"
#import "IWPCacheableImageSource.h"

@class WPCampaignButton;

/**
 * Representation of a Campaign for a Campaigns outreach
 */
@interface WPCampaignCard : WPObject <IWPCacheableImageSource>

@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* text;
@property (nonatomic, strong) NSString* imageUrl;
@property (nonatomic, strong) NSString* campaignID;
@property (nonatomic, strong) NSArray* buttons;
@property (nonatomic, assign) BOOL wasRequested;
@property (nonatomic, assign) BOOL wasScheduled;
@property (nonatomic, strong) NSDate* actionLinkLastClickedDate;

/**
 * Gets the info link for the campaign. assumes there is at most one
 * @returns info link button object
 */
- (WPCampaignButton *) infoButton;

/**
 * Gets the action link for the campaign. assumes there is at most one
 * @returns action link button object
 */
- (WPCampaignButton *) actionButton;

/**
 * Determines if the campaign action is considered 'complete' by a previously campaigns initiated workflow
 * @returns boolean
 */
-(BOOL) actionConsideredComplete;

/**
 * Determines if a campaign has a last visited date. This concept only applies to Hyperlink action types.
 */
-(BOOL) hasLastVisitedDate;
@end

