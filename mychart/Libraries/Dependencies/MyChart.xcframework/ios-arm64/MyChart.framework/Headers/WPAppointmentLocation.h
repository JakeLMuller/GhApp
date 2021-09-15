//
//  WPAppointmentLocation.h
//  MyChart
//
//  Created by David Huntsman on 5/14/18.
//  Copyright © 2018-2021 Epic Systems Corporation. All rights reserved.
//

/**
 * \brief Information related to inpatient or other non-DEP locations
 *
 * This class may be serialized
 */
#import "WPAddress.h"
@interface WPAppointmentLocation : WPObject

@property (nonatomic, strong, nullable) WPAddress* address;
@property (nonatomic, strong, nullable) NSMutableArray* instructions;
@property (nonatomic, strong, nullable) NSString* timeZone;

@end
