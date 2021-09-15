//
//  WPGuarantorAccountTableViewController.h
//  iChart
//
//  Created by Jesse Dumke on 7/2/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
#import "WPTableViewController.h"
#import "WPAccountSummary.h"

@class WPAccountServiceRequest;

@interface WPGuarantorAccountTableViewController : WPTableViewController

- (IBAction)signupPaperless:(id)sender;

@end
