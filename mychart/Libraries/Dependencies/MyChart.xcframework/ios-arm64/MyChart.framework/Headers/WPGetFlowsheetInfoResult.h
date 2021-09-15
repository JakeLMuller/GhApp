//
//  WPGetFlowsheetInfoResult.h
//  MyChart
//
//  Created by Wansui Su on 2/7/20.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPObject.h"
#import "WPFlowsheet.h"

static NSString * const GET_FLOWSHEETINFO_SUCCESS = @"SUCCESS";
static NSString * const GET_FLOWSHEETINFO_FAILURE = @"FAILURE";

@interface WPGetFlowsheetInfoResult : WPObject

@property (nonatomic, strong) NSString *status;
@property (nonatomic, strong) WPFlowsheet *flowsheet;

@end
#endif
