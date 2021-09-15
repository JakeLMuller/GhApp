//
//  WPPaperlessSignupViewController.h
//  iChart
//
//  Created by Jesse Dumke on 8/14/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 10/2014 337446 Removing unnecessary vars and standardizing keyboard accessory

#import <UIKit/UIKit.h>
#import "WPTableViewController.h"
#import "WPPaperlessOptions.h"

@class WPPaperlessSignupOptionsRequest;
@class WPPaperlessChangeStatusRequest;

@interface WPPaperlessSignupViewController : WPTableViewController <UITextFieldDelegate>

@property (strong, nonatomic) WPAccountSummary *accountSummary;

//Weak IBOutlets
@property (weak, nonatomic) IBOutlet UILabel *emailPrompt;
@property (weak, nonatomic) IBOutlet UILabel *emailTicklerPrompt;
@property (weak, nonatomic) IBOutlet UILabel *phonePrompt;
@property (weak, nonatomic) IBOutlet UILabel *phoneTicklerPrompt;
@property (weak, nonatomic) IBOutlet UILabel *confirmationPrompt;
@property (weak, nonatomic) IBOutlet UITextField *emailTextField;
@property (weak, nonatomic) IBOutlet UITextField *phoneTextField;

//Strong IBOutlets
@property (strong, nonatomic) IBOutlet UITableViewCell *emailTableViewCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *emailTicklerTableViewCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *phoneTableViewCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *phoneTicklerTableViewCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *confirmationTableViewCell;


@property (strong, nonatomic) IBOutlet UIView *paperlessFooterView;
@property (strong, nonatomic) IBOutlet UIButton *signupPaperlessButton;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *tableBottomConstraint;

- (instancetype)initWithAccountSummary:(WPAccountSummary *)summary;
- (IBAction)signupForPaperless:(id)sender;
- (IBAction)donePressed:(id)sender;
- (IBAction)emailEdited:(id)sender;
- (IBAction)phoneEdited:(id)sender;

@end
