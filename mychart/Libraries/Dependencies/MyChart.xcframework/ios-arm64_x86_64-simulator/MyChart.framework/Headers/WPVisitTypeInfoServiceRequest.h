//
//  WPVisitTypeInfoServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 8/25/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
//
#import "WPRequest.h"

@class WPVisitTypeInfoServiceResponse;

@interface WPVisitTypeInfoServiceRequest : WPRequest

- (instancetype)initWithReasonForVisitIndex:(NSInteger)index;

- (WPVisitTypeInfoServiceResponse *) allocResponse;

@end
