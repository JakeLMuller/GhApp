//
//  WPTextFieldTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 2/3/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

static const CGFloat kWPTextFieldTableViewCellHeight = 44;
static NSString * const kWPTextFieldTableViewCellReuseIdentifier = @"WPTextFieldTableViewCell";

@interface WPTextFieldTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UITextField *textField;

@end
