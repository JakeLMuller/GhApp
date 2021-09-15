//
//  WPSlotsViewController.h
//  iChart
//
//  Created by Larry Irwin II on 8/2/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 02/2015 354336 Fixing 64-bit errors
//  *mflatau 09/2015 384452 Centering loading/error messages

#import <UIKit/UIKit.h>
#import "WPTableViewController.h"

@interface WPSlotsViewController : WPTableViewController 

- (instancetype)initWithStartDate:(NSDate*)aStartDate EndDate:(NSDate*)aEndDate RFVIndex:(NSInteger)aRFVIndex SelectedProviders:(NSArray*)aProviderList;

@end
