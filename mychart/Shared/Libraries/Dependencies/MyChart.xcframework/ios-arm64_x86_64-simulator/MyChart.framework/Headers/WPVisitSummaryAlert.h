//
//  WPVisitSummaryAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 12/5/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlert.h"

@interface WPVisitSummaryAlert : WPAlert <IWPVisitSummaryAlert>

@property (nonatomic, strong) NSString  *visitDAT;
@property (nonatomic, strong) NSDate    *visitDate;
@property (nonatomic, strong) NSString  *visitType;
@property (nonatomic, strong) NSString  *providerName;

@end
