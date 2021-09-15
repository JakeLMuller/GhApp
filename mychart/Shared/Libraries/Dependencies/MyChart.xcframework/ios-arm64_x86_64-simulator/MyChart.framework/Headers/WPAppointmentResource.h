//
//  WPAppointmentResource.h
//  iChart
//
//  Created by Larry Irwin II on 8/11/11.
//  Copyright © 2011-2021 Epic Systems Corporation. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC

#import <Foundation/Foundation.h>

#import "WPObject.h"
#import "WPProvider.h"

@class WPCategory;
@class WPDepartment;

/*
 * This object handles two objects on the C# side: AppointmentResource and AppointmentResourceWithDepartmentDetails
 * When parsing the AppointmentResourceWithDepartmentDetails, there will be no CENTER at this root level, it should exist in the Department object.
 *
 * I suppose that at some point we can create some trickery here so when ever someone tries to set/get the center we use the one within the department 
 * but that might make it tricky when we cannot guarantee which object gets set first (center might create a dep then only to have to replaced by XML parser)
 */
@interface WPAppointmentResource : WPObject

@property(nonatomic, strong, nullable) WPProvider*		provider;
@property(nonatomic, strong, nullable) WPDepartment*	department;

/*
 * Only populated when the department is summary data. This occurs when parsing "AppointmentResource" or just "Resource" nodes
 */
@property(nonatomic, strong, nullable) WPCategory*	center;

@end
