//
//  WPRecentPaymentsViewController.h
//  iChart
//
//  Created by Jesse Dumke on 8/13/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPTableViewController.h"

@interface WPRecentPaymentsViewController : WPTableViewController

- (instancetype)initWithPayments:(NSMutableArray *)payments;

@end
