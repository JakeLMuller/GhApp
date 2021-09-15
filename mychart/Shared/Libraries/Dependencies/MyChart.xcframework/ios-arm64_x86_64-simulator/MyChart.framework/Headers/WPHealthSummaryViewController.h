//
//  WPHealthSummaryViewController.h
//  iChart
//
//  Created by Chetan Satish on 2/24/10.
//  Copyright © 2010-2021 Epic. All rights reserved.
//
//  *mflatau 03/2014 307093 Adding navigationBar property to fix layout in iOS7
//  *mflatau 06/2014 316778 Updating to ARC
//  *tgupta  09/2014 329241 Adding support for accessibility

#import <UIKit/UIKit.h>
#import "WPViewController.h"
#import "WPUtil_UI.h"

/**
 * Used to house health summary info
 *
 * Mimics a tab bar controller
 *
 */
@protocol WPHealthSummaryMOWorkflowCompleteDelegate <NSObject>
@required
-(void) onHealthSummaryMOWorkflowComplete;
@end

@interface WPHealthSummaryViewController : WPViewController

- (instancetype)initWithUserInfo:(NSDictionary *)userInfo;

@end


