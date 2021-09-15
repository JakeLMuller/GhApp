//
//  WPAPIFDILink.h
//  MyChart
//
//  Created by Alex J White on 7/23/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WPAPIFDIDelegate;

@interface WPAPIFDILink : NSObject

/**
 * @brief Gets the URL for a given FDI record ID and passes the value back to the delegate.
 * @param fdiID - the FDI record ID
 * @param delegate - the delegate to return the URL value to
 */
+ (void) getUrlStringWithFdiID:(NSString *)fdiID callback:(id <WPAPIFDIDelegate>) delegate;

/**
 * @brief Gets the URL for a given FDI record ID using a dictionary of context variables and passes the value back to the delegate.
 * @param fdiID - the FDI record ID
 * @param contextDict - the variables to be added to the request in a key value pair
 *                      Examples for this could be "CSN=12345" or "ORD=54321"
 * @param delegate - the delegate to return the URL value to
 */
+ (void) getUrlStringWithFdiID:(NSString *)fdiID contextDict:(NSMutableDictionary *)contextDict callback:(id <WPAPIFDIDelegate>) delegate;

@end

/**
 * @brief Declares a delegate protocol for callers to implement to be notified when the FDI URL is returned for an FDI record
 */
@protocol WPAPIFDIDelegate <NSObject>

/**
 * @brief Delegate method that can be implemented to handle when the URL gets returned from an FDI record.
 * @param url - the URL string
 */
- (void) didGetUrlString:(NSString *) url;

/**
 * @brief Delegate method that can be implemented to handle the error when an FDI record fails to get the URL.
 * @param url - the error
 */
- (void) didFailToGetUrlWithError:(NSError *) error;

@end
