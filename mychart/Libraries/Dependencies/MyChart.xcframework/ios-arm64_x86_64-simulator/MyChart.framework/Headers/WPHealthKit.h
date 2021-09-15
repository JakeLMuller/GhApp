//
//  WPHealthKit.h
//  iChart
//
//  Created by Ben Drda on 8/5/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED

#import <Foundation/Foundation.h>
#import <HealthKit/HealthKit.h>
#import "WPHKInfoResponse.h"
#import "WPHealthKitInfo.h"
#import "WPHKLinkResponse.h"
#import "WPHKOrganizationMap.h"
#import "WPHKUnlinkResponse.h"
#import "WPDeviceInfo.h"
#import "WPServer.h"
#import "WPUser.h"
#import "WPHealthKitEnums.h"


/*!
 @brief handles interactions between the ViewControllers, the OS, and HealthKit
 @author bdrda
 */
@interface WPHealthKit : NSObject

/*!
 @brief Returns whether or not the current device has Health on it and thus whether we can use HealthKit APIs
 */
@property (nonatomic, readonly) BOOL isHealthKitAvailable;

/*!
 @brief Get the health singleton
 @return the singleton
 */
+(WPHealthKit *)healthKit;

/*!
 @brief Launches a new request to get info regarding any existing HealthKit links from this device or this patient and whether a new link can be made.
 @param target  on completion, the target's action will be invoked as per a request
 @param action  on completion, this action on the target will be invoked as per a request
 */
-(void) getConfigWithTarget: (id) target andAction: (SEL) action;

/*!
 @brief updates the org maps and rows with new data from the server and makes sure the response jives with what's stored on the device
 @param response    the response object we got.
 @return            the map for the currently logged in organization.
 */
-(WPHealthKitInfo *) didGetConfigWithResponse: (WPHKInfoResponse *) response;

/*!
 @brief launches a new request to link this device/patient with this organization via Health. The action should call didLinkWithResponse.
 @param target  the object the action should be invoked on as per a request
 @param action  the action that should be invoked as per a request
 */
-(void) doLinkWithTarget: (id) target andAction: (SEL) action;

/*!
 @brief completes the link on the device side and asks HealthKit for permission to read the given data types.
 @param response            the response from the link request
 @param orgID               the ID for an organization from the phonebook
 @param config              the result from the info request
 @param didGetPermissions   a block to call when we've gotten permission to read the data types
 @return                    YES if the link was a success. NO otherwise.
 */
-(BOOL) didLinkWithResponse:(WPHKLinkResponse *)response forOrg:(NSString *) orgID andConfig:(WPHealthKitInfo *)config withCompletionBlock:(void(^)(BOOL))didGetPermissions;

/*!
 @brief sends a request to unlink this patient and device from the current organization and from Health. Should call didUnlinkWithResponse afterwards.
 @param target  the object the action should be invoked on as per a request
 @param action  the action that should be invoked as per a request
 */
-(void) doUnlinkDevice:(WPDeviceInfo *)device withTarget:(id)target andAction: (SEL) action;

/*!
 @method        didUnlinkWithResponse:
 @brief updates the organization map after unlinking a device
 @param response    the response from the unlink call.
 @return            YES if the unlink succeeded. NO otherwise.
 */
-(BOOL) didUnlinkWithResponse: (WPHKUnlinkResponse *) response;

/*!
 @brief check if this organization is getting/sending data for this row type
 @param orgID   the id of the organization from the phonebook.
 @param type    the type of the row from I FLO 27000.
 @return        YES if the row type is being synced. NO otherwise.
 */
-(BOOL) isOrg:(NSString *)orgID syncingRowType:(WPFlowsheetRowDataType)rowType;

/*!
 @brief indicates that a job from the job bank is complete. Run the next one.
 */
-(void) completeJob;

/*!
 @brief determine whether asking for permission for all the rows in the info call would trigger the Health permissions pop-up
 @param config  result returned from the info request
 */
-(BOOL) arePermissionsNewForConfig:(WPHealthKitInfo *)config;

/*!
 @brief makes sure all the information from this device is synced to all servers
 */
-(void) executeAllObserverQueries;

/*!
 @brief Converts the given Health sample and row to a single string value
 @param quantity        the HKQuantity from a Health sample or statistics object
 @param quantityType    the QuantityType the Quantity is in
 @param row             the config row built from the info request
 @return                the quantity converted to a numeric string
 */
-(NSString *) stringForQuantity:(HKQuantity *)quantity quantityType:(HKQuantityType *)quantityType andRow:(WPHKOrganizationRow *)row;

/*!
 @brief Determines whether any of the types we've already asked permission correspond to Blood Pressure types
 @return    YES if Blood Pressure has been asked for, NO otherwise.
 */
-(BOOL) isBPInAskedForPermissions;

/*!
 @brief Resets the notification flag for all organizations
 */
- (void)applicationDidBecomeActive;

/*!
 @brief does log in tasks, currently updating map if the flavor changed from original to multi-row
 */
- (void)didLogInServer:(WPServer *)server user:(WPUser *)user;


+ (NSString*) stringForMetadataKey:(NSString*)key value:(NSString*)value;

@end

#endif
