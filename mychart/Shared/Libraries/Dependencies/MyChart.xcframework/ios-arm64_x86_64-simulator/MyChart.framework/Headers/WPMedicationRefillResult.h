//
//  WPMedicationRefillResult.h
//  iChart
//
//  Created by Chetan Satish on 6/23/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
//
#import "WPObject.h"
#import "WPPaymentServiceResult.h"

@interface WPMedicationRefillResult : WPObject {
	NSString *status_;
	BOOL onShadow_;
	NSArray *refilledMedications_;
	NSArray *RARMedications_;
    WPPaymentServiceResult *paymentResponse_;
}

@property (nonatomic, strong) NSString *status;
@property (nonatomic, assign) BOOL onShadow;
@property (nonatomic, strong) NSArray *refilledMedications;
@property (nonatomic, strong) NSArray *RARMedications;
@property (nonatomic, strong) WPPaymentServiceResult *paymentResponse;

@end
