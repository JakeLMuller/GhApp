//
//  WPMedRefillViewController.h
//  iChart
//
//  Created by Chetan Satish on 6/20/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 06/2014 318576 Changing to subclass WPTableViewController
//  *mflatau 07/2014 310985 Cleaning up code
//  *mflatau 10/2014 337446 Standardizing keyboard accessory

#import <UIKit/UIKit.h>
#import "WPPharmaciesViewController.h"
#import "WPPharmacyDeliveryMethodViewController.h"
#import "WPPaymentEntryViewController.h"
#import "WPCustomSelectionTableViewCell.h"
#import "WPPaymentEntryWebViewController.h"

@interface WPMedRefillViewController : WPTableViewController <WPPharmaciesViewDelegate, UITextViewDelegate, WPMethodsViewDelegate, WPPaymentSourceEntryDelegate, WPWebPaymentMethodDelegate>

@property (strong, nonatomic)	NSArray *medicationOrderList;
@property (strong, nonatomic)	NSDate *pickupDate;
@property (strong, nonatomic)	NSMutableArray *pharmacies;
@property (strong, nonatomic)   WPPharmacyDeliveryMethod *selectedDeliveryMethod;
@property (strong, nonatomic)   WPObject *selectedPaymentMethod;
@property (strong, nonatomic)   WPCreditCard *selectedCard;
@property (strong, nonatomic)   NSString *commonFillPharmacyID;
@property (assign, nonatomic) BOOL allowFreeTextPharmacy;
@property (assign, nonatomic) BOOL showPickupDateTime;
@property (strong, nonatomic)   NSMutableArray *visiblePharmacies;
@property (strong, nonatomic)   NSMutableArray *supportedDeliveryMethods;

//Weak Outlets
@property (weak, nonatomic) IBOutlet UILabel *pickupDateLabel;
@property (weak, nonatomic) IBOutlet UILabel *pickupDatePrompt;
@property (weak, nonatomic) IBOutlet UILabel *pharmLabel;
@property (weak, nonatomic) IBOutlet UILabel *pharmSelect;
@property (weak, nonatomic) IBOutlet UILabel *deliveryMethodPrompt;
@property (weak, nonatomic) IBOutlet UILabel *deliveryMethodLabel;
@property (weak, nonatomic) IBOutlet UILabel *paymentMethodPrompt;
@property (weak, nonatomic) IBOutlet UILabel *paymentMethodLabel;
@property (weak, nonatomic) IBOutlet UILabel *amountPrompt;
@property (weak, nonatomic) IBOutlet UILabel *amountLabel;
@property (weak, nonatomic) IBOutlet UILabel *commentsPlaceholder;
@property (weak, nonatomic) IBOutlet UIImageView *creditCardImageView;
@property (weak, nonatomic) IBOutlet UITextView *comments;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *tableViewBottomLayoutConstraint;
@property (weak, nonatomic) IBOutlet UIButton *requestButton;


@property (weak, nonatomic) IBOutlet UIView *pharmacySeparator;
@property (weak, nonatomic) IBOutlet UIView *pickupDateSeparator;
@property (weak, nonatomic) IBOutlet UIView *commentsSeparator;
@property (weak, nonatomic) IBOutlet UIView *deliveryMethodSeparator;
@property (weak, nonatomic) IBOutlet UIView *paymentMethodSeparator;
@property (weak, nonatomic) IBOutlet UIView *amountSeparator;

//strong Outlets
@property (strong, nonatomic) IBOutlet WPCustomSelectionTableViewCell *pharmacyTableViewCell;
@property (strong, nonatomic) IBOutlet WPCustomSelectionTableViewCell *pickupDateTableViewCell;
@property (strong, nonatomic) IBOutlet WPCustomSelectionTableViewCell *commentsTableViewCell;
@property (strong, nonatomic) IBOutlet WPCustomSelectionTableViewCell *deliveryMethodTableViewCell;
@property (strong, nonatomic) IBOutlet WPCustomSelectionTableViewCell *paymentMethodTableViewCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *medicationsTableViewCell;
@property (strong, nonatomic) IBOutlet UITableViewCell *amountTableViewCell;

- (instancetype)initWithMedications:(NSArray *)medications andFillPharmacies:(NSArray *)fillPharmacies;

- (IBAction)donePressed:(id)sender;
- (IBAction)cancelButtonPressed:(id)sender;

@end
