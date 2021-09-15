//
//  WPAmountEntryTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 2/5/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

static NSString *const kWPAmountEntryTableViewCellReuseIdentifier = @"WPAmountEntryTableViewCell";

@interface WPAmountEntryTableViewCell : WPCustomSelectionTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *amountPromptLabel;
@property (weak, nonatomic) IBOutlet UITextField *amountEntryTextField;

@end
