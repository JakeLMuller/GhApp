//
//  WPForceTouchGestureRecognizer.h
//  MyChart
//
//  Created by Alex J White on 2/17/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIGestureRecognizer.h>

@protocol WPForceTouchGestureRecognizerDelegate <NSObject>

- (BOOL)shouldAllowForceTouchAtPoint:(CGPoint)point;
- (void)didForceTouchAtPoint:(CGPoint)point;

@end

@interface WPForceTouchGestureRecognizer : UIGestureRecognizer

+ (void)addForceTouchGestureRecognizerToView:(UIView *)view withDelegate:(id <WPForceTouchGestureRecognizerDelegate>)delegate;

- (instancetype)initWithDelegate:(id <WPForceTouchGestureRecognizerDelegate>)delegate NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithTarget:(id)target action:(SEL)action NS_UNAVAILABLE;

@end
