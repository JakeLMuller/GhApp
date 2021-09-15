//
//  WPStatement.h
//  MyChart
//
//  Created by Jesse Dumke on 8/7/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPObject.h"

typedef NS_ENUM(NSInteger, BillingAccountType) {
	kBillingAccountTypeProfessional = 0,
	kBillingAccountTypeHospital = 1,
	kBillingAccountTypeSBO = 2,
} ;

typedef NS_ENUM(NSInteger, PaymentAmountType) {
    kPaymentAmountTypeAmountDue = 0,
    kPaymentAmountTypeStatementBalance = 1,
    kPaymentAmountTypeOutstandingBalance = 2,
    kPaymentAmountTypeOther = 3,
} ;

@interface WPStatement : WPObject

@property (nonatomic, strong) NSDecimalNumber *balance;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic) BOOL isViewed;
@property (nonatomic, strong) NSString *billNumber;
@property (nonatomic, strong) NSString *imagePath;
@property (nonatomic, strong) NSString *hospitalAccountID;
@property (nonatomic, strong) NSString *serviceAreaName;
@property (nonatomic) BillingAccountType accountType;
@property (nonatomic, strong) NSString *accountId;

/**
 * Indicates whether or not this statement has a balance that is greater than zero.
 *
 * @return BOOL indicating whether or not this statement has a balance that is greater than zero.
 */
- (BOOL)balanceIsPositive;

@end
