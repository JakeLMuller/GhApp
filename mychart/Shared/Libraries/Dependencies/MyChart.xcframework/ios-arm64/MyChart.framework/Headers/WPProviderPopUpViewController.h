//
//  WPProviderPopUpViewController.h
//  MyChart
//
//  Created by Yash Vaka on 1/14/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPPopupViewController.h"
#import "WPProvider.h"

@interface WPProviderPopUpViewController : WPPopupViewController

- (instancetype)initWithProvider:(WPProvider *)provider;

@end
