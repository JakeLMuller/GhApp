//
//  WPSaveDeviceForPushNotificationsResponse.h
//  MyChart
//
//  Created by Alex J White on 12/5/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPSaveDeviceForPushNotificationsResult.h"

@interface WPSaveDeviceForPushNotificationsResponse : WPResponse

@property (nonatomic,strong)	WPSaveDeviceForPushNotificationsResult*	result;
@end
