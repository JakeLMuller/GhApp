//
//  WPHealthKitInfoResult.h
//  iChart
//
//  Created by Ben Drda on 9/13/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPObject.h"
#import "WPHealthKitInfo.h"

/*!
 @brief Value representing the success/failure of a Flowsheets/HealthKit/Unlink call
 */

static NSString * const kWPHealthKitInfoResultSuccess = @"SUCCESS";
static NSString * const kWPHealthKitInfoResultFailure = @"FAILURE";

/*!
 @brief Result from a Flowsheets/HealthKit/Unlink call
 @author Ben Drda
 */
@interface WPHKInfoResult : WPObject
/*!
 @brief Value representing the success/failure of a Flowsheets/HealthKit/Info call
 */
@property (nonatomic, strong) NSString *status;

/*!
 @brief Value containing the atual info of a Flowsheets/HealthKit/Info call
 */
@property (nonatomic, strong) WPHealthKitInfo *healthKitInfo;

@end
#endif
