//
//  WPDeviceListResponse.h
//  MyChart
//
//  Created by Yechan Hong on 4/16/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPDeviceListResult.h"

@interface WPDeviceListResponse : WPResponse
@property (nonatomic, strong) WPDeviceListResult *getDeviceListResponse;
@end
