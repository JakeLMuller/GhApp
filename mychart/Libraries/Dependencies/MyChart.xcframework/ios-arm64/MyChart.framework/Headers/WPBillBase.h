//
//  WPBillBase.h
//  MyChart
//
//  Created by Matthew Flatau on 6/8/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"
#import "WPPaymentPlan.h"

/**
 * Shared baseclass for WPBillSummary and WPBillDetail
 */
@interface WPBillBase : WPObject

// outstanding balance for this account
@property (nonatomic, strong) NSDecimalNumber *outstandingBalance;

// amount due for this account
@property (nonatomic, strong) NSDecimalNumber *amountDue;

// payment plan info for this account
@property (nonatomic, strong) WPPaymentPlan *paymentPlan;

/**
 * Indicates whether or not this account has an outstanding balance that is greater than zero.
 *
 * @return BOOL indicating whether or not this account has an outstanding balance that is greater than zero.
 */
- (BOOL)outstandingBalanceIsPositive;

/**
 * Get the amount that is currently owed for this account. This amount is calculated from the amount due for
 * the account overall, the amount due for any payment plans, and the overall outstanding balance for the account.
 *
 * @return The amount that is currently owed for this account.
 */
- (NSDecimalNumber *)amountToPay;

/**
 * Indicates whether or not the amount owed for this account is the same as the outstanding balance for this account.
 *
 * @return BOOL indicating whether or not the amount owed is the same as the outstanding balance.
 */
- (BOOL)amountToPayIsEqualToBalance;

@end
