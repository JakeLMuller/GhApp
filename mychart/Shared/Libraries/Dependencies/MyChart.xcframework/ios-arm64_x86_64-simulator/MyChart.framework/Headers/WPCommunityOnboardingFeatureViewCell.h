//
//  WPCommunityOnboardingFeatureViewCell.h
//  MyChart
//
//  Created by Shawn Zhao on 9/22/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//
//  Collection view cell for the feature grid in the H2G feature introduction activity
//

#import <UIKit/UIKit.h>
#import "WPActivityManager.h"
#import "WPSpringboardInfo.h"

@interface WPCommunityOnboardingFeatureViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView    *featureImage;
@property (weak, nonatomic) IBOutlet UILabel        *featureTitle;

- (void)setViewToFeature:(WPActivity)activityType;

@end
