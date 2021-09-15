//
//  WPBillSummary.h
//  MyChart
//
//  Created by Jesse Dumke on 7/4/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPBillBase.h"
#import "WPAccount.h"
#import "WPRecentPayment.h"
#import "WPStatement.h"

/**
 * Model for a billing account summary.
 */
@interface WPBillSummary : WPBillBase

// amount due now on payment plan, if one exists
@property (nonatomic, strong) NSDecimalNumber *amountDueNow;

// flag indicating if payments are accepted
@property (nonatomic, assign) BOOL acceptPayment;

// flag indicating if new info is available for account
@property (nonatomic, assign) BOOL hasNewInfo;

// most recent payment for this account
@property (nonatomic, strong) WPRecentPayment *recentPayment;

// core account information
@property (nonatomic, strong) WPAccount *account;

// most recent statement for this account
@property (nonatomic, strong) WPStatement *recentStatement;

// the type of billing account
@property (nonatomic) BillingAccountType billingAccountType;

@end
