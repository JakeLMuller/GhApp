//
//  WPComponentContainerViewController.h
//  MyChart
//
//  Created by Chad Close on 2/1/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"



@interface WPComponentContainerViewController : WPViewController<PEComponentHostProtocol, UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate>
@property (nonatomic, strong) UIViewController *componentView;

- (instancetype)initWithComponentViewController:(UIViewController *)viewController;

@end
