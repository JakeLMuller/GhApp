//
//  IWPVisitSummaryAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/5/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//


/**
 * @brief Represents an interface for a visit summary alert.
 */
@protocol IWPVisitSummaryAlert <IWPAlert>

/**
 * @brief DAT of the visit.
 */
@property (nonatomic, readonly, strong, nullable) NSString  *visitDAT;

/**
 * @brief Date of the visit in ISO format.
 */
@property (nonatomic, readonly, strong, nullable) NSDate    *visitDate;

/**
 * @brief Type of the visit.
 */
@property (nonatomic, readonly, strong, nullable) NSString  *visitType;

/**
 * @brief Provider name of the visit.
 */
@property (nonatomic, readonly, strong, nullable) NSString  *providerName;

@end
