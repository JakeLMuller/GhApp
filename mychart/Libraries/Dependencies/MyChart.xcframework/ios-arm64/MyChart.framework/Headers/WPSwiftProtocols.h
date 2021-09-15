//
//  WPSwiftProtocols.h
//  MyChart
//
//  Created by David Huntsman on 5/17/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

//Place all protocols to be used by called by swift and handled by objective C in this class
#import "WPFDIResult.h"


@protocol WPFutureAppointmentProviderViewDelegate
@required
- (void) getDirections:(nullable NSString*)address;
- (void) callProvider:(nullable NSString*)number;
@end

@protocol WPViewContainingWebViewDelegate
@required
- (void) navigateToAllowedHostForRequest:(nullable NSURLRequest *)request allowedHosts:(nullable NSArray *)allowedHosts;
- (void) openUrlInExternalBrowser:(nullable NSURL *)url;
@end

@protocol WPGetMyChartUrlCallbackProtocol
@required
- (void) onGetMyChartUrl:(nonnull NSURLRequest *)urlRequest :(nonnull NSArray *)allowedHosts;
- (void) onGetMyChartUrlFailed;
@end

@protocol WPGetMyChartJumpTokenCallbackProtocol
@required
- (void) onGetMyChartJumpToken:(nonnull NSURLRequest *)urlRequest :(nonnull NSArray<NSString *> *)allowedHosts :(BOOL)isExternalOrg :(PEOrganizationInfo*_Nullable)organizationInfo;
- (void) onGetMyChartJumpTokenFailed;
@end

@protocol WPCustomFeatureLaunchListener
@required
- (bool) showExternalLinkPrompt;
- (void) onLaunchSuccessWithLaunchMode:(WPLaunchType)launchMode;
- (void) onLaunchFailure:(Boolean)showError;
@end
