//
//  WPPopupInterfaceButton.h
//  MyChart
//
//  Created by Matthew Flatau on 1/8/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPCustomSelectionTableViewCell.h"


typedef NS_ENUM(NSInteger, WPPopupButtonType) {
    kWPPopupButtonTypeNormal,
    kWPPopupButtonTypeBold,
    kWPPopupButtonTypeNaturalAligned,
};

@interface WPPopupInterfaceButton : WPCustomSelectionTableViewCell

- (instancetype)initWithType:(WPPopupButtonType)type title:(NSString *)title target:(id)target action:(SEL)action;
- (instancetype)initWithType:(WPPopupButtonType)type title:(NSString *)title image: (UIImage *)image target:(id)target action:(SEL)action;

@property (nonatomic, weak) UIButton *button;

@end
