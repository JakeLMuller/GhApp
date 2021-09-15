//
//  CoverageServiceResponse.h
//  iChart
//
//  Created by Sanders Baik on 7/16/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPObject.h"


@interface WPCoveragesResult : WPObject
@property (nonatomic, strong) NSMutableArray* coverages;
@end

@interface WPCoverageServiceResponse : WPResponse

@property (nonatomic, strong) WPCoveragesResult *coveragesResult;

@end
