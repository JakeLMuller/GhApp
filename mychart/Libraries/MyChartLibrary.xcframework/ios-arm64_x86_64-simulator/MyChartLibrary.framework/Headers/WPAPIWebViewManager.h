//
//  WPAPIWebViewManager.h
//  MyChart
//
//  Created by Yash Vaka on 4/12/16.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//
//  *csatish  7/16 429620 Added HTTPHeaderField methods. Moved CookieAllowlist from WPLCookieManager

#import <Foundation/Foundation.h>

@class WKWebViewConfiguration;

@protocol WPAPICreateMyChartURLDelegate;


@interface WPAPIWebViewManager : NSObject

#pragma mark - Cookie AllowList methods

/*!
 * @method addCookieToAllowList:
 * @brief Adds a cookie to the cookie allowlist
 * @discussion If a cookie is not added in the allowlist, it will be deleted when the user accesses a mobile optimized
 * activity, such as Questionnaires, eCheck-in, and Scheduling.
 * @param cookieName Name of the cookie to add to the allowlist
 */
+ (void)addCookieToAllowList:(nonnull NSString *)cookieName;

/*!
 * @method removeCookieFromAllowList:
 * @brief Removes the specified cookie from the cookie allowlist.
 * @param cookieName Name of the cookie to remove from the allowlist
 */
+ (void)removeCookieFromAllowList:(nonnull NSString *)cookieName;

/*!
 * @brief Removes all cookies stored in the cookie allowlist.
 */
+ (void)clearAllCookiesFromAllowList;

/*!
 * @method getAllCookiesFromAllowList:
 * @brief Gets a NSSet* of all the cookies currently stored in the allowlist.
 * @return Set of allowlisted cookies
 */
+ (nonnull NSSet <NSString*> *)getAllCookiesFromAllowList;


#pragma mark - HTTP Header fields methods

/*!
 * @method setValue:forHTTPHeaderField:
 * @brief Sets the value of the custom HTTP header field when launching a mobile optimized
 * activity, such as Questionnaires, eCheck-in, and Scheduling.
 *
 * @discussion If a value was previously set for the given header
 * field, that value is replaced with the given value.
 * Note that, in keeping with the HTTP RFC, HTTP header field names are case-insensitive.
 *
 * Protected Header Restrictions:
 *  All header fields beginning with "Epic" or "X-Epic" will not be replaced. Example: X-Epic-Authenticator
 *  User-Agent header field will not be replaced
 *
 * @param value the header field value.
 * @param field the header field name (case-insensitive).
 * @return YES if HTTP Header field is set
 */
+ (BOOL)setValue:(nonnull NSString *)value forHTTPHeaderField:(nonnull NSString *)field;

/*!
 * @method removeHTTPHeaderField:
 * @brief Remove the value of the given HTTP header field
 * @param field the header field name (case-insensitive).
 */
+ (void)removeHTTPHeaderField:(nonnull NSString *)field;

/*!
 * @method removeAllHTTPHeaderFields:
 * @brief Removes all the custom HTTP header fields
 */
+ (void)removeAllHTTPHeaderFields;

/*!
 * @method getAllHTTPHeaderFields:
 * @brief Gets all the custom HTTP header fields
 * @return Dictionary of custom HTTP header fields
 */
+ (nonnull NSDictionary <NSString *, NSString *> *)getAllHTTPHeaderFields;

/*!
 * @method allowedHTTPHeaderField:
 * @brief Checks if the custom HTTP header field can be set when launching a mobile optimized
 * activity, such as Questionnaires, eCheck-in, and Scheduling.
 *
 * @discussion All header fields beginning with "X-Epic" will not be replaced. e.g. X-Epic-Authenticator
 * User-Agent header field will not be replaced
 *
 * @param field the header field name (case-insensitive).
 * @return YES if HTTP Header field is allowed
 */
+ (BOOL)allowedHTTPHeaderField:(nonnull NSString *)field;

#pragma mark - Jump to custom URL mode
/**
 * Takes in a mode and a map of string pairs and returns the created MyChart url through a callback.
 * Before calling this method, make sure startJumpTokenLaunchLock is being called,
 * And endJumpTokenLaunchLock is being called in viewDidDisappear of the view controller.
 * @param mode Name of mode to go to
 * @param parameters Map of parameters to be included in url
 * @param delegate Callback to get results of api call
 */
+ (void)createCustomMyChartUrlForMode:(nonnull NSString *)mode
                           parameters:(nullable NSDictionary <NSString*, NSString*> *)parameters
                             delegate:(nonnull id <WPAPICreateMyChartURLDelegate>)delegate;

/**
 * @method startJumpTokenLaunchLock
 * @brief This is called when an MO view is created to have the lock of jump token
 * It needs to be called before createCustomMyChartUrlForMode is called
 */
+ (void)startJumpTokenLaunchLock;

/**
 * @method endJumpTokenLaunchLock
 * @brief This is called when leaving an MO view to release the lock of jump token
 * if startJumpTokenLaunchLock is called, this method needs to be called when the viewcontroller disappears
 */
+ (void)endJumpTokenLaunchLock;


#pragma mark - WKWebView

/*!
 * @method setCustomWKWebViewConfiguration
 * @brief Sets the custom WKWebViewConfiguration for MO activites
 *
 * @param configuration the new configuration
 */
+ (void)setCustomWKWebViewConfiguration:(nullable WKWebViewConfiguration *)configuration;

/*!
 * @method getCustomWKWebViewConfiguration
 * @brief Get the custom WKWebViewConfiguration if one exists
 */
+ (nullable WKWebViewConfiguration *)getCustomWKWebViewConfiguration;

@end
