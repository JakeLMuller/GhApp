//
//  WPActivityActionButton.h
//  MyChart
//
//  Created by Yash Vaka on 2/24/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPPopupViewController.h"

extern const NSTimeInterval WP_BUTTON_ANIMATION_DURATION;

@interface WPActivityActionButton : UIButton

@property (strong, nonatomic) NSString *title;
@property (assign, nonatomic) BOOL titleLabelHidden;

@property (nonatomic, assign) CGFloat expandedCornerRadius;
@property (nonatomic, readonly) CGFloat shrunkenCornerRadius;

- (void)animateCornerRadiusToShrunkenSize;
- (void)animateCornerRadiusToExpandedSize;

@end
