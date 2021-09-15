//
//  WPSchedulingInfoResponse.h
//  iChart
//
//  Created by Chetan Satish on 8/3/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
//
#import "WPResponse.h"
//
@class WPSchedulingInformation;

@interface WPSchedulingInfoResponse : WPResponse

@property (nonatomic, strong) WPSchedulingInformation *schedulingInformation;

@end
