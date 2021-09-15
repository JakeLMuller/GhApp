//
//  WPGetFlowsheetsRequest.h
//  iChart
//
//  Created by Matthew Flatau on 7/28/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPRequest.h"

@class WPGetFlowsheetsResponse;

@interface WPGetFlowsheetsRequest : WPRequest

- (WPGetFlowsheetsResponse *)allocResponse;

@end
#endif
