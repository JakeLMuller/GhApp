//
//  WPNotificationTableViewCell.h
//  
//
//  Created by Matthew Flatau on 12/30/15.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"
#import "WPAlertNotification.h"

static NSString * const kWPNotificationTableViewCellReuseIdentifier = @"WPNotificationTableViewCell";

@interface WPNotificationTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UIImageView *mainImageView;
@property (nonatomic, weak) IBOutlet UIImageView *smallImageView;
@property (nonatomic, weak) IBOutlet UIView *smallImageMaskingView;
@property (nonatomic, weak) IBOutlet UILabel *notificationLabel;
@property (nonatomic, weak) IBOutlet UIView *highlightView;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *separatorLayoutConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *smallImageMaskingViewWidthConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *mainIconLeftSpacingConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *labelLeadingToSuperContraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *labelLeadingToIconConstraint;

@property (nonatomic, strong) WPAlertNotification *notification;

- (void)setCellToNotification:(WPAlertNotification *)notification;

@end
