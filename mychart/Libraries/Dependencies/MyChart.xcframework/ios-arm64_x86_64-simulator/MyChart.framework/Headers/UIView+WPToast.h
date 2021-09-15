//
//  UIView+WPToast.h
//  MyChart
//
//  Created by Taylor Seale on 8/15/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

static const NSTimeInterval kWPShortDuration = 2.0;
static const NSTimeInterval kWPLongDuration = 3.5;

@interface UIView (WPToast)

@property (nonatomic, strong) UIView *currentToast;

- (void)showToastWithMessage:(NSString *)message;
- (void)showToastWithMessage:(NSString *)message duration:(NSTimeInterval)duration;
- (void)showToastWithMessage:(NSString *)message duration:(NSTimeInterval)duration bottomMargin:(CGFloat)marginBottom;

- (void)showPersistentToastWithAttributedMessage:(NSAttributedString *)attributedMessage bottomMargin:(CGFloat)marginBottom;
- (void)hideCurrentToastAnimated:(BOOL)animated;

@end
