//
//  WPLegacySetPatientPhotoResult.h
//  MyChart
//
//  Created by Yechan Hong on 1/14/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPLegacySetPatientPhotoResult : WPObject

typedef NS_ENUM(NSInteger, WPLegacyPatientPhotoResultStatus){
    kWPPhotoResultStatusFailure = 0,
    kWPPhotoResultStatusSuccess = 1,
};

@property (nonatomic, assign) WPLegacyPatientPhotoResultStatus status;

@end
