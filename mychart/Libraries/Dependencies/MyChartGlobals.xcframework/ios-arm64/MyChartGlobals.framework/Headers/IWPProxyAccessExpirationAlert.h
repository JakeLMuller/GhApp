//
//  IWPProxyAccessExpirationAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/6/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//


/**
 * @brief Represents an interface for a proxy access expiring alert
 */
@protocol IWPProxyAccessExpirationAlert <IWPAlert>

/**
 * @brief Date when the proxy access will expire.
 */
@property (nonatomic, readonly, strong, nullable) NSString *expirationDate;

@end
