//
//  WPAddFlowsheetReadingsResponse.h
//  iChart
//
//  Created by Matthew Flatau on 8/15/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPResponse.h"
#import "WPAddFlowsheetReadingsResult.h"

@interface WPAddFlowsheetReadingsResponse : WPResponse

@property (nonatomic, strong) WPAddFlowsheetReadingsResult *result;

@end
#endif
