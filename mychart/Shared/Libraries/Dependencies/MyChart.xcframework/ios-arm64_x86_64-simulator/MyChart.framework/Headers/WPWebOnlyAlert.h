//
//  WPWebOnlyAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 11/29/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlert.h"

@interface WPWebOnlyAlert : WPAlert

@property (nonatomic, strong) NSMutableArray *patientsWithWebAlerts;
@property (nonatomic) NSInteger totalNumberOfWebAlerts;

@end
