//
//  WPGetPatientVisitGuideRequest.h
//  MyChart
//
//  Created by Alex J White on 2/27/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPRequest.h"
#import "WPGetPatientVisitGuideResponse.h"

@interface WPGetPatientVisitGuideRequest : WPRequest

-(WPGetPatientVisitGuideResponse*) allocResponse;

@end
