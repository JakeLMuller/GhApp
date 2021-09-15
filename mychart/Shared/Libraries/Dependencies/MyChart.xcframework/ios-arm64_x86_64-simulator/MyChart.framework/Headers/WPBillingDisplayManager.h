//
//  WPBillingDisplayManager.h
//  iChart
//
//  Created by Jesse Dumke on 7/23/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *tgupta  09/2014 329241 Adding support for accessibility

#import <Foundation/Foundation.h>
#import "WPCreditCard.h"
#import "WPStatement.h"
#import "WPBillDetail.h"
#import "WPAppointment.h"
#import "WPRecentPayment.h"
#import "WPBillSummary.h"

@class WPAccount;

@interface WPBillingDisplayManager : NSObject

#pragma mark - Credit Cards
+ (NSString *)buildDisplayStringExpirationDateFromCreditCard:(WPCreditCard *)card;
+ (NSString *)buildDisplayStringLastFourDigitsFromCreditCard:(WPCreditCard *)card;
+ (NSString *)imagePathForBrand:(CreditCardBrands)brand;
+ (NSString *)brandNameForCreditCard:(CreditCardBrands)brand;

#pragma mark - Amount Due
+ (NSAttributedString *)amountFromBillBase:(WPBillBase *)billSummary;
+ (NSAttributedString *)amountDueTextFromBillSummary:(WPBillSummary *)billSummary;
+ (NSString *)accessibleAmountDueFromBillSummary:(WPBillSummary *)billSummary;
+ (NSString *)dueDisplayFromBillSummary:(WPBillBase *)billSummary forAccessibility:(BOOL)isAccessibilityText;

#pragma mark - Outstanding Balance
+ (NSAttributedString *)outstandingBalanceFromBillSummary:(WPBillSummary *)billSummary;
+ (NSAttributedString *)outstandingBalanceFromBillDetail:(WPBillDetail *)billDetail;

#pragma mark - Other
+ (NSString *)accountNumberTextFromBillSummary: (WPBillSummary *)billSummary;
+ (NSString *)descriptionTextForServiceArea:(NSString *)serviceAreaName accountType:(BillingAccountType)accountType;
+ (NSString *)textForAccountType:(BillingAccountType)accountType;
+ (NSString *)textForPaymentType:(PaymentAmountType)paymentAmountType;

+ (NSString *)lastPaymentTextFromBillSummary:(WPBillSummary *)billSummary forAccessibility:(BOOL)isAccessibilityText;
+ (NSString *)textForRecentPayment:(WPRecentPayment *)payment forAccessibility:(BOOL)isAccessibilityText;
+ (NSString *)headerTextForAppointment:(WPAppointment *)appointment;
+ (NSString *)latestStatementTextFromStatement:(WPStatement *)statement forAccessibility:(BOOL)isAccessibilityText;

#pragma mark - images
+ (UIImage *)localizedMakePaymentImage;
+ (UIImage *)localizedPastPaymentImage;

@end
