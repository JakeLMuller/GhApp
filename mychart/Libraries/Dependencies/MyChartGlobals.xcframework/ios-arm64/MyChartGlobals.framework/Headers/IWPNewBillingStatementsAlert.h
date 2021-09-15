//
//  IWPNewBillingStatementsAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/6/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief Represents an interface for a new billing statements alert
 */
@protocol IWPNewBillingStatementsAlert <IWPAlert>

/**
 * @brief The number of accounts that have new statements. This is different from 'count' which indicates the total number of statements available.
 */
@property (nonatomic, readonly, assign) NSInteger guarantorCount;

/**
 * @brief ID of the account that has a new statement. This is present only if the alert is for a single new statement alert. If there are multiple new statement alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *accountID;

/**
 * @brief Date when the statement was made available. This is present only if the alert is for a single new statement alert. If there are multiple new statement alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSDate *statementDate;

@end
