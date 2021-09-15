//
//  WPLegacySetPatientDisplayNameResult.h
//  MyChart
//
//  Created by Yechan Hong on 1/14/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPLegacySetPatientDisplayNameResult : WPObject

typedef NS_ENUM(NSInteger, WPLegacyPatientDisplayNameResultStatus){
    kWPDisplayNameResultStatusFailure = 0,
    kWPDisplayNameResultStatusSuccess = 1,
};

@property (nonatomic, assign) WPLegacyPatientDisplayNameResultStatus status;

@end
