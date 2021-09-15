//
//  WPSAMLLoginWebViewController.h
//  MyChart
//
//  Created by Matt Flatau on 8/17/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPWebViewController.h"

@class WPSAMLLoginWebViewController;

@protocol WPSAMLLoginDelegate <NSObject>

/**
 * Callback method for delegate after the controller successfully parses the SAML credentials
 *
 * @param controller - the WPSAMLLoginWebViewController that retrieved the username and token. At the time
 *                     of calling this method the controller will not have been dismissed.
 * @param username - the MyChart username to login with
 * @param loginToken - the SAML token to login with
 */
- (void)SAMLLoginController:(WPSAMLLoginWebViewController *)controller didGetUsername:(NSString *)username loginToken:(NSString *)loginToken;

/**
 * Callback method for delegate after the controller receives an error URL with the samlLoggedIn query parameter
 * @param urlString - a string version of the URL for the webview to load
*/
- (void)didGetSamlLoggedInErrorWithURLString:(NSString *)urlString;

@end

@interface WPSAMLLoginWebViewController : WPWebViewController
/**
 * The designated initializer, should be created from a URLRequest whose absolute value returns true for the below
 * urlIsForSAMLLogin.
 *
 * @param URLRequest a URL request intended to launch into a SAML login workflow. Typically this will be captured from the pre-login webview.
 * @param delegate The SAMLLoginDelegate to return a token and username too if the workflow is completed.
 * @param organization The organization for which the SAML view controller needs to be launched for
 * @return A new WPSAMLLoginWebViewController instance
 */
- (instancetype)initWithURLRequest:(NSURLRequest *)URLRequest delegate:(id <WPSAMLLoginDelegate>)delegate organization:(WPServer *)organization NS_DESIGNATED_INITIALIZER;

/**
 * We should always init from the designated intializer, so disable the default one
 */
- (instancetype)init NS_UNAVAILABLE;


@end
