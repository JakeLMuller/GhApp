//
//  WPAddFlowsheetReadingsRequest.h
//  iChart
//
//  Created by Matthew Flatau on 8/15/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPRequest.h"

@class WPAddFlowsheetReadingsResponse;

@interface WPAddFlowsheetReadingsRequest : WPRequest

- (id)initWithEpisodeID:(NSString *)episodeID andReadings:(NSArray *)readings;
- (WPAddFlowsheetReadingsResponse *)allocResponse;
@property (nonatomic, strong) NSArray *readings;

@end
#endif
