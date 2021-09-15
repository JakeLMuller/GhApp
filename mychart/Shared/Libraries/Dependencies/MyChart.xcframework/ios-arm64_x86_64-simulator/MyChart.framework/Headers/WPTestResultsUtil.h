//
//  WPTestResultUtil.h
//  MyChart
//
//  Created by Ben Drda on 1/27/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPTestDetail.h"
#import "WPTestResult.h"
#import "WPTestComponent.h"
#import "WPTestComments.h"
#import "WPTestResultDetailServiceResponse.h"

typedef void (^WPTestResultDetailCompletionBlock)(WPTestResultDetailServiceResponse *);

typedef NS_ENUM(NSInteger, WPComponentFlagType) {
    kWPComponentFlagTypeNormal,
    kWPComponentFlagTypeAbnormal,
    kWPComponentFlagTypePanic,
};

@interface WPTestResultsUtil : NSObject

/*!
 * Determines if the given component should be considered as normal
 * @param component the component to inspect
 * @returns YES if the component is normal, NO otherwise
 */
+ (BOOL)isComponentNormal:(WPTestComponent *)component;

/*!
 * Returns the flag type for the component.
 * @param component the component to inspect
 * @returns the WPComponentFlagType (Abnormal, Panic, Normal, etc.)
 */
+ (WPComponentFlagType)componentFlagType:(WPTestComponent *)component;

/*!
 * Load the WPTestDetail for a given test result
 *
 * @param theOrderID the ID of the order to lookup
 * @param dat the DAT of the order to lookup
 * @param organization ID of the order to lookup
 *
 * Callback runs on the main thread
 */
+ (void)startServiceRequestWithID:(NSString*)theOrderID dat:(NSString*)dat org:(WPOrganizationInfo*)org completionBlock:(WPTestResultDetailCompletionBlock)completionBlock;
    
/*!
 * Load the WPTestDetail for a given test result
 *
 * @param theOrderID the ID of the order to lookup
 * @param dat the DAT of the order to lookup
 * @param organization ID of the order to lookup
 * @param overrideAddress URL root to use when routing to another environment (in a Chart Sync community)
 *
 * Callback runs on the main thread
 */
+ (void)startServiceRequestWithID:(NSString*)theOrderID dat:(NSString*)dat org:(WPOrganizationInfo*)org completionBlock:(WPTestResultDetailCompletionBlock)completionBlock overrideAddress:(NSString*)address evaluateH2GOnServer:(BOOL)evaluateH2GOnServer isOrderIdEncrypted:(BOOL)isOrderIdEncrypted;

/*!
 * Clears the test result detail request for the given orderId
 * @param orderId id of the order that we previously requested details for
 */
+ (void)clearRequestForId:(NSString *)orderId;

/*!
 * Generates an attributed string to display a component value. We'll bold the entire value, and if it's an abnormal component, we'll change the background and text color to abnormal color values from the theme.
 * @param component the component we want the value from
 * @param font the font to base the attributed string
 * @returns an attributed string with the font, and perhaps background and text colors set
 */
+ (NSAttributedString *)valueStringForComponent:(WPTestComponent *)component withBaseFont:(UIFont *)font;

/*!
 * Generates a text color for use in the name and value of the given component
 * @param component the component to generate a text color for
 * @returns the theme color appropriate for the given component
 */
+ (UIColor *)textColorForComponent:(WPTestComponent *)component;

/*!
 * Given a comment, generates the text that should show up underneath the comment
 * @param comment the comment we need the footer for
 * @returns the footer text
 */
+ (NSString *)footerTextForComment:(WPTestComments *)comment;

/*!
 * Given a component, returns the string to be used for the standard range
 * @param component the component
 * @returns the string to use to display the standard range
 */
+ (NSString*)rangeStringForComponent:(WPTestComponent*)component;

/*!
 * Given a component, construct and return the range that should be supplied to the screen reader.
 * This can differ from the display range because certain characters that are fine for display can be read by the screen reader in a way we don't want.
 * @param component the component
 * @returns the string to be read by the screen reader, or nil if one can't be determined.
 */
+ (NSString*)accessibilityRangeStringForComponent:(WPTestComponent*)component;

@end
