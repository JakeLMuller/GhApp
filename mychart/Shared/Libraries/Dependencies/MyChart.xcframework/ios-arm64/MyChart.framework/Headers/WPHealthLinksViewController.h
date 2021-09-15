//
//  WPHKStatusViewController.h
//  iChart
//
//  Created by Ben Drda on 8/22/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPTableViewController.h"
#import "WPHealthLinksHeaderViewController.h"
#import "WPHealthKitInfo.h"

/*!
 @brief ViewController for the Health Links page
 @author Ben Drda
 */
@interface WPHealthLinksViewController : WPTableViewController

/*!
 @brief Result from the Flowsheets/HealthKit/Info call
 */
@property (nonatomic,strong) WPHealthKitInfo *config;

@end
#endif
