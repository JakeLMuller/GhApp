//
//  WPMARSettingsServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 9/8/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPMARSettingsResult.h"

@interface WPMARSettingsServiceResponse : WPResponse

@property (nonatomic, strong) WPMARSettingsResult *marSettingsResult;

@end
