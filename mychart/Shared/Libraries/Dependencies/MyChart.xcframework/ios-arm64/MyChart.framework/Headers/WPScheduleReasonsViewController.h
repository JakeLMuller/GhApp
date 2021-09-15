//
//  WPScheduleReasonsViewController.h
//  iChart
//
//  Created by Chetan Satish on 8/4/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <UIKit/UIKit.h>
//
#import "WPPopupViewController.h"

@class WPReasonForVisit;

@interface WPScheduleReasonsViewController : WPPopupViewController

- (instancetype)initWithReasonsForVisit:(NSArray *)reasons
                         selectedReason:(WPReasonForVisit *)reason
                      completionHandler:(void (^)(WPReasonForVisit *))completionHandler;

@end
