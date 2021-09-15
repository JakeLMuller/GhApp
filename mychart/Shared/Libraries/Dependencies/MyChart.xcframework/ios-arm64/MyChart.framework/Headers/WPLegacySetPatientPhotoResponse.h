//
//  WPLegacySetPatientPhotoResponse.h
//  MyChart
//
//  Created by Yechan Hong on 1/14/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPLegacySetPatientPhotoResult.h"

@interface WPLegacySetPatientPhotoResponse : WPResponse

@property (strong, nonatomic) WPLegacySetPatientPhotoResult *result;

@end
