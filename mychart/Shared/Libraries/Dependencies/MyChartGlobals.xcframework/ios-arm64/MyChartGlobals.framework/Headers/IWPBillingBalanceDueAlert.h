//
//  IWPBillingBalanceDueAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/6/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief Represents an interface for a new billing balance due alert
 */
@protocol IWPBillingBalanceDueAlert <IWPAlert>

/**
 * @brief Whether the balance is overdue. This is can only be true for a single, overdue billing balance due reminder. If there are multiple balance due alerts, even if one or more are overdue, this will be false.
 */
@property (nonatomic, readonly, assign) BOOL isOverdue;

/**
 * @brief The actual amount that is due. This is present only if the alert is for a single billing balance due reminder. If there are multiple balance due alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *balanceDue;

/**
 * @brief ID of the account for which there is a balance due. This is present only if the alert is for a single billing balance due reminder. If there are multiple balance due alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *accountID;

@end
