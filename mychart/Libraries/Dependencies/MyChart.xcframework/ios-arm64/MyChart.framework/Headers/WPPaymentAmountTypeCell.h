//
//  WPPaymentAmountTypeCell.h
//  iChart
//
//  Created by Jesse Dumke on 8/30/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "WPCustomSelectionTableViewCell.h"

static NSString * const kWPPaymentAmountTypeCellReuseIdentifier = @"WPPaymentAmountTypeCell";

@interface WPPaymentAmountTypeCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *amountType;
@property (nonatomic, weak) IBOutlet UILabel *amount;

@end
