//
//  IWPPasswordExpireAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/5/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//


/**
 * @brief Represents an interface for a password expire alert.
 */
@protocol IWPPasswordExpireAlert <IWPAlert>

/**
 * @brief Date when the password will expire.
 */
@property (nonatomic, readonly, strong, nonnull) NSDate *expirationDate;

@end
