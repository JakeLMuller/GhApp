//
//  WPCreditCardEntryViewController.h
//  iChart
//
//  Created by Jesse Dumke on 7/11/12.
//  Copyright © 2012-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 10/2014 337446 Cleaning up and standardizing keyboard accessory

#import "WPTableViewController.h"
#import "WPCreditCard.h"
#import <UIKit/UIKit.h>

@protocol WPCreditCardEntryDelegate <NSObject>
@required
- (void) enteredCreditCard:(WPCreditCard *)card;
@end

@interface WPCreditCardEntryViewController : WPTableViewController <UITextFieldDelegate>

@property (weak, nonatomic) id <WPCreditCardEntryDelegate> delegate;

@property (weak, nonatomic) IBOutlet UILabel *cardholderNamePrompt;
@property (weak, nonatomic) IBOutlet UILabel *numberPrompt;
@property (weak, nonatomic) IBOutlet UILabel *expirationDatePrompt;
@property (weak, nonatomic) IBOutlet UILabel *expirationDateSeparator;
@property (weak, nonatomic) IBOutlet UILabel *saveCardPrompt;
@property (weak, nonatomic) IBOutlet UILabel *securityCodePrompt;

@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *expirationMonthTextField;
@property (weak, nonatomic) IBOutlet UITextField *expirationYearTextField;
@property (weak, nonatomic) IBOutlet UITextField *numberTextField;
@property (weak, nonatomic) IBOutlet UITextField *securityCodeTextField;
@property (weak, nonatomic) IBOutlet UIImageView *brandImageView;

//Strong IBOutlets
@property (strong, nonatomic) IBOutlet UITableViewCell *cardholderNameTableViewCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *numberTableViewCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *expirationDateTableViewCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *saveCardTableViewCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *securityCodeTableViewCell;

@property (strong, nonatomic) IBOutlet UIView *submitCardView;
@property (weak, nonatomic) IBOutlet UIButton *submitCardButton;

@property (strong, nonatomic) NSMutableArray *allowedBrands;
@property (nonatomic) BOOL saveCard;

- (instancetype)initAndAllowSaveCards:(BOOL)allowSaveCards collectSecurity:(BOOL)collectSecurityCode;
- (IBAction)submitPressed: (id)sender;
- (IBAction)donePressed: (id)sender;
- (IBAction)creditCardNumberEdited: (id)sender;
- (IBAction)expirationMonthEdited:(id)sender;
- (IBAction)expirationYearEdited:(id)sender;

@end
