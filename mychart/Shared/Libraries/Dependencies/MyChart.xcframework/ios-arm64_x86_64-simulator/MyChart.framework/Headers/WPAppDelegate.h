//
//  WPAppDelegate.h
//  iChart
//
//  Created by Epic on 6/1/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
@import UserNotifications;

/**
 * \brief Main Delegate for the iChartApplication
 */
@interface WPAppDelegate : NSObject <UIApplicationDelegate, UNUserNotificationCenterDelegate>

@property (nonatomic, strong) IBOutlet UIWindow *window; /**< Root window */

@end

