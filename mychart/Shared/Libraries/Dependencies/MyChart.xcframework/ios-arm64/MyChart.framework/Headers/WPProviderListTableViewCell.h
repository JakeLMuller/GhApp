//
//  WPProviderListTableViewCell.h
//  MyChart
//
//  Created by Yash Vaka on 5/12/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"
#import "WPProviderImageView.h"

@interface WPProviderListTableViewCell : WPCustomSelectionTableViewCell
@property (weak, nonatomic) IBOutlet WPProviderImageView *providerImage;
@property (weak, nonatomic) IBOutlet UILabel *providerNameLabel;

+ (CGFloat)heightForCellWithText:(NSString*)text font:(UIFont *)font width:(CGFloat)width;

@end
