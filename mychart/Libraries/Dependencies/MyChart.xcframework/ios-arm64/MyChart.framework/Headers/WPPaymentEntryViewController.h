//
//  WPPaymentEntryViewController.h
//  iChart
//
//  Created by Jesse Dumke on 7/9/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 06/2014 318576 Subclassing WPTableview, Accessibility updates
//  *tgupta  09/2014 329241 Adding support for accessibility
//  *mflatau 10/2014 337446 Standardizing keyboard accessory
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM
//  *mflatau 09/2015 388643 Using instancetype

#import <UIKit/UIKit.h>
#import "WPCreditCardsViewController.h"
#import "WPCreditCardEntryViewController.h"
#import "WPPaymentAmountEntryViewController.h"

@class WPBillSummary;
@class WPAppointment;
@class WPMedicationRefillPaymentInfoResult;

@protocol WPPaymentSourceEntryDelegate <NSObject>
@required
- (void) selectedCard:(nullable WPCreditCard *)card;
@end

@interface WPPaymentEntryViewController : WPTableViewController <UITextFieldDelegate, WPCreditCardsViewDelegate, WPCreditCardEntryDelegate, WPPaymentAmountEntryViewDelegate>

@property (nonatomic, weak, nullable) id <WPPaymentSourceEntryDelegate>	delegate;

@property (weak, nonatomic, nullable) IBOutlet UIImageView *disclosureIndicator;
//constructors
- (nullable instancetype)initWithBillSummary:(nullable WPBillSummary *)billSummary;
- (nullable instancetype)initWithAppointment:(nullable WPAppointment *)appointment;
- (nullable instancetype)initWithRefillInfo:(nullable WPMedicationRefillPaymentInfoResult *)refillInfo
                   refillOrderList:(nullable NSArray *)orderList
                        pharmacyId:(nullable NSString *)pharmacyId;

- (IBAction)submitPressed:(nullable id)sender;
- (IBAction)donePressed:(nullable id)sender;

@end
