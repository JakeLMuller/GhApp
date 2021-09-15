//
//  WPTableViewCardTableViewCell.h
//  MyChart
//
//  Created by Alex J White on 1/14/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

@interface WPTableViewCardTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic,weak) IBOutlet UILabel *mainLabel;
@property (nonatomic,weak) IBOutlet UILabel *extraLabel;
@property (weak, nonatomic) IBOutlet UILabel *subTitleLabel;

@property (nonatomic,weak) IBOutlet UIImageView *icon;
@property (nonatomic, weak) IBOutlet InlineEducationView *educationView;

@property (weak, nonatomic) IBOutlet UIButton *externalDataLabel;
@property (weak, nonatomic) IBOutlet UIButton *externalDataButton;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *externalDataButtonHeightConstraint;


@property (weak, nonatomic) IBOutlet NSLayoutConstraint *iconWidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *externalDataLabelHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *extraLabelHeightConstraint;

@end
