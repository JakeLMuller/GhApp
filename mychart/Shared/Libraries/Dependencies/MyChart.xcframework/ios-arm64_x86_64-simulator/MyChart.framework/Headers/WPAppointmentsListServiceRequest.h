//
//  WPAppointmentsListServiceRequest.h
//  iChart
//
//  Created by Adam on 6/9/09.
//  Copyright © 2009-2021 Epic Systems Corp. All rights reserved.
//
// REVISION HISTORY:
//  *jdumke 10/12 242239 add initWithType
//  *mflatau 06/2014 316778 Updating to ARC
//  *mflatau 07/2014 322012 Fix use of properties.
//  *mflatau 03/2015 354336 Changing enum to NS_ENUM

#import <Foundation/Foundation.h>
#import "WPRequest.h"

/**
 * \brief Determines which type of appointment query to make
 */
typedef NS_ENUM(NSInteger, kWPAppointmentServiceType) {
	kWPAppointmentServiceFuture, /**< Get future apts, no arguments, no limit on # of return results */
	kWPAppointmentServicePast,	  /**< Get past apts, DAT or no arguments, limited # of return results */
	kWPAppointmentServiceLinked,
} ;

@class WPAppointmentsListServiceResponse;

/**
 * \brief Gets the appointment list
 *
 * This is a rich query that grabs the entire appointment list and all related data
 *
 * In addition, this Request encapsulates three different URL calls:
 * <ul>
 * <li>Future Appointments</li>
 * <li>Past Appointments</li>
 * <li>Past Appointments starting with a given DAT</li>
 * </ul>
 */
@interface WPAppointmentsListServiceRequest : WPRequest

@property (nonatomic,strong) NSString* dat; /**< For past requests, the DAT to use */
@property (nonatomic,assign) kWPAppointmentServiceType type;  /**< Type of request */

/**
 * Initialize this object
 * By deafult this request:
 * <ul>
 * <li>CAN persist data</li>
 * <li>Is NOT Mostly Static</li>
 * <li>Does NOT need live data</li>
 * </ul>
 */
-(id)initWithType:(kWPAppointmentServiceType)serviceType;

/**
 * Allocates a new response object
 *
 * @return a new allocated WPAppointmentsListServiceResponse
 */
-(WPAppointmentsListServiceResponse*)allocResponse;

@end
