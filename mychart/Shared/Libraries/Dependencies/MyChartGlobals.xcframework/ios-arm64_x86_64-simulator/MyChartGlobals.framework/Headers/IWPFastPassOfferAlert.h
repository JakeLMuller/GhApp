//
//  IWPFastPassOfferAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/5/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief Represents an interface for a fast pass offers alert
 */
@protocol IWPFastPassOfferAlert <IWPAlert>

/**
 * @brief Type of appointment for the fast pass offer
 */
@property (nonatomic, readonly, strong, nullable) NSString *appointmentType;

@end
