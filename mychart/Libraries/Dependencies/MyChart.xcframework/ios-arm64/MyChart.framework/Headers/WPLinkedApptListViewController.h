//
//  WPLinkedApptListViewController.h
//  iChart
//
//  Created by Chetan Satish on 4/18/10.
//  Copyright © 2010-2021 Epic. All rights reserved.
//
//   *mflatau 04/14 307093  fixing spelling
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 01/2015 338750 Subclassing WPTableviewController, cleaning up

#import <UIKit/UIKit.h>
#import "WPTableViewController.h"

@interface WPLinkedApptListViewController : WPTableViewController

- (instancetype)initWithAppointments:(NSMutableArray *)apptList;

@end
