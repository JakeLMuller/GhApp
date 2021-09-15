//
//  WPPEFBackgroundResult.h
//  iChart
//
//  Created by Ben Drda on 8/11/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>

static NSString * const kWPPEFBackgroundResultSuccess = @"SUCCESS";
static NSString * const kWPPEFBackgroundResultFailure = @"FAILURE";
static NSString * const kWPPEFBackgroundResultPartialSuccess = @"PARTIAL-SUCCESS";
static NSString * const kWPPEFBackgroundResultDisconnected = @"DISCONNECTED";
static NSString * const kWPPEFBackgroundResultUpgrade = @"BADVERSION";

/*!
 @brief Result from a Flowsheets/AddExternalReadings call.
 @author Ben Drda
 */
@interface WPPEFBackgroundResult : WPObject
/*!
 @brief Whether the call succeeded or not
 */
@property (nonatomic) NSString *status;
@end
#endif
