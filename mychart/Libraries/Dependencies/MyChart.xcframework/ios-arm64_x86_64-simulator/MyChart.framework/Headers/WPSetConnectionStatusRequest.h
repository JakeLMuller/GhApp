//
//  WPSetConnectionStatusRequest.h
//  iChart
//
//  Created by Matthew Flatau on 12/16/13.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPSetConnectionStatusResult.h"
#import "WPTelemedicineConstants.h"

@class WPSetConnectionStatusResponse;

@interface WPSetConnectionStatusRequest : WPRequest

@property (nonatomic, strong) NSString *dat;
@property (nonatomic, strong) NSString *videoVisitKey;
@property (nonatomic, assign) WPTelemedicineConnectionStatus connectionStatus;
@property (nonatomic, strong) WPOrganizationInfo *organization;

-(WPSetConnectionStatusResponse*)allocResponse;

@end

