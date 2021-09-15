//
//  WPRefillPaymentServiceResponse.h
//  iChart
//
//  Created by Jesse Dumke on 9/5/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPMedicationRefillResult.h"

@interface WPRefillPaymentServiceResponse : WPResponse {
    WPMedicationRefillResult *medicationRefillWithPaymentResponse_;
}

@property (nonatomic, strong) WPMedicationRefillResult *medicationRefillWithPaymentResponse;

@end
