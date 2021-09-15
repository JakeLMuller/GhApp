//
//  WPCustomLinksResponse.h
//  MyChart
//
//  Created by Kip Price on 3/20/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPCustomLinksResult.h"


/**
 Response from customLinks web service
 */
@interface WPCustomLinksResponse : WPResponse

/**
 The results of our web service call, parsed into lists of WPCustomFeatures
 */
@property (nonatomic, strong, nullable) WPCustomLinksResult *result;

@end
