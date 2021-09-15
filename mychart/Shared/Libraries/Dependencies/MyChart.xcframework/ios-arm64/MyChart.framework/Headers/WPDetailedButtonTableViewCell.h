//
//  WPDetailedButtonTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 12/30/14.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPIconTextButton.h"
#import "WPCardView.h"
#import "WPCustomSelectionTableViewCell.h"

typedef NS_ENUM(NSInteger, WPDetailedButtonTableViewCellType) {
    kWPDetailedButtonTableViewCellTypeNormal,
    kWPDetailedButtonTableViewCellTypeTop,
    kWPDetailedButtonTableViewCellTypeBottom,
    kWPDetailedButtonTableViewCellTypeMiddle,
};

@interface WPDetailedButtonTableViewCell : WPCustomSelectionTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *subheadLabel;
@property (nonatomic, weak) IBOutlet WPIconTextButton *button;
//Card Type should not be changed on the card manual. Use below helper property
@property (nonatomic, assign) WPDetailedButtonTableViewCellType cellType;


@end
