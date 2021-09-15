//
//  WPPatientVisitGuide.h
//  MyChart
//
//  Created by Alex J White on 2/27/17.
//  Copyright © 2017-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"

@interface WPPatientVisitGuide : WPObject

typedef NS_ENUM(NSInteger, WPPatientVisitGuideStatus) {
    kEpicVisitGuideStatusFailed = 0,
    kEpicVisitGuideStatusSuccess = 1,
    kEpicVisitGuideStatusInProgress = 2,
    kEpicVisitGuideStatusInvalid = 3,
};

@property (nonatomic, strong) NSData *data;
@property (nonatomic) WPPatientVisitGuideStatus fileStatus;

@end
