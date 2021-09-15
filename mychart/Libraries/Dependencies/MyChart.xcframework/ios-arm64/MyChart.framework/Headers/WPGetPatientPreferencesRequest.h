//
//  WPGetPatientPreferencesRequest.h
//  MyChart
//
//  Created by Alex J White on 12/8/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPGetPatientPreferencesResponse.h"

@interface WPGetPatientPreferencesRequest : WPRequest
- (WPGetPatientPreferencesResponse *)allocResponse;

@end
