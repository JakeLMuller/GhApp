//
//  WPSingleLabelTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 2/12/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

static NSString * const kWPSingleLabelTableViewCellReuseIdentifier = @"WPSingleLabelTableViewCell";

@interface WPSingleLabelTableViewCell : WPCustomSelectionTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UIView *separatorView;

+ (CGFloat)heightForCellWithText:(NSString*)text font:(UIFont *)font width:(CGFloat)width;

@end
