//
//  WPHKLinkResult.h
//  iChart
//
//  Created by Ben Drda on 8/15/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPObject.h"

/*!
 @brief Value representing the success/failure of a Flowsheets/HealthKit/Link call
 */
static NSString * const kWPHKLinkResultSuccess = @"SUCCESS";
static NSString * const kWPHKLinkResultFailure = @"FAILURE";

/*!
 @brief Result from a Flowsheets/HealthKit/Link call
 */
@interface WPHKLinkResult : WPObject

/*!
 @brief the Link ID generated on the server. Needed to unlink the device later and to do background sync.
 */
@property (nonatomic, strong) NSString *linkID;
/*!
 @brief Value representing the success or failure of the linking call.
 */
@property (nonatomic, strong) NSString *status;

@end
#endif
