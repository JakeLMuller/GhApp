//
//  WPHKUnlinkResponse.h
//  iChart
//
//  Created by Ben Drda on 8/18/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPResponse.h"
#import "WPHKUnlinkResult.h"

/*!
 @brief The response object for a Flowsheets/HealthKit/Unlink
 */
@interface WPHKUnlinkResponse : WPResponse

/*!
 @brief The result
 */
@property (nonatomic, strong) WPHKUnlinkResult *result;

@end
#endif
