//
//  WPCustomAppManager.h
//  iChart
//
//  Created by Chetan Satish on 1/21/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPCustomFeature.h"
#import "WPSwiftProtocols.h"
//Class for custom app spring board button
@interface WPCustomAppManager : NSObject
+ (void)launchCustomActivityForFeature:(nonnull WPCustomFeature *)feature inNavigationController:(nonnull UINavigationController *)navigationController organizationInfo:(nullable WPOrganizationInfo *)organizationInfo;

+ (void)launchCustomActivityForFeatureWithContext:(nonnull WPCustomFeature *)feature inNavigationController:(nonnull UINavigationController *)navigationController context:(nullable NSMutableArray *)context organizationInfo:(nullable WPOrganizationInfo *)organizationInfo;

+ (void)launchCustomActivityForFeatureWithContext:(nonnull WPCustomFeature *)feature inNavigationController:(nonnull UINavigationController *)navigationController context:(nullable NSMutableArray *)context organizationInfo:(nullable WPOrganizationInfo *)organizationInfo listener:(_Nullable id<WPCustomFeatureLaunchListener>)callbackDelegate;

@end

