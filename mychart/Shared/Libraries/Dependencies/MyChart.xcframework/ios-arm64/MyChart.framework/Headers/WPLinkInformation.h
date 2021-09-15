//
//  WPLinkInformation.h
//  iChart
//
//  Created by Ben Drda on 8/13/14.
//  Copyright © 2014-2021 Epic Systems Corporation. All rights reserved.
//

#if HEALTHKIT_ENABLED
#import "WPObject.h"
#import "WPHKOrganizationMap.h"

/*!
 @brief Represents the state of any links between this device and this patient and the logged-in organization. Part of the model to Flowsheets/HealthLink/Info
 @author Ben Drda
 */
@interface WPLinkInformation : WPObject
/*!
 @brief The server status from the link information call.
 */
@property (nonatomic) WPHKServerStatus status;
@end
#endif
