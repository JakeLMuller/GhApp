//
//  WPURLSession.h
//  MyChart
//
//  Created by Mohammed Rangwala on 1/17/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

@interface WPURLSession : NSObject

+ (void)executeRequest:(WPRequest *)request;

+ (void)cancelRequest:(WPRequest *)request;

@end
