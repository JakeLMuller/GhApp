//
//  WPHKBackgroundSyncHandler.h
//  iChart
//
//  Created by Ben Drda on 8/8/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import "WPHKOrganizationMap.h"
#import "WPHKBackgroundResponse.h"
#import "WPAsyncTaskTracker.h"
#import "WPFlowsheetRowInfo.h"
#import "WPHKBackgroundPost.h"

static NSString * const kWPHKBackgroundSyncErrorDomain = @"com.epic.MyChart.HK.BackgroundSyncError";

typedef NS_ENUM(NSInteger, WPHKBackgroundSyncErrorEnum) {
    kWPHKBackgroundSyncErrorEnumReturnValuePartialSuccess,
    kWPHKBackgroundSyncErrorEnumReturnValueFailure,
    kWPHKBackgroundSyncErrorEnumHttp404,
    kWPHKBackgroundSyncErrorEnumHttp500,
    kWPHKBackgroundSyncErrorEnumNoNetwork,
    kWPHKBackgroundSyncErrorEnumOther,
    kWPHKBackgroundSyncErrorEnumDisconnected,
    kWPHKBackgroundSyncErrorEnumUpgrade,
} ;

/*!
 @brief Has logic for interactions between background sync posts, WPHealthKit calls for device storage, and the UI.
 @author Ben Drda
 */
@interface WPHKBackgroundSyncHandler : NSObject

/*!
 @brief Tees up a background data request
 @param primaryOrgID    the organization the request is being sent to
 @param rowType         the epic data type from FLO 27000 being sent
 @param anchor          what the HK anchor should be after the request is complete
 @param results         the results we got from HK, an array of HKQuantitySample objects
 @param queue           the serial queue used to do the tracker decrements
 @param tracker         the tracker to decrement when the task is complete
 @param request         the actual request to send
 @return                a new background sync handler
 */
-(instancetype) initWithOrg:(NSString *)primaryOrgID rowType:(WPFlowsheetRowDataType)rowType anchor: (HKQueryAnchor *) anchor syncDate:(NSDate *)syncDate queue: (dispatch_queue_t) queue tracker:(WPAsyncTaskTracker *) tracker request:(WPHKBackgroundPost *)request;

/*!
 @brief Updates the on-disk map and decrements the tracker on the given queue
 @param response    the response from the server for the request
 */
-(void) didReceiveResponse: (WPHKBackgroundResponse *) response;

/*!
 @brief Executes the request on the UI thread
 */
-(void) execute;

@end
#endif
