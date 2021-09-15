//
//  WPGenerateAuthTokenResponse.h
//  MyChart
//
//  Created by Alex J White on 4/3/15.
//  Copyright © 2020-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPGenerateAuthTokenResult.h"

@interface WPGenerateAuthTokenResponse : WPResponse

@property (nonatomic, strong) WPGenerateAuthTokenResult* result;

@end
