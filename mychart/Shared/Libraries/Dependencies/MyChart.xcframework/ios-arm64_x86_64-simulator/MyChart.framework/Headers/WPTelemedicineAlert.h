//
//  WPTelemedicineAlert.h
//  MyChart
//
//  Created by Mohammed Rangwala on 11/29/16.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPAlert.h"

@interface WPTelemedicineAlert : WPAlert <IWPTelemedicineAlert>

@property (nonatomic, strong) NSDate *appointmentDate;
@property (nonatomic, strong) NSString *providerName;
@property BOOL isOnDemand;
@property BOOL isXOrg;
@property (nonatomic, strong) NSString *remoteOrgName;
@property (nonatomic, strong) NSString *remoteOrgId;

@end
