//
//  IWPBillingAutoPayErrorsAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/6/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief Represents an interface for a new billing auto pay error alert
 */
@protocol IWPBillingAutoPayErrorsAlert <IWPAlert>

/**
 * @brief The number of accounts that have the error. This is different from 'count' which indicates the total number of auto pay errors.
 */
@property (nonatomic, readonly, assign) NSInteger guarantorCount;

/**
 * @brief ID of the account that has an auto pay error. This is present only if the alert is for a single billing auto pay error. If there are multiple auto pay error alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *accountID;

@end
