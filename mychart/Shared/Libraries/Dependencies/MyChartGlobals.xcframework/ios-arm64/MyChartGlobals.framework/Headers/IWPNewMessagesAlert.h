//
//  IWPNewMessagesAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/5/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * @brief Represents an interface for a new messages alert
 */
@protocol IWPNewMessagesAlert <IWPAlert>

/**
 * @brief Name of the provider for the message. This is present only if the alert is for a single message. If there are multiple new message alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *providerName;

/**
 * @brief Subject of the message. This is present only if the alert is for a single message. If there are multiple new message alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *messageSubject;

/**
 * @brief ID (CSN) of the message. This is present only if the alert is for a single message. If there are multiple new message alerts, this will be nil.
 */
@property (nonatomic, readonly, strong, nullable) NSString *messageID;

@end
