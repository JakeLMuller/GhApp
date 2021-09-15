//
//  WPForceTouchMenuTableViewCell.h
//  MyChart
//
//  Created by Alex J White on 2/18/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WPForceTouchMenuTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *label;
@property (nonatomic, weak) IBOutlet UIImageView *icon;
@property (nonatomic, assign) BOOL alignRight;

@end

static NSString * const kWPForceTouchActionTableViewCellReuseIdentifier = @"WPForceTouchActionTableViewCell";
