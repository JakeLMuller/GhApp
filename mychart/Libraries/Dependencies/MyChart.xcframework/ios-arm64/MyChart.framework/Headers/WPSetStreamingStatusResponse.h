//
//  WPSetStreamingStatusResponse.h
//  iChart
//
//  Created by Matthew Flatau on 12/20/13.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPStreamingStatusResult.h"

@interface WPSetStreamingStatusResponse : WPResponse

@property (nonatomic, strong) WPStreamingStatusResult *result;

@end

