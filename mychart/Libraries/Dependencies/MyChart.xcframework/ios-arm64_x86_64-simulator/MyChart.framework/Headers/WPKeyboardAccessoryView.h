//
//  WPKeyboardAccessoryView.h
//  iChart
//
//  Created by Matthew Flatau on 5/20/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WPKeyboardAccessoryView : UIView {
    UILabel *accessoryLabel_;
    UIButton *keyboardHideButton_;
}
@property (nonatomic, readonly) UILabel *accessoryLabel;
@property (nonatomic, readonly) UIButton *keyboardHideButton;
@property (nonatomic, strong) NSArray *otherButtons;

+ (WPKeyboardAccessoryView *)keyboardAccessoryWithTarget:(id)target andSelector:(SEL)action;

- (void)addButtons:(NSArray *)buttons;
- (void)styleButton:(UIButton *)button;
- (void)sizeButton:(UIButton *)button;

@end
