//
//  HKQuantitySample+WP.h
//  MyChart
//
//  Created by Jacob Andrews-Ohlman on 7/30/19.
//  Copyright © 2019-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#include "WPHealthKit.h"

@interface HKQuantitySample (WP)
- (BOOL) isBasalInsulin;
- (BOOL) isBolusInsulin;
@end
#endif
