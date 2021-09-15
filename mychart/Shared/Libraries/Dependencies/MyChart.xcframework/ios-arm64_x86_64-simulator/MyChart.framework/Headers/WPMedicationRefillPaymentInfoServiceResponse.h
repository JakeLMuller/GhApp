//
//  WPMedicationRefillPaymentInfoServiceResponse.h
//  iChart
//
//  Created by Jesse Dumke on 9/3/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPMedicationRefillPaymentInfoResult.h"

@interface WPMedicationRefillPaymentInfoServiceResponse : WPResponse {
    WPMedicationRefillPaymentInfoResult *result_;
}

@property (nonatomic, strong) WPMedicationRefillPaymentInfoResult *result;

@end
