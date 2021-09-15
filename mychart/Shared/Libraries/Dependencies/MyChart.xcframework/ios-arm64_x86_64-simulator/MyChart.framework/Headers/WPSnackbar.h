//
//  WPSnackbar.h
//  MyChart
//
//  Created by Jessica Perng on 1/31/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

static const NSTimeInterval kWPSnackbarShortDuration = 2.0;
static const NSTimeInterval kWPSnackbarLongDuration = 3.5;

@protocol IWPSnackbarDelegate <NSObject>

- (void)didHideSnackbar;
- (void)didTapOnActionButton;

@end

@interface WPSnackbar : UIView

@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@property (weak, nonatomic) IBOutlet UIButton *actionButton;

@property (nonatomic) NSObject<IWPSnackbarDelegate> *delegate;

- (void)showSnackbarWithMessage:(NSString *)message onView:(UIView *)view;
- (void)showSnackbarWithMessage:(NSString *)message actionLabel:(NSString *)actionLabel onView:(UIView *)view;

- (void)showSnackbarWithMessage:(NSString *)message actionLabel:(NSString *)actionLabel bottomMargin:(CGFloat)bottomMargin onView:(UIView *)view;

- (void)hideSnackbar:(BOOL)animated;

@end

