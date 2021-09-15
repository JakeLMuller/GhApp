//
//  WPLegacyRemovePatientPhotoResult.h
//  MyChart
//
//  Created by Yechan Hong on 1/14/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPLegacyRemovePatientPhotoResult : WPObject

typedef NS_ENUM(NSInteger, WPLegacyRemovePatientPhotoResultStatus){
    kWPRemovePhotoResultStatusFailure = 0,
    kWPRemovePhotoResultStatusSuccess = 1,
};

@property (nonatomic, assign) WPLegacyRemovePatientPhotoResultStatus status;

@end
