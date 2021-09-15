//
//  WPMedicationPaymentInfo.h
//  iChart
//
//  Created by Jesse Dumke on 9/3/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@interface WPMedicationPaymentInfo : WPObject {
    BOOL canOrder_;
    NSDecimalNumber *estimatedPrice_;
    NSDecimalNumber *preAuthorizationAmount_;
    NSString *orderID_;
}

@property (nonatomic) BOOL canOrder;
@property (nonatomic, strong) NSDecimalNumber *estimatedPrice;
@property (nonatomic, strong) NSDecimalNumber *preAuthorizationAmount;
@property (nonatomic, strong) NSString *orderID;

@end
