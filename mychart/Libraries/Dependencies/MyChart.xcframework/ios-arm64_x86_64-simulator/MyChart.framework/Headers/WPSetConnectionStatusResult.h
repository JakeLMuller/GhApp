//
//  WPSetConnectionStatusResult.h
//  iChart
//
//  Created by Matthew Flatau on 12/20/13.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.

#import "WPObject.h"
#import "WPTelemedicineError.h"

@class WPTelemedicineError;

@interface WPSetConnectionStatusResult : WPObject

@property (nonatomic, assign) WPTelemedicineResponseStatus status;
@property (nonatomic, strong) WPTelemedicineError *error;

@end

