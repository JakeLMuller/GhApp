//
//  WPFlowsheetTableViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 1/26/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"

@interface WPFlowsheetTableViewCell : WPCustomSelectionTableViewCell

@property (weak, nonatomic) IBOutlet UILabel *flowsheetTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *flowsheetRowsLabel;

@end
#endif
