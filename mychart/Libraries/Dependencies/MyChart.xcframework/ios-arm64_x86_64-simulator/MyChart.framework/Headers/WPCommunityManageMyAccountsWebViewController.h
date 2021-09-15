//
//  WPCommunityManageMyAccountsWebViewController.h
//  MyChart
//
//  Created by Shawn Zhao on 1/29/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPActivityWebViewController.h"

@interface WPCommunityManageMyAccountsWebViewController : WPActivityWebViewController

- (instancetype)init;
- (instancetype)init:(BOOL)showPopupWhenClose;

- (instancetype)initForLinking;
- (void) setCommunityUpdateContext:(NSString *) context;
@end
