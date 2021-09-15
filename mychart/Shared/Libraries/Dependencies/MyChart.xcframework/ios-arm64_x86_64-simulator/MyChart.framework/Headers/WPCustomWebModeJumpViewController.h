//
//  WPCustomWebModeJumpViewController.h
//  MyChart
//
//  Created by Yash Vaka on 7/24/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPActivityWebViewController.h"

@interface WPCustomWebModeJumpViewController : WPActivityWebViewController 


/**
 Returns a new vc controller that jumps to a custom mychart web mode

 @param name Name of the activity
 @param webMode The mode to jump to on the website
 @return A web view controller
 */
- (instancetype)initWithName:(NSString *)name webMode:(NSString *)webMode;

- (instancetype)initWithName:(NSString *)name parameters:(NSDictionary *)params;

- (instancetype)initWithName:(NSString *)name parameters:(NSDictionary *)params patientIndex: (NSInteger)patientIndex isExternal:(bool)isExternal orgID:(NSString *)orgID;

- (BOOL)shouldAllowForNavigationAction:(WKNavigationAction *)navigationAction openPDFInSeparateWebview:(BOOL)openPDFInSeparateWebview;

- (BOOL) pregnancyHubEnrollRedirect:(WKNavigationAction *)navigationAction;

@end
