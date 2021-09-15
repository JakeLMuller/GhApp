//
//  WPInitVideoRequest.h
//  iChart
//
//  Created by Matthew Flatau on 12/16/13.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPInitVideoResponse.h"

@interface WPInitVideoRequest : WPRequest

@property (nonatomic, strong, nullable) NSString *dat;
@property (nonatomic, strong, nullable) WPOrganizationInfo *organization;

-(nonnull WPInitVideoResponse*)allocResponse;

@end

