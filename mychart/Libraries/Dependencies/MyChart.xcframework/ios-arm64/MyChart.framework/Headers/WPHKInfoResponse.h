//
//  WPHKInfoResponse.h
//  iChart
//
//  Created by Ben Drda on 8/12/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPResponse.h"
#import "WPHKInfoResult.h"
#import "WPFlowsheetRowInfo.h"

/*!
 @author Ben Drda
 */
@interface WPHKInfoResponse : WPResponse

/*!
 @brief The result
 */
@property (nonatomic, strong) WPHKInfoResult *result;

@end
#endif
