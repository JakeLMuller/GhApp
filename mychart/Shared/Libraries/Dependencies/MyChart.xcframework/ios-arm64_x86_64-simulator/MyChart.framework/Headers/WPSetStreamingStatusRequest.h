//
//  WPSetStreamingStatusRequest.h
//  iChart
//
//  Created by Matthew Flatau on 12/20/13.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPSetStreamingStatusResponse.h"

@interface WPSetStreamingStatusRequest : WPRequest

@property (nonatomic, strong) NSString *dat;
@property (nonatomic, strong) NSString *videoVisitKey;
@property (nonatomic, assign) WPTelemedicineStreamingStatus streamingStatus;
@property (nonatomic, strong) WPOrganizationInfo *organization;

-(WPSetStreamingStatusResponse*)allocResponse;

@end
