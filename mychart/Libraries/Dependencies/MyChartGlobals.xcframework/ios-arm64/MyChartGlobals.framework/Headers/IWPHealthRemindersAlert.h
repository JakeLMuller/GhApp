//
//  IWPHealthRemindersAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/6/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief Represents an interface for a new health reminders alert
 */
@protocol IWPHealthRemindersAlert <IWPAlert>

/**
 * @brief Name of the health reminder. This is present only if the alert is for a single type of health reminder. If there are multiple types of health reminder alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *healthReminderName;

@end
