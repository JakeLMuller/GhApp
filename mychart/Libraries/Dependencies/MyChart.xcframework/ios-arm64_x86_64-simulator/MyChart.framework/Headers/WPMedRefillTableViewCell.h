//
//  WPMedRefillTableViewCell.h
//  iChart
//
//  Created by Chetan Satish on 6/19/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 06/2014 318576 Adding medSelected property

#import <Foundation/Foundation.h>
#import "WPCustomSelectionTableViewCell.h"

static const CGFloat WPMedRefillTableViewCellHeight = 100;//91;cardheight

@interface WPMedRefillTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *medicationName;
@property (nonatomic, weak) IBOutlet UILabel *medicationGenericName;
@property (nonatomic, weak) IBOutlet UILabel *refillsRemaining;
@property (nonatomic, weak) IBOutlet UILabel *refillComment;
@property (nonatomic, weak) IBOutlet UIButton *addCommentButton;
@property (nonatomic, weak) IBOutlet UIImageView *selectedImage;

@property (nonatomic, weak) IBOutlet NSLayoutConstraint *refillCommentTopConstraint;

@property (nonatomic) BOOL checkmark;

@end
