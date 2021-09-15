//
//  WPAlphaTransformPresentationAnimator.h
//  MyChart
//
//  Created by Matthew Flatau on 1/12/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPAlphaTransformPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) CGFloat startAlpha;
@property (nonatomic, assign) CGFloat endAlpha;
@property (nonatomic, assign) CGAffineTransform startTransform;
@property (nonatomic, assign) CGAffineTransform endTransfrom;

- (instancetype)initWithStartAlpha:(CGFloat)startAlpha
                          endAlpha:(CGFloat)endAlpha
                    startTransform:(CGAffineTransform)startTransform
                      endTransfrom:(CGAffineTransform)endTransfrom;

@end



@interface WPAlphaTransformDismissalAnimator : WPAlphaTransformPresentationAnimator @end



@interface WPPopupPresentationAnimator : WPAlphaTransformPresentationAnimator

@property (nonatomic, weak) UIView *toViewPopup;

- (instancetype)initWithPopup:(UIView *)popup;

@end


@interface WPPopupDismissalAnimator : WPAlphaTransformPresentationAnimator

@property (nonatomic, weak) UIView *fromViewPopup;

- (instancetype)initWithPopup:(UIView *)popup;

@end
