//
//  WPHKUnlinkRequest.h
//  iChart
//
//  Created by Ben Drda on 8/18/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPRequest.h"
#import "WPHKUnlinkResponse.h"
#import "WPDeviceInfo.h"

/*!
 @brief Request object for a Flowsheets/HealthKit/Unlink call
 @author Ben Drda
 */
@interface WPHKUnlinkRequest : WPRequest

/*!
 @brief The device being unlinked
 */
@property (nonatomic,strong) WPDeviceInfo *device;
/*!
 @brief Initialize the response object
 @return the response object
 */
-(WPHKUnlinkResponse *) allocResponse;

@end
#endif
