//
//  WPScheduleProvidersSelectViewController.h
//  iChart
//
//  Created by Chetan Satish on 8/11/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPPopupViewController.h"
#import "WPSchedulingProvidersInformation.h"

@interface WPScheduleProvidersSelectViewController : WPPopupViewController<UITableViewDelegate, UITableViewDataSource>

- (instancetype)initWithProvidersInformation:(WPSchedulingProvidersInformation *)schedulingProvidersInfo
                           selectedProviders:(NSMutableArray *)selectedSchedProviders
                           completionHandler:(void (^)(NSMutableArray *))completionHandler;

/*!
 * @brief If YES - the UI will let you select multiple providers, else only one provider will be allowed to be selected.
 * 
 * NOTE: With the new pop up view, multiple providers isn't allowed, but the scheduling view controller and the web services support multiple providers in case it needs to be supported in the future.
 */
//@property (nonatomic, assign) BOOL allowMultiSelect;

@end
