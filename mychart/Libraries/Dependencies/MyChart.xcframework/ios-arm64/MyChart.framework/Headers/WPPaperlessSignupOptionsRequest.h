//
//  WPPaperlessSignupOptionsRequest.h
//  iChart
//
//  Created by Jesse Dumke on 8/14/12.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import <Foundation/Foundation.h>

@class WPPaperlessSignupOptionsResponse;

@interface WPPaperlessSignupOptionsRequest : WPRequest

-(WPPaperlessSignupOptionsResponse *)allocResponse;

@end
