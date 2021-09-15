//
//  WPHKBackgroundResponse.h
//  iChart
//
//  Created by Ben Drda on 8/7/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPResponse.h"
#import "WPPEFBackgroundResult.h"

/*!
 @brief Response for a Flowsheets/AddExternalResults call
 @author Ben Drda
 */
@interface WPHKBackgroundResponse : WPResponse

/*!
 @brief The result
 */
@property (nonatomic, strong) WPPEFBackgroundResult *result;
@end
#endif
