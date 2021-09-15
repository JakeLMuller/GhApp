//
//  WPHKBackgroundPost.h
//  iChart
//
//  Created by Ben Drda on 8/6/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPHealthKit.h"
#import "WPRequest.h"
#import "WPHKOrganizationMap.h"
#import "WPFlowsheetRowInfo.h"

/*!
 @brief Request to send Health readings possibly in the background to Flowsheets/AddExternalReadings
 @author Ben Drda
 */
@interface WPHKBackgroundPost : WPRequest

@property (nonatomic, strong) WPHKOrganizationMap *map;
@property (nonatomic, readonly) BOOL hasReadings;

/*!
 @brief Initializes the post
 @param map     The organization and link we're posting to
 @param rowType    The type of the data mapped to I FLO 27000
 @param results Array of HKQuanitySample objects
 @return        a new WPHKBackgroundPost object
 */
- (instancetype)initWithRowType:(WPFlowsheetRowDataType)rowType samples:(NSArray *)results org:(NSString *)primaryOrgID;

- (instancetype)initWithRowType:(WPFlowsheetRowDataType)rowType statisticsCollection:(HKStatisticsCollection *)collection org:(NSString *)primaryOrgID;

- (instancetype)initWithRowType:(WPFlowsheetRowDataType)rowType statisticsCollection:(HKStatisticsCollection *)collection org:(NSString *)primaryOrgID strictMetadata:(NSMutableDictionary*)strictMetadata;

@end
#endif
