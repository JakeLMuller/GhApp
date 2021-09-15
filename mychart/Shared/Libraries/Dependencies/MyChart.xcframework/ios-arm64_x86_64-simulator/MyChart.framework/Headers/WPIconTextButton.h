//
//  WPIconTextButton.h
//  MyChart
//
//  Created by Matthew Flatau on 12/17/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WPIconTextButtonViewModel;
@interface WPIconTextButton : UIButton

@property (nonatomic, weak) UILabel *textLabel;
@property (nonatomic, weak) UIButton *iconImageView;
@property (nonatomic, assign) BOOL hasPadding;

- (void)addMarginPadding;
- (void)tearDownViews;
- (void)setImage:(AnimatedImageView *) image;
- (void)populateWithViewModel:(WPIconTextButtonViewModel *)viewModel;

@end
