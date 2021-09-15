//
//  WPPopdownViewController.h
//  MyChart
//
//  Created by Matthew Flatau on 1/5/2016.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "WPPopupViewController.h"


@interface WPPopdownViewController : WPPopupViewController <UIViewControllerTransitioningDelegate>

@property (nonatomic, assign) CGRect originFrame;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *popdownWidthConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *popdownLeadingConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *popdownTopConstraint;

@end
