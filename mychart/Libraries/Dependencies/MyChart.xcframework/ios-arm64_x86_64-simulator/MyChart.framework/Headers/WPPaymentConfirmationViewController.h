//
//  WPPaymentConfirmationViewController.h
//  iChart
//
//  Created by Jesse Dumke on 7/20/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 06/2014 318576 Subclassing WPTableview, Accessibility updates

#import <UIKit/UIKit.h>
#import "WPTableViewController.h"

@class WPBillSummary;
@class WPCreditCard;
@class WPPaymentServiceResult;
@class WPAppointment;
@class WPMedicationRefillPaymentInfoResult;
@class WPMedicationRefillResult;
@class WPPharmacyDeliveryMethod;
@class WPPharmacy;

@interface WPPaymentConfirmationViewController : WPTableViewController

//constructors
- (instancetype)initWithBillSummary:(WPBillSummary *)billSummary
                        paymentCard:(WPCreditCard *)card
                      paymentResult:(WPPaymentServiceResult *)paymentResult;

- (instancetype)initWithAppointment:(WPAppointment *)appointment
                        paymentCard:(WPCreditCard *)card
                      paymentResult:(WPPaymentServiceResult *)paymentResult;

- (instancetype)initWithRefillInfo:(WPMedicationRefillPaymentInfoResult *)refillInfo
             paymentCard:(WPCreditCard *)card 
         refillResult:(WPMedicationRefillResult *)refillResult
         refillOrderList:(NSArray *)orderList 
    refillDeliveryMethod:(WPPharmacyDeliveryMethod *)deliveryMethod 
                pharmacy:(WPPharmacy *)pharmacy;

@end
