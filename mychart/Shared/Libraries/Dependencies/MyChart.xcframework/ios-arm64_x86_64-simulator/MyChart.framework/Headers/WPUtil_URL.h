//
//  WPUtil_URL.h
//  iChart
//
//  Created by Chetan Satish on 9/3/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.

#import <Foundation/Foundation.h>
#import "WPActivityManager.h"

extern NSString * const AppleSMSURLScheme;
extern NSString * const ApplePhoneURLScheme;
extern NSString * const AppleMapsURLSchemeModern;
extern NSString * const AppleMapsURLSchemeOld;

@interface WPUtil_URL : NSObject

+ (NSArray *)getApplicationURLPrefixes;
+ (NSRange)rangeOfApplicationURLInString:(NSString *)string;
+ (NSLocale *)htmlLocale;

/*!
 * @brief Returns a list of default URLs that should be allowed to be opened anywhere.
 *        URLs include things such as making a phone call or opening maps.
 */
+ (NSArray *)getDefaultAllowedURLs;

/*!
 * @brief Checks if a given URL string is one that opens a default Apple app. Case-insensitive.
 */
+ (BOOL)isDefaultAppleURL:(NSString *)URLString;

/*!
 * @brief Returns the app store URL that goes to this app
 */
+ (NSString *)getAppStoreURL;


+ (BOOL)isOrgSelectionURLString:(NSString *)URLString;

/*!
* @brief Returns if the string is a token login
*/
+ (BOOL)isTokenLoginURLString:(NSString *)URLString;

/*!
 @brief Compares  2 URL strings for equality
 @param url1
 @param url2
 @return true if URLs map to same location
 */
+ (BOOL)URL:(NSString *)url1 isEqualToURL:(NSString *)url2;

/*!
 @brief For a given URL, parses the parameters and returns a dictionary of keys to values
 @param url
 @return dictionary of query params to values
 */
+ (NSDictionary *)queryParametersFromURL:(NSURL *)url;


/// Removes any query parameters matching the given query in the url
/// @param url Url to remove queries from
/// @param queryParam Query key/value pair to remove
+ (NSString *)removeFromUrl:(NSURL *)url queryParameter:(NSURLQueryItem *)queryParam;

/**
 @brief Check if a specified URL string contains a specified host or not
 @param URLString the URL string
 @param host the host string
 @return YES if URL contains the host, NO otherwise
 */
+ (BOOL)doesURLString:(NSString *) urlString containHost:(NSString *)host;

/// append "/WCF/Epic.MyChartMobile/MyChartMobile.svc/rest" to the url if it doesn't end with it.
/// @param url the original url
+ (NSString *) appendURLSuffixIfNotPresent:(NSString *) url;

/**
 * Determines if a given URL is intended to be used to start an external SAML workflow.
 *
 * @param URLString the URL string to check for SAML components. This is case-insensitive.
 * @return true if the URLString contains a path that is recognized as a SAML redirect login attempt.
 */
+ (BOOL)urlIsForExternalSAMLLogin:(NSString *)URLString;

/**
 * Determines if a given URL is intended to be used to start a SAML workflow.
 *
 * @param URLString the URL string to check for SAML components. This is case-insensitive.
 * @return true if the URLString contains a path that is recognized as a SAML redirect login attempt.
 */
+ (BOOL)urlIsForSAMLLogin:(NSString *)URLString;

/**
 * Determines if a given URL is intended to be used to log out of a SAML session.
 *
 * @param URLString the URL string to check for SAML components. This is case-insensitive.
 * @return true if the URLString contains a path that is recognized as a SAML redirect logout attempt.
 */
+ (BOOL)urlIsForSAMLLogout:(NSString *)URLString;

/**
* Determines if a given URL is intended to be used to log in natively
*
* @param URLString the URL string to check for native login components. This is case-insensitive.
* @return true if the URLString contains openlogin in the host
*/
+ (BOOL)urlIsForNativeLogin:(NSString *)URLString;
@end
