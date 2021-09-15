//
//  WPScheduleViewController.h
//  iChart
//
//  Created by Chetan Satish on 8/4/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 07/2014 318783 Making UIAlertViewDelegate

#import <UIKit/UIKit.h>
//
#import "WPTableViewController.h"

/**
 * Display Schedule appt
 *
 */
@interface WPScheduleViewController : WPTableViewController

+ (UINavigationController *)schedulingControllerForPresentation;

@end
