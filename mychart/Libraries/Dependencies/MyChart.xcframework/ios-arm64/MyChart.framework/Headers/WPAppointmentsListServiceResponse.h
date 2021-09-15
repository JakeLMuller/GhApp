//
//  WPAppointmentsListServiceResponse.h
//  iChart
//
//  Created by Adam on 6/9/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 01/2015 338750 Cleaning up

#import <Foundation/Foundation.h>
#import "WPResponse.h"
#import "WPObject.h"

//Result object
@interface WPAppointmentListResult : WPObject

@property (strong, nonatomic, nullable) NSMutableArray *appointmentList;
@property (strong, nonatomic, nullable) NSString* loadMoreDAT;

@end


/**
 * \brief Response for the appointment list query
 *
 * Gets a list of WPAppointment objects
 */
@interface WPAppointmentsListServiceResponse : WPResponse

@property (nonatomic,strong, nullable) WPAppointmentListResult *appointmentResultList;

@end
