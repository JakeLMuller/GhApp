//
//  WPMedicationsRefillServiceResponse.h
//  iChart
//
//  Created by Chetan Satish on 6/21/11.
//  Copyright © 2011-2021  Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
//
#import "WPResponse.h"
#import "WPMedicationRefillResult.h"

@interface WPMedicationsRefillServiceResponse : WPResponse {
	WPMedicationRefillResult *result;
}

@property (nonatomic, strong) WPMedicationRefillResult *result;

@end
