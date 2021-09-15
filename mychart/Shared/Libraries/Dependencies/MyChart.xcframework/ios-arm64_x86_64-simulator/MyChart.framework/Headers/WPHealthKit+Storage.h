//
//  WPHealthKit+Storage.h
//  iChart
//
//  Created by Ben Drda on 9/23/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import "WPHealthKit.h"
#import "WPHKOrganizationTypeGroup.h"

@interface WPHealthKit (Storage)
/*!
 @brief Retrieves all the org ids who have been linked with Health on this device
 @return     an array of NSString key objects
 */
-(NSArray *) orgIDsWithHealthKit;

/*!
 @brief Stores/overrides a row for a map for the given organization to disk
 @param row     the row from the info request
 @param orgID   the id for the organization from the phonebook
 */
-(WPHKOrganizationMap *) putRow:(WPHKOrganizationRow *)row intoOrg:(NSString *) orgID;

/*!
 @brief Gets a map from disk for the given organization
 @param orgID   the id of the organization from the phonebook
 @return        the organization map
 */
-(WPHKOrganizationMap *) mapForOrganization: (NSString *) orgID;

/*!
 @brief Removes the link ID, status, and rows of the given map and stores it to disk
 @param map     the map to unlink
 */
-(void) removeMap:(WPHKOrganizationMap *) map;

/*!
 @brief Indicates that a given organization is interested in receiving the given row types.
 @param rows    An array of WPFlowsheetRowInfo objects to add to the map
 @param map     the map
 */
-(void) addRows: (NSSet *) rows toMap:(WPHKOrganizationMap *) map;

/*!
 @brief stores the given map to disk
 @param map     the map to store
 */
-(void) updateMap:(WPHKOrganizationMap *)map;

/*!
 @brief Indicates that the given organization is no longer connected to Health.
 @param orgID   the ID for the organization from the phonebook.
 */
-(void) unlinkThisDeviceFromOrganization: (NSString *) orgID;

/*!
 @brief Adds any new row types to the types we've asked permission from health to access
 @param rows    a set of NSNumber I FLO 27000 values
 */
-(void) storeRowTypes: (NSSet *)rows;

/*!
 @brief Gets all the row types we've ever asked permission from health to access
 @return    a set of NSNumber I FLO 27000 values
 */
-(NSSet *) getRowTypes;

/*!
 @brief Clears the "didFailBackgroundSyncAlready" flag for all connected organziations
 */
- (void)resetBackgroundSyncFlags;

/*!
 @brief Puts together a group of organizations interested in the given row type
 @param rowType the I FLO 27000 value being looked at
 @return        the group that will have anchored queries looped over it
 */
-(WPHKOrganizationTypeGroup *)groupInterestedInRowType:(WPFlowsheetRowDataType)rowType;

@end
#endif
