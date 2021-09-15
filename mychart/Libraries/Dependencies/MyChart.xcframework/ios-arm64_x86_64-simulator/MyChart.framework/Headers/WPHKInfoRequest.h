//
//  WPHKInfoRequest.h
//  iChart
//
//  Created by Ben Drda on 8/12/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPRequest.h"
#import "WPHKInfoResponse.h"

@class WPHKInfoResponse;
/*!
 @author Ben Drda
 */
@interface WPHKInfoRequest : WPRequest

/*!
 @brief Initializes the response object
 */
-(WPHKInfoResponse *) allocResponse;
/*!
 @brief Initializes a request with the link ID
 @param linkID the link ID from obtained from the link request
 */
-(instancetype) initWithLinkID: (NSString *) linkID;

@end
#endif
