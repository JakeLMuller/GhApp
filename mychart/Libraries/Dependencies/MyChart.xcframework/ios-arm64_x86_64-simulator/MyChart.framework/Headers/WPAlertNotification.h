//
//  WPAlertNotification.h
//  MyChart
//
//  Created by Matthew Flatau on 2/18/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPAlert.h"

@interface WPAlertNotification : NSObject

@property (nonatomic, strong) WPAlert *alert;
@property (nonatomic, strong) WPPatientContext *patient;
@property (nonatomic, assign) NSUInteger patientIndex;

@end
