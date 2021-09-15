//
//  WPInitVideoResponse.h
//  iChart
//
//  Created by Matthew Flatau on 12/16/13.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPInitVideoResult.h"

@interface WPInitVideoResponse : WPResponse

@property (nonatomic, strong, nullable) WPInitVideoResult *result;

@end
