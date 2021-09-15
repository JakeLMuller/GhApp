//
//  WPNotificationPreferencesViewController.h
//  MyChart
//
//  Created by Alex J White on 11/13/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPViewController.h"

static NSString * const kWPEmailDictionaryKey = @"emailDictionary";
static NSString * const kWPPhoneDictionaryKey = @"phoneDictionary";

@interface WPNotificationPreferencesViewController : WPViewController <UITextFieldDelegate>

- (instancetype)initWithEmail:(NSString *)email andSMS:(NSString *)smsNumber;

@end
