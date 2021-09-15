//
//  WPSaveDeviceForPushNotificationsRequest.h
//  MyChart
//
//  Created by Alex J White on 12/4/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPSaveDeviceForPushNotificationsResponse.h"
#import "WPDeviceInfo.h"


typedef NS_ENUM(NSInteger, WPPushStatus) {
    kWPPushStatusUnknown = -1,
    kWPPushStatusNotRegistered = 0,
    kWPPushStatusRegistered = 1,
};

@interface WPSaveDeviceForPushNotificationsRequest : WPRequest

@property (nonatomic,strong)    WPDeviceInfo *device;
@property (nonatomic,strong)    NSString *pnToken;
@property (nonatomic,assign)    BOOL suppressDeviceCreation;
@property (nonatomic,assign)    WPPushStatus pnStatus;



/*
 * Save Device request initialization
 *
 * @param PushNotificationToken Token used for push notifications
 * @param UpdateFlag Flag used to determine whether we are signing up device or updating token
 */
-(instancetype)initWithPushNotificationToken:(NSString *)token suppressDeviceCreation:(BOOL)suppressDeviceCreation;

- (WPSaveDeviceForPushNotificationsResponse *)allocResponse;
@end
