//
//  IWPOutpatientLabsAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/6/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//


/**
 * @brief Represents an interface for a new outpatient lab alert
 */
@protocol IWPOutpatientLabsAlert <IWPAlert>

/**
 * @brief Date when the lab occurred. This is present only if the alert is for a single lab result. If there are multiple lab result alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSDate *labDate;

/**
 * @brief Name of the lab for the alert. This is present only if the alert is for a single lab result. If there are multiple lab result alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *labName;

/**
 * @brief ID (CSN) of the lab. This is present only if the alert is for a single lab result. If there are multiple lab results alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *labID;

@end
