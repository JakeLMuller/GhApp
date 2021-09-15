//
//  WPHealthRemindersAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/1/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlert.h"

@interface WPHealthRemindersAlert : WPAlert <IWPHealthRemindersAlert>

@property (nonatomic, strong) NSString *healthReminderName;

@end
