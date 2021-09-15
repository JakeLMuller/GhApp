//
//  IWPUpdateNotificationPreferencesAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 2/10/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//


/**
 * @brief Represents an interface for a updating notification preferences alert.
 */
@protocol IWPUpdateNotificationPreferencesAlert <IWPAlert>

/**
 * @brief Email of the user. This is present only if the user has an email on file, otherwise it is nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *email;

/**
 * @brief Phone number of the user. This is present only if the user has a phone number on file, otherwise it is nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *phoneNumber;

@end
