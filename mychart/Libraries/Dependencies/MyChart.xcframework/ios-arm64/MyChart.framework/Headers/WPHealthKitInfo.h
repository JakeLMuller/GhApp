//
//  WPHealthKitInfoResult.h
//  iChart
//
//  Created by Ben Drda on 8/12/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import <Foundation/Foundation.h>
#import "WPLinkInformation.h"

/*!
 @brief Results from the Flowsheets/HealthKit/Info call
 @author Ben Drda
 */
@interface WPHealthKitInfo : WPObject

/*!
 @brief Array of WPFlowsheetInfo objects that this server will accept for this patient.
 */
@property (nonatomic, strong) NSMutableSet *allowedRows;
/*!
 @brief Information about the status of the link with this device/patient/organization
 */
@property (nonatomic, strong) WPLinkInformation *linkInformation;
/*!
 @brief The maximum number of days to look back for new data.
 */
@property (nonatomic) NSUInteger maxSyncDays;
/*!
 @brief Whether the server will accept links for this patient from HealthKit
 */
@property (nonatomic) BOOL allowHealthKitLinking;
/*!
 @brief Array of WPDeviceInfo objects already connected with the server. May include this device.
 */
@property (nonatomic, strong) NSMutableArray *devices;

/*!
 @brief Determines whether any of the types in config is a Blood Pressure type
 @return        YES if Blood Pressure is present, NO otherwise
 */
-(BOOL) isBPInAllowedRows;

@end
#endif
