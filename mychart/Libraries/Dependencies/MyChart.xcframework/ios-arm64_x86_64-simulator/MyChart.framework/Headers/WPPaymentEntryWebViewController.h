//
//  WPPaymentEntryWebViewController.h
//  MyChart
//
//  Created by Surender Pal Singh on 2/8/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPActivityWebViewController.h"
#import "WPBillSummary.h"
#import "WPCreditCard.h"

@protocol WPWebPaymentMethodDelegate <NSObject>

@required

/**
 Called with the payment method selection succeeds

 @param evpID The evpID (Credit card ID) of the selected card
 */
- (void)paymentMethodSucceededWithCard:(WPCreditCard *)card;

/**
 Called with the payment method selection fails
 */
- (void)paymentMethodFailed;

@end


@interface WPPaymentEntryWebViewController : WPActivityWebViewController

@property (nonatomic, weak) id <WPWebPaymentMethodDelegate>	delegate;

- (instancetype)initForBillPay:(WPBillSummary*) billSummary;
- (instancetype)initForBillPayWithAcccountID:(NSString *)accountID  context:(NSString *)context;
- (instancetype)initForRxRefillPaymentWithDeptId:(NSString *)deptID andSelectedCardID:(NSString *)evpID;
- (instancetype)initVisitPaymentWithCSN:(NSString *)CSN;

@end
