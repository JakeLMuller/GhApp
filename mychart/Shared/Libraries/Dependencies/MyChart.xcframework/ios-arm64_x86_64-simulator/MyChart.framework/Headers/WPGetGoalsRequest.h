//
//  WPGetGoalsRequest.h
//  MyChart
//
//  Created by Yash Vaka on 1/6/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPGetGoalsResponse.h"


@class WPGetGoalsResponse;

@interface WPGetGoalsRequest : WPRequest{
}

- (WPGetGoalsResponse *)allocResponse;

@end

