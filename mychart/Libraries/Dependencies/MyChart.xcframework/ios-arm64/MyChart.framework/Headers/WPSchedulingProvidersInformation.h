//
//  WPSchedulingProvidersInformation.h
//  iChart
//
//  Created by Chetan Satish on 8/4/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>
#import "WPObject.h"

@class WPDepartment;
@class WPCategory;

static NSString * const kAllLocationCenterID = @"#";

@interface WPSchedulingProvidersInformation : WPObject

@property (nonatomic, assign) BOOL canSchedule;
@property (nonatomic, assign) NSInteger error;

@property (nonatomic, strong) NSMutableArray *centers;
@property (nonatomic, strong) NSMutableArray *schedulingDepartments;
@property (nonatomic, strong) NSMutableArray *schedulingProviders;

- (WPDepartment *)departmentWithID:(NSString *)ID;
- (WPCategory *)centerWithValue:(NSString *)value;

@end
