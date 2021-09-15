//
//  WPAPIMessages.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/19/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPAPIMessages : NSObject

/**
 * @brief Determines whether the messages activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForMessageList DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the message list view controller instance for the current patient to be pushed on to the navigation stack.
 * @returns The message list viewcontroller. Returns nil if there is no logged in user or if the current patient cannot access messages. If the API isWebMessagesAvailable returns true, the view controller should be presented modally. Otherwise, it can be pushed on to the navigation stack.
 */
+ (nullable UIViewController *)getMessageListController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Determines whether the message details activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForMessageDetails DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the message details view controller instance for a particular message to be pushed on to the navigation stack.
 * @param messageID The ID (CSN) for the message whos details need to be viewed.
 * @returns The message details viewcontroller. Returns nil if there is no logged in user or if the current patient cannot access messages or if the message ID is whitespace. If the API isWebMessagesAvailable returns true, the view controller should be presented modally. Otherwise, it can be pushed on to the navigation stack.
 */
+ (nullable UIViewController *)getMessageDetailsControllerForMessageID:(nonnull NSString *)messageID DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Determines whether the medical advice message compose activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForComposeMessage DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Determines whether the customer servic message compose activity can be accessed by the current patient.
 * @returns Access result.
 */
+ (WPAPIAccessResult)accessResultForComposeCustomerServiceMessage DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the medical advice message compose view controller instance for the current patient to be presented modally.
 * @warning Make sure this view controller is presented modally.
 * @returns The message compose viewcontroller. Returns nil if there is no logged in user or if the current patient cannot access message compose.
 */
+ (nullable UIViewController *)getModalComposeMessageController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the medical advice message compose view controller instance launched from a deep link for the current patient to be presented modally.
 * @param deepLinkInfo A dictionary containing information about a deep link that this message is being launched from. If a file URL (i.e. file:///... ) is passed in via the "filepath" key, the corresponding file will be loaded - if possible - and attached to the message. This dictionary can be obtained via getEpicMyChartDeepLinkInfo in WPAPIDeepLinkManager. Right now this only supports attaching Apple Health ECG PDFs.
 * @warning Make sure this view controller is presented modally.
 * @warning If passing a file URL in the deepLinkInfo dictionary, make sure to use the "filepath" key, and that the path is already URL encoded.
 * @returns The message compose viewcontroller, with an attached file if a valid file path is passed in the deepLinkInfo dictionary via the "filepath" key. Returns nil if there is no logged in user or if the current patient cannot access message compose.
 */
+ (nullable UIViewController *)getModalComposeMessageControllerWithDeepLinkInfo:(NSDictionary * _Nonnull)deepLinkInfo DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Provides the customer service message compose view controller instance for the current patient to be presented modally.
 * @warning Make sure this view controller is presented modally.
 * @returns The customer service message compose viewcontroller. Returns nil if there is no logged in user or if the current patient cannot access customer service message compose.
 */
+ (nullable UIViewController *)getModalComposeCustomerServiceMessageController DEPRECATED_MSG_ATTRIBUTE("Use the APIs in WPAPIActivity in order to check access and launch activities. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");

/**
 * @brief Determines whether the mobile optimized messages activity is available
 * @returns True if the mobile optimized messages activity is available; false otherwise
 */
+ (BOOL)isWebMessagesAvailable DEPRECATED_MSG_ATTRIBUTE("Use the shouldPresentViewControllerModally API in WPAPIActivity in order to check the availability of MO features. This API will be retired as early as version 9.9 of the MyChart Mobile Feature and Code Module.");
@end
