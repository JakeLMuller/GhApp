//
//  WPUrgentCareDepartmentsResponse.h
//  MyChart
//
//  Created by Yechan Hong on 3/24/15.
//  Copyright (c) 2015-2021 Epic Systems Corporation. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPUrgentCareDepartmentsResult.h"

@interface WPUrgentCareDepartmentsResponse : WPResponse {
    
}

@property (nonatomic, strong) WPUrgentCareDepartmentsResult *urgentCareDepartmentsResponse;

@end
