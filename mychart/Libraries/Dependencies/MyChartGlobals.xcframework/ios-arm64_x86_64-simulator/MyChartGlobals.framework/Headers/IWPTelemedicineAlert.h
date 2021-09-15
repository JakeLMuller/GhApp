//
//  IWPTelemedicineAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/5/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//


/**
 * @brief Represents an interface for a telemedicine appointment alert.
 */
@protocol IWPTelemedicineAlert <IWPAlert>

/**
 * @brief Date for the upcoming telemedicine visit. This is present only if the alert is for a single telemedicine appointment. If there are multiple telemedicine appointments in the alert, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSDate *appointmentDate;

/**
 * @brief Name of the provider for the telemedicine appointment. This is present only if the alert is for a single telemedicine appointment. If there are multiple telemedicine appointments in the alert, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *providerName;

/**
 * @brief ID (CSN) of the appointment. This is present only if the alert is for a single telemedicine appointment. If there are multiple telemedicine appointments in the alert, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *appointmentID;

@end
