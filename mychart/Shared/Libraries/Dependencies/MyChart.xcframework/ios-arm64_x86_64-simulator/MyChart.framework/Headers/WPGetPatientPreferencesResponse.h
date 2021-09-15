//
//  WPGetPatientPreferencesResponse.h
//  MyChart
//
//  Created by Alex J White on 12/8/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPGetPatientPreferencesResult.h"

@interface WPGetPatientPreferencesResponse : WPResponse

@property (nonatomic, strong) WPGetPatientPreferencesResult *result;
@end
