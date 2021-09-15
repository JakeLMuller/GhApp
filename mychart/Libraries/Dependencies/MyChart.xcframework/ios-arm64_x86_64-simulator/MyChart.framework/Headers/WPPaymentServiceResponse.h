//
//  WPPaymentServiceResponse.h
//  iChart
//
//  Created by Jesse Dumke on 7/10/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import "WPResponse.h"
#import "WPCreditCard.h"
#import "WPPaymentServiceResult.h"
#import <Foundation/Foundation.h>

@interface WPPaymentServiceResponse : WPResponse {
    WPPaymentServiceResult* paymentResponse_;
}

@property (nonatomic, strong) WPPaymentServiceResult* paymentResponse;

@end



