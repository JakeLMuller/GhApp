//
//  WPFutureAppointmentsResult.h
//  iChart
//
//  Created by Matthew Flatau on 12/8/14.
//  Copyright © 2020-2021  Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"

@interface WPFutureAppointmentsResult : WPObject

@property (strong, nonatomic, nullable) NSMutableArray *appointments;
@property (strong, nonatomic, nullable) NSMutableArray *waitListEntries;

@end
