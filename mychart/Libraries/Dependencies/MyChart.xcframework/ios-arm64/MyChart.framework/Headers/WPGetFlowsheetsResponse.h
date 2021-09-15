//
//  WPGetFlowsheetsResponse.h
//  iChart
//
//  Created by Matthew Flatau on 7/28/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPResponse.h"

@class WPGetFlowsheetsResult;

@interface WPGetFlowsheetsResponse : WPResponse

@property (nonatomic, strong) WPGetFlowsheetsResult *result;

@end
#endif
