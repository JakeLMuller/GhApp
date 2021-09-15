//
//  WPHKOrganizationTypeGroup.h
//  iChart
//
//  Created by Ben Drda on 9/15/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import <HealthKit/HealthKit.h>
#import "WPFlowsheetRow.h"


typedef void(^WP_HK_GROUP_COMPLETION_BLOCK)(BOOL, NSDictionary *);

/*!
 @brief Class to help serialize returns from observer queries. Stores a group of organizations interested in a given Health type, and Health indicated that this health type just returned data. When one group is complete and has updated its latest reading dates and anchors, it's safe to move other ones in.
 @author Ben Drda
 */
@interface WPHKOrganizationTypeGroup : NSObject {
    NSMutableArray *_primaryOrgIDs;
}
/*!
 @brief array of NSString objects that are org IDs
 */
@property (nonatomic, strong, readonly) NSArray *primaryOrgIDs;
/*!
 @brief given a bool, does any completing actions for the completed group
 */
@property (nonatomic, strong) WP_HK_GROUP_COMPLETION_BLOCK groupCompletionBlock;
/*!
 @brief the type the group of orgs are interested in
 */
@property (nonatomic, strong, readonly) HKSampleType *healthType;
/*!
 @brief the type the group of orgs are interested in, I FLO 27000 value
 */
@property (nonatomic) WPFlowsheetRowDataType rowType;

/*!
 @brief initializes a group
 @param rowType the I FLO 27000 type to query
 */
-(instancetype) initWithRowType:(WPFlowsheetRowDataType)rowType;

/*!
 @brief call to indicate that a query should be run for this organization
 @param orgID   an organization interested in this health type
 */
-(void) addOrgID:(NSString *)orgID;
@end
#endif
