//
//  IWPNewBillingLettersAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/6/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief Represents an interface for a new billing letter alert
 */
@protocol IWPNewBillingLettersAlert <IWPAlert>

/**
 * @brief The number of accounts that have new billing letters. This is different from 'count' which indicates the total number of letters available.
 */
@property (nonatomic, readonly, assign) NSInteger guarantorCount;

/**
 * @brief The ID of the account that has new billing letters. This is present only if the alert is for a single new billing letter alert. If there are multiple new letter alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *accountID;

@end
