//
//  WPSpringboardCollectionViewCell.h
//  MyChart
//
//  Created by Matthew Flatau on 1/14/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPActivityManager.h"
#import "WPForceTouchMenuViewController.h"

@interface WPSpringboardCollectionViewCell : UICollectionViewCell <WPForceTouchViewDelegate>

@property (nonatomic, weak) IBOutlet UIImageView *imageView;
@property (nonatomic, weak) IBOutlet UILabel *titleLabel;
@property (nonatomic, weak) IBOutlet UILabel *badgeLabel;
@property (nonatomic, weak) IBOutlet UIView *badgeIconView;

@property (nonatomic, assign) BOOL hasFastPass;
@property (nonatomic, assign) WPActivity activity;

/*!
 * @brief Returns true if this springboard activity supports force touch
 */
- (BOOL)isForceTouchEnabled;

- (void)setViewToActivity:(WPActivityContainer *)activity;

@end
