//
//  WPAccountSettingsImageTableViewCell.h
//  MyChart
//
//  Created by Alex J White on 4/19/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WPAccountSettingsImageTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel            *rowLabel;
@property (nonatomic, weak) IBOutlet UILabel            *subtitleLabel;
@property (nonatomic, weak) IBOutlet UIImageView        *rowIcon;
@property (nonatomic, readonly)      UISwitch           *rowSwitch;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *rowIconWdithConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *rowIconHeightConstraint;



@end
