//
//  WPGetPatientPreferencesResult.h
//  MyChart
//
//  Created by Alex J White on 12/8/16.
//  Copyright © 2016-2021 Epic Systems Corporation. All rights reserved.
//

#import "WPObject.h"

@interface WPGetPatientPreferencesResult : WPObject

@property (nonatomic, strong) NSString *emailAddress;
@property (nonatomic, strong) NSString *phoneNumber;

@end
