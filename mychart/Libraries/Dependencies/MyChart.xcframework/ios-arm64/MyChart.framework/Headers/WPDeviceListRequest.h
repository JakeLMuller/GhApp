//
//  WPDeviceListRequest.h
//  MyChart
//
//  Created by Yechan Hong on 4/16/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//


#import "WPRequest.h"
#import "WPDeviceListResponse.h"

@interface WPDeviceListRequest : WPRequest

- (WPDeviceListResponse *)allocResponse;
@end
