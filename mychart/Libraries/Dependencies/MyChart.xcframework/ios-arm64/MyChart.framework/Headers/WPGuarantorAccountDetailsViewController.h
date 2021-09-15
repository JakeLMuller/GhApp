//
//  WPGuarantorAccountDetailsViewController.h
//  iChart
//
//  Created by Jesse Dumke on 7/4/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *tgupta  09/2014 329241 Adding support for accessibility

#import <UIKit/UIKit.h>
#import "WPTableViewController.h"

@class WPAccountSummary;

@interface WPGuarantorAccountDetailsViewController : WPTableViewController

- (instancetype)initWithAccountSummary:(WPAccountSummary *)accountSummary billIndex:(NSUInteger)index;

- (IBAction)payBill:(id)sender;
- (IBAction)viewStatements:(id)sender;
- (IBAction)viewRecentPayments:(id)sender;
- (IBAction)updatePaperlessStatus:(id)sender;

@end
