//
//  WPGetFlowsheetReadingsResponse.h
//  iChart
//
//  Created by Matthew Flatau on 7/28/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPResponse.h"
#import "WPGetFlowsheetReadingsResult.h"

@interface WPGetFlowsheetReadingsResponse : WPResponse

@property (nonatomic, strong) WPGetFlowsheetReadingsResult *result;

@end
#endif
