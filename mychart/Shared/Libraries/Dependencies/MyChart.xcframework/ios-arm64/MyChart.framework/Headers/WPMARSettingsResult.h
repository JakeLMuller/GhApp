//
//  WPMARSettingsResult.h
//  MyChart
//
//  Created by Ashwin Pallikarana Tirumala on 7/24/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"
#import "WPMedicalAdviceSettings.h"

@interface WPMARSettingsResult : WPObject

@property (strong, nonatomic) WPMedicalAdviceSettings* settings;
@property (strong, nonatomic) NSString* medicalAdviceHeader;

@end
