//
//  WPPaymentAmountEntryViewController.h
//  iChart
//
//  Created by Jesse Dumke on 8/28/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *ssingh  07/2016 425574 Adding one more constructor to allow Other Amount to be focussed in init

#import "WPPopupViewController.h"
#import "WPStatement.h"

@class WPBillSummary;

@protocol WPPaymentAmountEntryViewDelegate <NSObject>
@required
- (void)selectedAmountType:(PaymentAmountType)selectedAmountType amount:(NSDecimalNumber *)amount;
@end

@interface WPPaymentAmountEntryViewController : WPPopupViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>

@property (nonatomic) PaymentAmountType currentSelection;
@property (nonatomic, weak) id<WPPaymentAmountEntryViewDelegate> delegate;

- (instancetype)initWithBillSummary:(WPBillSummary *)billSummary selectedAmountType:(PaymentAmountType)amountType otherAmount:(NSString *)amount;

- (instancetype)initWithBillSummary:(WPBillSummary *)billSummary selectedAmountType:(PaymentAmountType)amountType otherAmount:(NSString *)amount withEditingOtherAmount:(BOOL)editingOtherAmount;


@end
