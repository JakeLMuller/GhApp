//
//  WPNavigationTitleView.h
//  MyChart
//
//  Created by Matthew Flatau on 5/25/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WPNavigationTitleView : UIView

@property (nonatomic, weak) UIImageView *patientImage;
@property (nonatomic, weak) UILabel *titleLabel;
@property (nonatomic, assign) CGFloat side;

+ (WPNavigationTitleView *)navigationItemForTitle:(NSString *)title inBar:(UINavigationBar *)bar;
+ (WPNavigationTitleView *)navigationItemForTitle:(NSString *)title inBar:(UINavigationBar *)bar atPatientIndex:(NSInteger)patientIndex;

@end
