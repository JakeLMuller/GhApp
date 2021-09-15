//
//  WPHealthLinksDisplayManager.h
//  iChart
//
//  Created by Ben Drda on 8/28/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import "WPHKOrganizationMap.h"
#import "WPHKInfoResponse.h"
#import "WPActivityActionButton.h"

@protocol WPHealthLinksToolbarControllerProtocol <NSObject>

- (void)launchHealthLinksActivityWithConfig: (WPHealthKitInfo *)config;

@end


/*!
 @brief Class adds the Health Links icon to a given toolbar and handles its presses and appearance
 @author Ben Drda
 */
@interface WPHealthLinksActivityButton : WPActivityActionButton

@property (nonatomic, strong) WPHealthKitInfo *hkConfig;

/*!
 @brief Given a response, to the HealthKit Info call, set up the toolbar
 @param response the response
 */
- (void)didGetConfig:(WPHKInfoResponse *)response;

@end
#endif
