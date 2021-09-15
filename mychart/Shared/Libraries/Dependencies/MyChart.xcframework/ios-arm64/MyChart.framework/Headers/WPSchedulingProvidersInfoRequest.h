//
//  WPSchedulingProvidersInfoRequest.h
//  iChart
//
//  Created by Chetan Satish on 8/4/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
//
#import "WPRequest.h"

@class WPSchedulingProvidersInfoResponse;

@interface WPSchedulingProvidersInfoRequest : WPRequest {

}

-(instancetype)initWithReasonForVisitIndex:(NSInteger)index;
- (WPSchedulingProvidersInfoResponse *) allocResponse;

@end
