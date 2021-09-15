//
//  WPGetFlowsheetInfoResponse.h
//  MyChart
//
//  Created by Wansui Su on 2/7/20.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPResponse.h"
#import "WPGetFlowsheetInfoResult.h"

@interface WPGetFlowsheetInfoResponse : WPResponse

@property (nonatomic, strong) WPGetFlowsheetInfoResult *result;

@end
#endif
