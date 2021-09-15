//
//  WPUrgentCareDepartmentsRequest.h
//  MyChart
//
//  Created by Yechan Hong on 3/24/15.
//  Copyright (c) 2015-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
//
#import "WPRequest.h"
#import "WPUrgentCareDepartmentsResponse.h"

@class WPUrgentCareDepartmentsResponse;

@interface WPUrgentCareDepartmentsRequest : WPRequest {
    
}

- (WPUrgentCareDepartmentsResponse *)allocResponse;

@end
