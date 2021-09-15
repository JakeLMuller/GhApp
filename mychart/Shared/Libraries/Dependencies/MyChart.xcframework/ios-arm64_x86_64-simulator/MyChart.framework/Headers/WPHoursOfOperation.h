//
//  WPHoursOfOperation.h
//  MyChart
//
//  Created by Yechan Hong on 4/8/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WPObject.h"

@interface WPHoursOfOperation : WPObject

@property (nonatomic, strong) NSDate* endTimeISO;
@property (nonatomic, strong) NSDate* startTimeISO;
@property (nonatomic) BOOL isOpen;

@end
