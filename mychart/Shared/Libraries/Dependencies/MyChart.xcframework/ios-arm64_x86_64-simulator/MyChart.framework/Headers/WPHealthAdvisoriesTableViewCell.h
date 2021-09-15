//
//  WPHealthAdvisoriesTableViewCell.h
//  iChart
//
//  Created by Jake Silver on 5/21/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"
#import "WPIconTextButton.h"

@class WPHealthAdvisory;

@interface WPHealthAdvisoriesTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *topicLabel;
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;
@property (weak, nonatomic) IBOutlet UIView *separatorView;
@property (weak, nonatomic) IBOutlet WPIconTextButton *markCompleteButton;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *buttonContainerHeightConstraint;

- (void)setViewToHealthAdvisory:(WPHealthAdvisory *)advisory allowMarkComplete:(BOOL)allowMarkComplete;

@end
