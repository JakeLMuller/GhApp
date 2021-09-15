//
//  IWPRxRefillsDue.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/6/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//


/**
 * @brief Represents an interface for a new Rx refill due alert
 */
@protocol IWPRxRefillsDueAlert <IWPAlert>

/**
 * @brief Number of days for which the Rx is due for a refill.
 */
@property (nonatomic, readonly, assign) NSInteger numberOfDays;

/**
 * @brief Name of the Rx due for a refill. This is present only if the alert is for a single Rx refill. If there are multiple Rx refill alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *rxName;

@end
