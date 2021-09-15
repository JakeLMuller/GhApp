//
//  WPSlotsServiceResponse.h
//  iChart
//
//  Created by Larry Irwin II on 8/5/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPSlotsInformationResult.h"


@interface WPSlotsServiceResponse : WPResponse

@property (nonatomic, strong) WPSlotsInformationResult* slotsInformation;

@end
