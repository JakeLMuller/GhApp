//
//  WPSettingsViewController.h
//  MyChart
//
//  Created by Ben Drda on 4/1/15.
//  Copyright © 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPTableViewController.h"


@interface WPAccountSettingsViewController : WPTableViewController

@property (nonatomic, strong) NSMutableArray *deviceList;
@property (nonatomic, weak) IBOutlet UILabel *noRegisteredDevices;
@property (nonatomic) BOOL shouldInvalidateFeedOnClose;

/**
 * @brief A helper method to check if the current device is in the list of devices and
 *        return whether or not it has push notifications turned on.
 * @param deviceList - list of devices to check
 * @return whether current device has push notifications on.
 */
+ (BOOL)currentDeviceHasPushOn:(NSMutableArray *)deviceList;

/**
 * @brief Loads the list of devices linked to this account
 */
- (void)loadDevices;

@end
