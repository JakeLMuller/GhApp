//
//  IWPNewInsuranceInvoicesAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/6/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief Represents an interface for a new insurance invoice alert
 */
@protocol IWPNewInsuranceInvoicesAlert <IWPAlert>

/**
 * @brief ID of the account that has new insurance invoices. This is present only if the alert is for a single new insurance invoice alert. If there are multiple new insurance invoices, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *accountID;

@end
