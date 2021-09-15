//
//  WPCampaignButton.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/7/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"

/**
 * Enum for the type of action taken when associated action button tapped
 */
typedef NS_ENUM(NSInteger, WPCampaignActionButtonType)
{
    kWPCampaignActionButtonTypeNone = 0,
    kWPCampaignActionButtonTypeHyperlink = 1,
    kWPCampaignActionButtonTypeScheduling = 2
};

/**
 * Enum for the type of action taken when associated info link tapped
 */
typedef NS_ENUM(NSInteger, WPCampaignInfoButtonType)
{
    kWPCampaignInfoButtonTypeNone = 0,
    kWPCampaignInfoButtonTypeHyperlink = 1,
    kWPCampaignInfoButtonTypePopup = 2,
};

//constant for when no scheduling reason for visit is sent up from database
extern NSInteger const WP_NO_SCHEDULING_REASON_FOR_VISIT;

/**
 * Representation of a button (info link or an action button) on a
 * Campaign for Campaigns outreach
 */
@interface WPCampaignButton : WPObject

@property (nonatomic, strong) NSString* label;
@property (nonatomic, strong) NSString* tooltip;
@property (nonatomic, strong) NSString* destinationUrl;
@property (nonatomic, assign) WPCampaignActionButtonType actionType;
@property (nonatomic, assign) WPCampaignInfoButtonType infoType;
@property (nonatomic, assign) NSInteger schedulingReasonForVisit;
@property (nonatomic, strong) NSString* schedulingWorkflow;
@property (nonatomic, strong) NSString* campaignSchedulingReasonForVisit;

@end
