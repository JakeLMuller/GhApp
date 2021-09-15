//
//  WPGenericAlertInfo.h
//  MyChart
//
//  Created by Matt Richardson on 10/17/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WPGenericAlertInfo: NSObject

@property (nonatomic, strong, nullable) NSString *title;
@property (nonatomic, strong, nullable) NSString *message;

- (nullable instancetype) initWithTitle:(nullable NSString *)title message:(nullable NSString *)message;

@end
