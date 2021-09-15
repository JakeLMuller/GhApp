//
//  WPRemoveDevicesRequest.h
//  MyChart
//
//  Created by Alex J White on 5/13/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPRemoveDevicesResponse.h"

@interface WPRemoveDevicesRequest : WPRequest

@property (nonatomic, strong) NSArray *arrayOfDevicesToRemove;

- (instancetype) initWithListOfDevices:(NSArray *)arrayOfDevicesToRemove;

/**
 * Allocate a new Response object for this request
 *
 * @return An RemoveDeviceResponse object
 */
-(WPRemoveDevicesResponse *)allocResponse;



@end
