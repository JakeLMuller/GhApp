//
//  WPAcceptTCServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 11/11/09.
//  Copyright © 2009-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"

@class AcceptTCServiceResponse;

@interface WPAcceptTCServiceRequest : WPRequest

- (instancetype)initToAcceptTermsConditions;
- (instancetype)initToAcceptProxyDisclaimer;

- (AcceptTCServiceResponse*)allocResponse;

@end
