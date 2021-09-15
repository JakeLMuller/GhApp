//
//  WPGetFlowsheetReadingsRequest.h
//  iChart
//
//  Created by Matthew Flatau on 7/28/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPRequest.h"

@class WPGetFlowsheetReadingsResponse;

@interface WPGetFlowsheetReadingsRequest : WPRequest

- (id)initWithEpisodeID:(NSString *)episodeID startDate:(NSDate *)startDate andEndDate:(NSDate *)endDate;
- (WPGetFlowsheetReadingsResponse *)allocResponse;

@end
#endif
