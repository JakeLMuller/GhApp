//
//  WPBloodPressureReading.h
//  iChart
//
//  Created by Matthew Flatau on 9/5/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPFlowsheetReading.h"

@interface WPFlowsheetReading (Blood)
@property (nonatomic, readonly) BOOL isBloodPressure;
@end

@interface WPBloodPressureReading : WPFlowsheetReading

@property (nonatomic, strong) WPFlowsheetReading *systolicReading;
@property (nonatomic, strong) WPFlowsheetReading *diastolicReading;

- (id)initWithSystolicReading:(WPFlowsheetReading *)systolicReading andDiastolicReading:(WPFlowsheetReading *)diastolicReading;

- (void)createDisplayString;

@end
#endif
