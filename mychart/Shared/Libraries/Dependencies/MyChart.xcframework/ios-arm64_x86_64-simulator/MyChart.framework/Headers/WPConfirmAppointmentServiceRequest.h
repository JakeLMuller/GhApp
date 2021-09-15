//
//  WPConfirmAppointmentServiceRequest.h
//  iChart
//
//  Created by Chetan Satish on 9/13/09.
//  Copyright © 2009-2021 Epic Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WPRequest.h"
#import "WPAppointment.h"

@class WPConfirmAppointmentServiceResponse;

@interface WPConfirmAppointmentServiceRequest : WPRequest

- (nonnull id) initWithAppointment:(nullable WPAppointment *)appointment;
- (nullable NSData *)XMLData;

- (nonnull WPConfirmAppointmentServiceResponse*)allocResponse;

@end
