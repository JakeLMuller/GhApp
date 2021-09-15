//
//  WPHealthAdvisoriesDisplayManager.h
//  iChart
//
//  Created by Jesse Dumke on 4/26/13.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WPHealthAdvisory.h"

@interface WPHealthAdvisoriesDisplayManager : NSObject

+ (NSString *)statusTextForHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (NSString *)lastDoneTextForHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (UIColor *)statusTextColorForHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (WPHealthAdvisoryTopicStatus)statusFromHealthAdvisory:(WPHealthAdvisory *)advisory;
+ (BOOL) canMarkCompleteFromHealthAdvisory:(WPHealthAdvisory*)advisory;

+ (NSString *)overDueStatusFromHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (NSString *)dueStatusFromHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (NSString *)dueSoonStatusFromHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (NSString *)notDueStatusFromHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (NSString *)satisfiedStatusFromHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (NSString *)addressedStatusFromHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (NSString *)postponedStatusFromHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (NSString *)unknownStatusFromHealthAdvisory: (WPHealthAdvisory *)advisory;
+ (NSString *)pendingStatusFromHealthAdvisory: (WPHealthAdvisory *)advisory;

@end
