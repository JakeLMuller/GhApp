//
//  CoverageServiceRequest.h
//  iChart
//
//  Created by Sanders Baik on 7/16/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class WPCoverageServiceResponse;

@interface WPCoverageServiceRequest : WPRequest

-(instancetype)init;

-(WPCoverageServiceResponse*)allocResponse;

@end
