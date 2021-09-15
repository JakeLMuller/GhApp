//
//  WPMessagesTableViewController.h
//  iChart
//
//  Created by Epic on 9/2/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPTableViewController.h"
#import "WPMessage.h"
#import "WPMessagesTabBarController.h"

@interface WPMessagesTableViewController : WPTableViewController 

- (instancetype) initWithFolderType:(WPMessageFolder)folder;
- (void)composeButtonClicked:(id)sender;

/*!
* @brief Returns if ask a question is allowed.   Either customer service or medical advice.
*/
+(BOOL)isAskAQuestionAllowed;

@end
