//
//  WPGuarantorAccountTableCell.h
//  MyChart
//
//  Created by Jesse Dumke on 7/6/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "WPBillingDisplayManager.h"
#import "WPCustomSelectionTableViewCell.h"

@interface WPGuarantorAccountTableCell : WPCustomSelectionTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *serviceArea;
@property (weak, nonatomic) IBOutlet UILabel *accountNumber;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *outstandingBalanceHeightConstraint;
@property (weak, nonatomic) IBOutlet UIView *outstandingBalanceContainer;
@property (weak, nonatomic) IBOutlet UILabel *outstandingBalance;
@property (weak, nonatomic) IBOutlet UILabel *outstandingBalanceLabel;

@property (weak, nonatomic) IBOutlet UIView *separatorView;

@property (weak, nonatomic) IBOutlet UILabel *amountDueLabel;
@property (weak, nonatomic) IBOutlet UIButton *payBillButton;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *amountDueHalfWidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *amountDueFullWidthConstraint;


- (void)setViewToBill:(WPBillSummary *)bill canShowDetails:(BOOL)showDetails;

@end
