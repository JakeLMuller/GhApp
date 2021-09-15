//
//  WPDeviceInfo.h
//  iChart
//
//  Created by Ben Drda on 8/21/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 08/2015 Adding currentDeviceInfo getter
//  *alwhite 380193 10/15 Created AppID

#import "WPObject.h"

typedef NS_ENUM(NSInteger, WPPushNotificationStatus) {
    kWPPushNotificationStatusInActive = 0,
    kWPPushNotificationStatusActive = 1,
} ;

/*!
 @brief Model representing a flowsheets device. Name and ID are populated through WPObject.
 @author Ben Drda
 */
@interface WPDeviceInfo : WPObject

+ (WPDeviceInfo *)currentDeviceInfo;
/*!
 @brief Secondary information about the device.
 */
@property (nonatomic, strong) NSString *info;
/*!
 @brief The time/date the device was linked to this pt according to the server
 */
@property (nonatomic, strong) NSDate *linkedInstantUTC;

@property (nonatomic, strong) NSDate *lastLoginInstantUTC;
@property (nonatomic, strong) NSString *model;
@property (nonatomic, strong) NSString *appID;

//properties created for push notifications
@property (nonatomic, assign) BOOL isDevBuild;
@property (nonatomic, strong) NSString *OSVersion;
@property (nonatomic, strong) NSString *PNToken;
@property (nonatomic, assign) WPPushNotificationStatus PNStatus;    //WPR 1045
@property (nonatomic, strong) NSString *appIDTitle;

@end
