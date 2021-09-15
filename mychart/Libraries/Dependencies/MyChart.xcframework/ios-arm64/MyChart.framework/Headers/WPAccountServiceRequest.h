//
//  WPAccountServiceRequest.h
//  iChart
//
//  Created by Jesse Dumke on 7/3/12.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import <Foundation/Foundation.h>

@class WPAccountServiceResponse;

@interface WPAccountServiceRequest : WPRequest

-(WPAccountServiceResponse *)allocResponse;

@end
