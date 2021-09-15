//
//  WPMedicationTableViewCell.h
//  iChart
//
//  Created by Chetan Satish on 4/8/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *jdumke  09/2014 329802 Support pendingUpdate

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

@class WPMedication;

@interface WPMedicationTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *medicationLabel;
@property (nonatomic, weak) IBOutlet UIImageView *pendingUpdatesImage;
@property (weak, nonatomic) IBOutlet UIImageView *readyForPickupImageView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *readyForPickupImageWidth;
@property (weak, nonatomic) IBOutlet UILabel *refillLabel;
@property (weak, nonatomic) IBOutlet UILabel *instructionsLabel;
@property (weak, nonatomic) IBOutlet UIView *separatorView;
@property (weak, nonatomic) IBOutlet UIButton *refillButton;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *noInstructionsHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *buttonContainerHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *pendingUpdateImageWidthConstraint;

- (void)setViewToMedication:(WPMedication *)medication allowRxRefill:(BOOL)allowRxRefill isAdmittedForMedRefill:(BOOL)isAdmittedForMedRefill;

@end
