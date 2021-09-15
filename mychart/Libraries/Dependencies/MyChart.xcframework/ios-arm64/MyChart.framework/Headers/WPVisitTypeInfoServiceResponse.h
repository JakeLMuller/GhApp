//
//  WPVisitTypeInfoServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 8/25/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"

@class WPVisitTypeInformation;

@interface WPVisitTypeInfoServiceResponse : WPResponse

@property (nonatomic, strong)  WPVisitTypeInformation *visitTypeInformation;

@end
