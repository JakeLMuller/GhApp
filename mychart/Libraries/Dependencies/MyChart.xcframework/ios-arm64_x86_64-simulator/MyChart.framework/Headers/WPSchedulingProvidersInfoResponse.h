//
//  WPSchedulingProvidersInfoResponse.h
//  iChart
//
//  Created by Chetan Satish on 8/4/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"
//
@class WPSchedulingProvidersInformation;

@interface WPSchedulingProvidersInfoResponse : WPResponse

@property (nonatomic, strong) WPSchedulingProvidersInformation *schedulingProvidersInformation;

// Comparison function for sorting centers
NSInteger CompareCenters(id center1, id center2, void *context);

@end
