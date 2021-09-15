//
//  WPMessageTaskTableViewCell.h
//  MyChart
//
//  Created by Yechan Hong on 5/19/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"
#import "WPOrganizationInfo.h"

@class WPMessageTask;

@interface WPMessageTaskView : UIView

- (void)setupCellToTask:(WPMessageTask *)task andIsLast:(BOOL)isLast OrganizationInfo:orgInfo;

@property (nonatomic, strong) WPMessageTask *task;
@property (nonatomic, strong) WPOrganizationInfo *orgInfo;

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *taskIcon;
@property (weak, nonatomic) IBOutlet UIView *taskSeparator;
@property (weak, nonatomic) IBOutlet UILabel *actionLabel;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomConstraint;

@end

