//
//  WPRxRefillsDueAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/1/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlert.h"

@interface WPRxRefillsDueAlert : WPAlert <IWPRxRefillsDueAlert>

@property (nonatomic, assign) NSInteger numberOfDays;
@property (nonatomic, strong) NSString *rxName;
@property (nonatomic, strong) NSString *rxID;

@end
