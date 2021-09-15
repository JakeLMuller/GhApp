//
//  MedicationsViewController.h
//  iChart
//
//  Created by Epic on 6/25/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *csatish 6/11 207724 Adding Refill Request
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 01/2015 338750 Updating for new driving directions and cleanup
//  *jdumke  02/2015 335592 support prior authorization

#import <UIKit/UIKit.h>
#import "WPUtil_UI.h"
#import "WPTableViewController.h"
#import "WPCardView.h"
#import "WPIconTextButton.h"
#import "WPProviderImageView.h"
#import "WPOrganizationInfo.h"

@class WPMedication;

@interface WPMedicationDetailViewController : WPTableViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) WPMedication *medication;         /* *Basis for the view */
@property (strong, nonatomic) NSMutableArray *medicationList;   /* *list for refill request */
@property (assign, nonatomic) BOOL isAdmittedForMedRefill;      /* whether the patient is admitted, ignoring the admission filter rule in WDF-8055. Used for controlling refill for admitted patients*/

//-- IBOutlets

//Medication Name
@property (strong, nonatomic)   IBOutlet UITableViewCell    *nameCell;
@property (weak, nonatomic)     IBOutlet UILabel            *nameLabel;
//Common Name
@property (weak, nonatomic)     IBOutlet UILabel            *commonNameLabel;
//RX Number
@property (weak, nonatomic)     IBOutlet UILabel            *rxNumberLabel;
//Instructions
@property (strong, nonatomic)   IBOutlet UITableViewCell    *instructionsCell;
@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *instructionsCardBottomPaddingConstraint;
@property (weak, nonatomic)     IBOutlet WPCardView         *instructionsCard;  //Custom view to be whole card or half a card
@property (weak, nonatomic)     IBOutlet UILabel            *instructionsLabel;

@property (weak, nonatomic)     IBOutlet UIImageView        *medFormImageView;
@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *instructionsTextToImageConstraint;
@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *noMedFormImageConstraint;

//Provider
@property (strong, nonatomic)   IBOutlet UITableViewCell    *providerCell;
@property (weak, nonatomic)     IBOutlet UILabel            *providerDateLabel;
@property (weak, nonatomic)     IBOutlet WPProviderImageView  *providerImageView;
@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *providerTextToImageConstraint;
@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *noProviderImageTrailingConstraint;

//Refills
@property (strong, nonatomic)   IBOutlet UITableViewCell    *refillsCell;
@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *refillsCardBottomPaddingConstraint;
@property (weak, nonatomic)     IBOutlet WPCardView         *refillsCard;  //Custom view to be whole card or half a card
@property (weak, nonatomic)     IBOutlet UILabel            *numberOfRefillsLabel;
@property (weak, nonatomic)     IBOutlet UILabel            *refillsSubtitle;
@property (weak, nonatomic)     IBOutlet WPIconTextButton   *requestRefillButton;
@property (weak, nonatomic)     IBOutlet UIImageView        *refillReadyCheckMark;
@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *refillCheckmarkWidthConstraint;
//Pharmacy
@property (strong, nonatomic)   IBOutlet UITableViewCell    *pharmacyCell;
@property (weak, nonatomic)     IBOutlet UILabel            *pharmacyLabel;
@property (weak, nonatomic)     IBOutlet WPIconTextButton   *pharmAddrButton;
@property (weak, nonatomic)     IBOutlet WPIconTextButton   *pharmPhoneButton;

@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *addrAndPhoneButtonWidthConstraint;
@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *pharmAddressButtonHeightConstraint;
@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *pharmPhoneButtonHeightConstraint;
@property (weak, nonatomic)     IBOutlet NSLayoutConstraint *pharmAddrToPhoneButtonPaddingConstraint;
//Prior Authorization
@property (strong, nonatomic)   IBOutlet UITableViewCell    *priorAuthCell;
@property (weak, nonatomic)     IBOutlet UILabel            *priorAuthLabel;
@property (weak, nonatomic)     IBOutlet UILabel            *externalDataLabel;
@property (weak, nonatomic)     IBOutlet UIImageView        *externalDataIcon;

/**
  *Initialize the MedDetailViewCtrlr (MDVC) with the default xib bundle (WPMedicationDetailView)
 */
- (instancetype)init;
- (instancetype)initWithMedication:(WPMedication*)medication andMedicationList:(NSMutableArray*)medicationList isAdmittedForMedRefill:(BOOL)isAdmittedForMedRefill;

/**
  *Clicking on the address button will launch maps
 *
  *@param sender
 */
-(IBAction)getDirections:(id)sender;

/**
  *Attempt to place a phonecall
 *
  *@param sender
 */
- (IBAction)placePhoneCall:(id)sender;
- (IBAction)requestRefillPressed:(id)sender;

@end
