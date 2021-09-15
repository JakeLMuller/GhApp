//
//  WPHKMakeLinkRequest.h
//  iChart
//
//  Created by Ben Drda on 8/15/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPRequest.h"
#import "WPHKLinkResponse.h"

/*!
 @brief Request for a Flowsheets/HealthKit/Link call
 @author Ben Drda
 */
@interface WPHKLinkRequest : WPRequest

/*!
 @brief Creates the response object
 @return the response object
 */
-(WPHKLinkResponse *) allocResponse;

@end
#endif
