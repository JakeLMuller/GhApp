//
//  WPGetPatientVisitGuideResponse.h
//  MyChart
//
//  Created by Alex J White on 2/27/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPResponse.h"
#import "WPPatientVisitGuide.h"

@interface WPGetPatientVisitGuideResponse : WPResponse

@property WPPatientVisitGuide *result;

@end
