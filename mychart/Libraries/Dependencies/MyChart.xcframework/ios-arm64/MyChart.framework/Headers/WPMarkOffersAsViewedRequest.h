//
//  WPMarkOffersAsViewedRequest.h
//  MyChart
//
//  Created by Matthew Flatau on 1/7/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"

@interface WPMarkOffersAsViewedResult : WPObject
@property (nonatomic, assign) BOOL success;
@end

@interface WPMarkOffersAsViewedResponse : WPResponse
@property (nonatomic, strong) WPMarkOffersAsViewedResult *result;
@end

@interface WPMarkOffersAsViewedRequest : WPRequest

@property (nonatomic, strong) NSArray *waitListEntries;
@property (nonatomic, readonly) BOOL shouldExecute; //If there are any inactive entries to mark as viewed

- (instancetype)initWithWaitListEntries:(NSArray *)waitListEntries;

@end
