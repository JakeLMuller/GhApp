//
//  WPFlowsheetRowInfo.h
//  iChart
//
//  Created by Ben Drda on 8/12/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>

#import "WPFlowsheetRow.h"

/*!
 @brief Information about a flowsheet row as part of the Flowsheets/Health/Info call. This is used to set up background sync
 @author Ben Drda
 */
@interface WPFlowsheetRowInfo : WPObject
/*!
 @brief The type of the row from I FLO 27000
 */
@property (nonatomic) WPFlowsheetRowDataType type;
/*!
 @brief The unit of the row. Accepts HKUnit notation. Otherwise uses a default.
 */
@property (nonatomic) NSString *unit;
@end
#endif
