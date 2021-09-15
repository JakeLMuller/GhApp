//
//  WPNewOutpatientLabsAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/1/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//
//This also serves the purpose for the <2016 New Labs alert type

#import "WPAlert.h"

@interface WPOutpatientLabsAlert : WPAlert <IWPOutpatientLabsAlert>

@property (nonatomic, strong) NSDate *labDate;
@property (nonatomic, strong) NSString *labName;

@end
