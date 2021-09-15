//
//  WPPostAppointmentServiceResponse.h
//  iChart
//
//  Created by Larry Irwin II on 8/5/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 01/2015 338750 Clean up, modernization

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPPostAppointmentInformationResult.h"


@interface WPPostAppointmentServiceResponse : WPResponse

@property (nonatomic, strong) WPPostAppointmentInformationResult* postAppointmentInformation;

@end
