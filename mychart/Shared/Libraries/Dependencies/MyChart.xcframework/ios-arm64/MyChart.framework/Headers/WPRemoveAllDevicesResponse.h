//
//  WPRemoveAllDevicesResponse.h
//  MyChart
//
//  Created by Yechan Hong on 4/17/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPRemoveAllDevicesResult.h"

@interface WPRemoveAllDevicesResponse : WPResponse
@property (nonatomic, strong) WPRemoveAllDevicesResult *removeAllDevicesResponse;
@end
