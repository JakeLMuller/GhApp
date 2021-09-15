//
//  WPDetailedTableViewCell.h
//  iChart
//
//  Created by Matthew Flatau on 8/6/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

@interface WPDetailedTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *titleLabel;
@property (nonatomic, weak) IBOutlet UILabel *subtitleLabel;
@property (nonatomic, weak) IBOutlet UILabel *valueLabel;
@property (nonatomic, weak) IBOutlet UILabel *metadataLabel;

@end
