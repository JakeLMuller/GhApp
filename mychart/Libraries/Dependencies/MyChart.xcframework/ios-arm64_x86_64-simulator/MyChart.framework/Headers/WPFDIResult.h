//
//  WPFDIResult.h
//  MyChart
//
//  Created by Yash Vaka on 11/6/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"

typedef NS_ENUM(NSInteger, WPLaunchType)
{
    kWPLaunchTypeUnknown = 0,
    kWPLaunchTypeInternal = 1,
    kWPLaunchTypeExternal = 2,
    kWPLaunchTypeExternalTab = 3,
};

@interface WPFDIResult : WPObject

@property (nonatomic, strong) NSString* url;
@property (nonatomic, assign) WPLaunchType launchMode;
@property (nonatomic, strong) NSString* appStoreUrl;
@property (nonatomic, strong) NSMutableArray *allowedHosts;

@end
