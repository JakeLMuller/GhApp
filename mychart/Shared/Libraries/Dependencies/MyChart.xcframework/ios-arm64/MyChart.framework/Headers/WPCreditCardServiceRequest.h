//
//  WPCreditCardServiceRequest.h
//  iChart
//
//  Created by Jesse Dumke on 7/9/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPAccount.h"

@class WPCreditCardServiceResponse;

typedef NS_ENUM(NSInteger, PaymentWorkflowType) {     //see execProd^WPCCENG  
	kWorkflowProfessionalPayment = 1,
	kWorkflowHospitalPayment = 2,       
    //3 is "old" e-visit - will not be implemented
	kWorkflowCopayPayment = 4,
    kWorkflowEvisitPayment = 5,   //not implemented yet
    kWorkflowSBOPayment = 6,
    kWorkflowRefillPayment=7    //not implemented yet
} ;

typedef NS_ENUM(NSInteger, TransactionType) {    //see Epic.CreditCard.Interfaces
    kTransactionTypeUnknown = 0,
    kTransactionTypePreAuthorize = 1,
    kTransactionTypePostAuthorize = 2,
    kTransactionTypeCharge = 3,
    kTransactionTypeCredit = 4,
    kTransactionTypeVoid = 5,
    kTransactionTypeTokenization = 6,
    kTransactionTypeGetTransactionStatus = 7,
    kTransactionTypeReAuthorize = 8
} ;

@interface WPCreditCardServiceRequest : WPRequest {
    WPAccount *account_;
    NSString *encounterDAT_;
    NSString *pharmacyID_;
    PaymentWorkflowType workflow_;
}

@property (strong, nonatomic) WPAccount *account;
@property (strong, nonatomic) NSString *encounterDAT;
@property (strong, nonatomic) NSString *pharmacyID;
@property (nonatomic) PaymentWorkflowType workflow;

-(id)initWithAccount:(WPAccount *)payAccount workflow:(PaymentWorkflowType)workflowType;
-(id)initWithDAT:(NSString *)DAT workflow:(PaymentWorkflowType)workflowType;
-(id)initWithPharmacy:(NSString *)pharmacy workflow:(PaymentWorkflowType)workflowType;
-(WPCreditCardServiceResponse*)allocResponse;

@end
