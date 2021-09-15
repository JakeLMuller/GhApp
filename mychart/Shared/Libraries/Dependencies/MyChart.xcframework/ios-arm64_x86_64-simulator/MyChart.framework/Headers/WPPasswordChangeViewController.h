///
//  WPPasswordChangeViewController.h
//  MyChart
//
//  Created by Yash Vaka on 2/21/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WPViewController.h"
#import "WPTableViewController.h"

typedef NS_ENUM(NSInteger, WPPasswordChangeType) {
    kWPPasswordChangeTypeError = 0,
    kWPPasswordChangeTypeExpiredPassword = 1,
    kWPPasswordChangeTypeChangePassword = 2,
} ;


@interface WPPasswordChangeViewController : WPViewController <UITextFieldDelegate>

- (instancetype) initWithType:(WPPasswordChangeType)type completionHandler:(void (^)(BOOL success, NSString *updatedPassword))completionHandler;

@end
