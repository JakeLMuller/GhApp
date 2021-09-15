//
//  WPRefillPaymentServiceRequest.h
//  iChart
//
//  Created by Jesse Dumke on 9/5/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPCreditCard.h"
#import "WPCreditCardServiceRequest.h"
#import "WPPharmacyDeliveryMethod.h"

@class WPRefillPaymentServiceResponse;

@interface WPRefillPaymentServiceRequest : WPRequest {
    //refill information
    NSArray *refillOrders_;
    NSString *pharmacyID_;
    NSString *comments_;
    WPPharmacyDeliveryMethod *deliveryMethod_;
    
    PaymentWorkflowType workflow_;
    TransactionType transactionType_;
    WPCreditCard *card_;
    NSString *amount_;
}

@property (strong, nonatomic) NSArray *refillOrders;
@property (strong, nonatomic) NSString *pharmacyID;
@property (strong, nonatomic) NSString *comments;
@property (strong, nonatomic) WPPharmacyDeliveryMethod *deliveryMethod;
@property (nonatomic) PaymentWorkflowType workflow;
@property (nonatomic) TransactionType transactionType;
@property (strong, nonatomic) WPCreditCard *card;
@property (strong, nonatomic) NSString *amount;

-(id)initWithRefillPharmacy:(NSString *)pharmacy card:(WPCreditCard *)payCard;
-(WPRefillPaymentServiceResponse *)allocResponse;

@end
