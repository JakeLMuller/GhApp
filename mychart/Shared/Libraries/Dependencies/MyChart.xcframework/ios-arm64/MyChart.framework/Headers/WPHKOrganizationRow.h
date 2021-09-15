//
//  WPHKOrganizationRow.h
//  iChart
//
//  Created by Ben Drda on 8/6/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import "WPHealthKit.h"
#import "WPFlowsheetRowInfo.h"

/*!
 @brief Stores all the information needed about one row type in relation to a single organization.
 @author Ben Drda
 */
@interface WPHKOrganizationRow : NSObject <NSCoding>
/*!
 @brief The TYPE of the row (from I FLO 27000)
 */
@property (nonatomic) WPFlowsheetRowDataType rowType;
/*!
 @brief The latest anchor corresponding to data that the server successfully received from Health for this row type.
 */
@property (nonatomic, strong) HKQueryAnchor * anchor;
/*!
 @brief The last time the server got data from Health for this row type.
 */
@property (nonatomic, strong) NSDate *syncDate;
/*!
 @brief What unit the server expects data of this row type to be in when coming from Health
 */
@property (nonatomic, strong) NSString *unitString;

/*!
 @brief Initializes a row with the given model row info from the server. State of the row after this should have a type and unitString.
 @param info Row information we can get from the server from a Flowsheets/HealthKit/Info call
 */
- (instancetype)initWithRowInfo: (WPFlowsheetRowInfo *) info;

/*!
 @brief Initializes a row with no predefined information.
 */
- (instancetype)init;

@end
#endif
