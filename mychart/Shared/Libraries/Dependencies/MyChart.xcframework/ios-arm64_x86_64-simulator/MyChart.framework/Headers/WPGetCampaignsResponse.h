//
//  WPGetCampaignsResponse.h
//  MyChart
//
//  Created by Varun Vijayvargiya on 8/7/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"

/**
 * Represents the result object for web service to get campaigns for patient
 */
@interface WPGetCampaignsResult : WPObject

@property (strong,nonatomic) NSMutableArray *campaigns;

@end

/**
 * Represents the response object for web service to get campaigns for patient
 */
@interface WPGetCampaignsResponse : WPResponse

@property (nonatomic, strong) WPGetCampaignsResult *campaignsResult;

@end
