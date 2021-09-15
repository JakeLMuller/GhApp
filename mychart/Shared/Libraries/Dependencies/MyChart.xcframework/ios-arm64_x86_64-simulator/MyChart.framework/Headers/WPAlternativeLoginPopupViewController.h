//
//  WPAlternativeLoginPopupViewController.h
//  MyChart
//
//  Created by Yechan Hong on 4/19/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPPopupViewController.h"

@interface WPAlternativeLoginPopupViewController : WPPopupViewController

+ (WPAlternativeLoginPopupViewController *)getAccountSettingsAlert;
- (void)dontAskMeAgain:(id)sender;

@end
