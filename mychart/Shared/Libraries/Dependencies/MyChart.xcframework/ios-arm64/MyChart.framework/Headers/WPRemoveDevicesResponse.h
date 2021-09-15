//
//  WPRemoveDevicesResponse.h
//  MyChart
//
//  Created by Alex J White on 5/13/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPRemoveDevicesResult.h"

@interface WPRemoveDevicesResponse : WPResponse

@property (nonatomic, strong) WPRemoveDevicesResult* result;


@end
