//
//  WPScheduleTableViewCell.h
//  MyChart
//
//  Created by Chetan Satish on 1/30/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

@interface WPScheduleTableViewCell : WPCustomSelectionTableViewCell

@property (nonatomic, weak) IBOutlet UILabel *timeLabel;
@property (nonatomic, weak) IBOutlet UILabel *providerLabel;
@property (nonatomic, weak) IBOutlet UILabel *locationLabel;

@end
