//
//  WPStatementsTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 1/20/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//




#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

@interface WPStatementsTableViewCell : WPCustomSelectionTableViewCell


@property (weak, nonatomic) IBOutlet UnreadIndicatorView *readIndicatorView;
@property (weak, nonatomic) IBOutlet UILabel *mainLabel;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;
@property (weak, nonatomic) IBOutlet UIImageView *disclosureIndicator;

@end
