//
//  WPHKUnlinkResult.h
//  iChart
//
//  Created by Ben Drda on 8/18/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPObject.h"

/*!
 @brief Value representing the success/failure of a Flowsheets/HealthKit/Unlink call
 */

static NSString * const kWPHKUnlinkResultSuccess = @"SUCCESS";
static NSString * const kWPHKUnlinkResultFailure = @"FAILURE";

/*!
 @brief Result from a Flowsheets/HealthKit/Unlink call
 @author Ben Drda
 */
@interface WPHKUnlinkResult : WPObject
/*!
 @brief Value representing the success/failure of a Flowsheets/HealthKit/Unlink call
 */
@property (nonatomic, strong) NSString *status;

@end
#endif
