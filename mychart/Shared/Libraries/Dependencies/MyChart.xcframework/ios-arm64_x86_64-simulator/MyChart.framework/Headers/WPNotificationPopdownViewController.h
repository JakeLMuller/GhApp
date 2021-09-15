//
//  WPNotificationPopdownViewController.h
//  MyChart
//
//  Created by Matthew Flatau on 2/16/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPPopdownViewController.h"

@interface WPNotificationPopdownViewController : WPPopdownViewController

@property (assign, nonatomic) BOOL shouldShowPushAlert;
@property (nonatomic, weak) UINavigationController* initializerNavigationController;

- (instancetype)initWithNavigationController:(UINavigationController *)navigationController;

@end
