//
//  WPUpdateNotificationPreferencesAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 2/10/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlert.h"

@interface WPUpdateNotificationPreferencesAlert : WPAlert <IWPUpdateNotificationPreferencesAlert>

@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *phoneNumber;

@end
