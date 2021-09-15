//
//  WPCustomFeatureRequest.h
//  iChart
//
//  Created by Matthew Flatau on 7/15/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"

@class WPCustomFeatureResponse;

@interface WPCustomFeatureRequest : WPRequest

- (WPCustomFeatureResponse *)allocResponse;

@end
