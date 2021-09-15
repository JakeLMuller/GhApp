//
//  WPSchedulingInfoRequest.h
//  iChart
//
//  Created by Chetan Satish on 8/3/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
//
#import "WPRequest.h"

@class WPSchedulingInfoResponse;

@interface WPSchedulingInfoRequest : WPRequest {
	
}

-(WPSchedulingInfoResponse*)allocResponse;


@end
