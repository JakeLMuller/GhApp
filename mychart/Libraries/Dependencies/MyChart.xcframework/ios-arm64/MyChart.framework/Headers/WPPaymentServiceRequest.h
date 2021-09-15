//
//  WPPaymentServiceRequest.h
//  iChart
//
//  Created by Jesse Dumke on 7/10/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPAccount.h"
#import "WPCreditCardServiceRequest.h"
#import "WPCreditCard.h"

@class WPPaymentServiceResponse;

@interface WPPaymentServiceRequest : WPRequest {
    WPAccount *account_;        //for bill payment
    NSString *encounterDAT_;    //for copay payment
    
    PaymentWorkflowType workflow_;
    TransactionType transactionType_;
    WPCreditCard *card_;
    NSString *amount_;
}

@property (strong, nonatomic) WPAccount *account;
@property (strong, nonatomic) NSString *encounterDAT;
@property (nonatomic) PaymentWorkflowType workflow;
@property (nonatomic) TransactionType transactionType;
@property (strong, nonatomic) WPCreditCard *card;
@property (strong, nonatomic) NSString *amount;

-(id)initWithAccount:(WPAccount *)account workflow:(PaymentWorkflowType)workflow card:(WPCreditCard *)payCard;
-(id)initWithDAT:(NSString *)DAT workflow:(PaymentWorkflowType)workflow card:(WPCreditCard *)payCard;
-(WPPaymentServiceResponse*)allocResponse;

@end
