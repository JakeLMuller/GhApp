//
//  WPMedicationsRefillServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 6/21/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
//
#import "WPRequest.h"
#import "WPMedicationForRefill.h"
#import "WPCreditCard.h"
#import "WPCreditCardServiceRequest.h"
#import "WPPharmacyDeliveryMethod.h"

@class WPMedicationsRefillServiceResponse;

@interface WPMedicationsRefillServiceRequest : WPRequest {

	NSArray *medicationList;
	NSString *pharmacyID;
	NSString *pharmacyName;
	NSString *date;
	NSString *time;
	NSString *comments;
    WPPharmacyDeliveryMethod *deliveryMethod_;
    WPObject *paymentMethod_;
    
    PaymentWorkflowType workflow_;
    TransactionType transactionType_;
    WPCreditCard *card_;
    NSString *amount_;
}

@property (nonatomic, strong) NSArray *medicationList;
@property (nonatomic, strong) NSString *pharmacyID;
@property (nonatomic, strong) NSString *pharmacyName;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSString *time;
@property (nonatomic, strong) NSString *comments;
@property (nonatomic, strong) WPPharmacyDeliveryMethod *deliveryMethod;
@property (nonatomic, strong) WPObject *paymentMethod;
@property (nonatomic) PaymentWorkflowType workflow;
@property (nonatomic) TransactionType transactionType;
@property (strong, nonatomic) WPCreditCard *card;
@property (strong, nonatomic) NSString *amount;


-(WPMedicationsRefillServiceResponse*)allocResponse;

@end
